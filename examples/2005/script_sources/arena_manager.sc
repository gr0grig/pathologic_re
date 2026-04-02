include std.sci
include stationary_base.sci
include idle_logic.sci
include NPC_Morlok.sci
include game.sci
include dialogs.sci

// CONSTANTS
const float c_fDarkenTime = 0.75;
// CONSTANTS

const int c_iLookTimerID = 10;
const float c_fLookTimerElapse = 0.75;

var Vector g_vInitDirection;
var bool m_bLooking;

bool CheckDistance(object player)
{
	if (player == null)
		return false;
	float fDist = sqrt(GetActorDistanceSqr(player));
	if (m_bLooking)
		fDist -= 100;
	return fDist < 300;
}

maintask TManager : TStationaryBase
{
	var bool m_bIdling, m_bWin;

	void init(void) {
		m_bIdling = false;
		m_bLooking = false;
		m_bWin = false;
		g_vInitDirection = GetInitDirection();
		@SetTimer(c_iLookTimerID, c_fLookTimerElapse);
		super.init();
	}
	
	Vector GetInitDirection(void) {
		Vector vDirection;
		@GetDirection(vDirection);
		return vDirection;
	}

	void OnUse(object player) {
		CancelActivity();
		
		if (m_bWin) {
			TDlg_ArenaManagerWin{player};
			m_bWin = false;
			return;
		}
		else {
			if (1 != TDlg_ArenaManager{player})
				return;
		}
			
		@KillTimer(c_iLookTimerID);
		TBattle{player};
		m_bWin = true;
		@SetTimer(c_iLookTimerID, c_fLookTimerElapse);
	}

	void OnTimer(int id) {
		if (id == c_iLookTimerID) {
			object player;
			@FindActor(player, "player");
			if (CheckDistance(player)) {
				if (!m_bLooking) {
					HeadLook(player);
					m_bLooking = true;
				}
			}
			else {
				if (m_bLooking) {
					@UnlookAsync("head");
					m_bLooking = false;
				}
			}
		}
	}

	void CancelActivity(void) {
		if (m_bIdling) {
			@StopAnimation();
		}
		else {
			super.CancelActivity();
		}
	}

	void DoSomething(void) {
		m_bIdling = true;
		int nAnims = GetIdleAnimationCount();
		if (nAnims) {
			int nAnimation;
			@irand(nAnimation, nAnims);
			@PlayAnimation("all", GetIdleAnimation(nAnimation));
			@WaitForAnimEnd();
		}
		m_bIdling = false;
	}
}

task TBattle
{
	var object m_Container1, m_ContAmount1;
	var object m_Container2, m_ContAmount2;
	var object m_Container3, m_ContAmount3;
	var object m_Container4, m_ContAmount4;
	var object m_Container5, m_ContAmount5;

	var object m_ContainerSel1;
	var object m_ContainerSel2;
	var object m_ContainerSel3;
	var object m_ContainerSel4;
	var object m_ContainerSel5;
	
	var object m_Spectators;

	void init(object player) {
		m_Spectators = CreateObjectVector();

		IncrementNoAccess(player);
		DisableInventoryDrop();
		DisableContainerUse();

		Vector vInitDirection = g_vInitDirection;
		@LockCamera();
		@RotateAsync(-vInitDirection.x, -vInitDirection.z);
		Darken(0, 1, c_fDarkenTime);

		@CreateIntVector(m_ContAmount1);
		@CreateIntVector(m_ContAmount2);
		@CreateIntVector(m_ContAmount3);
		@CreateIntVector(m_ContAmount4);
		@CreateIntVector(m_ContAmount5);

		m_Container1 = GetContainerItems(player, 0, m_ContAmount1);
		m_Container2 = GetContainerItems(player, 1, m_ContAmount2);
		m_Container3 = GetContainerItems(player, 2, m_ContAmount3);
		m_Container4 = GetContainerItems(player, 3, m_ContAmount4);
		m_Container5 = GetContainerItems(player, 4, m_ContAmount5);
		m_ContainerSel1 = GetContainerSelItems(player, 0);
		m_ContainerSel2 = GetContainerSelItems(player, 1);
		m_ContainerSel3 = GetContainerSelItems(player, 2);
		m_ContainerSel4 = GetContainerSelItems(player, 3);
		m_ContainerSel5 = GetContainerSelItems(player, 4);

		ClearWeaponsContainer(player);

		for (int i = 1; i < 5; ++i) {
			player->RemoveAllItems(i);
		}

		/*object item;
		@CreateInvItem(item);
		item->SetItemName("Scalpel");
		bool bAdded;
		player->AddItem(bAdded, item, 0);
		int iItemIndex;
		player->GetItemCount(iItemIndex, 0);
		player->SelectItem(iItemIndex - 1, true, 0);
		*/
		player->SelectWeapon();

		object scene;
		@GetScene(scene);
		
		Vector vPlayerPos, vPlayerDir;
		Vector vEnemyPos, vEnemyDir;
		
		bool bExist;
		scene->GetLocator("pt_arena_player", bExist, vPlayerPos, vPlayerDir);
		scene->GetLocator("pt_arena_enemy", bExist, vEnemyPos, vEnemyDir);

		@Teleport(player, scene, vPlayerPos, vPlayerDir);
		object enemy;
		@AddActor(enemy, "pers_butcher", scene, vEnemyPos, vEnemyDir, "arena_fighter.xml");

		AddSpectator(scene, "pers_worker", "arena_spectator_worker.xml", "pt_arena_spectator1");
		AddSpectator(scene, "pers_worker", "arena_spectator_worker.xml", "pt_arena_spectator2");
		AddSpectator(scene, "pers_unosha", "arena_spectator_unosha.xml", "pt_arena_spectator3");
		AddSpectator(scene, "pers_unosha", "arena_spectator_unosha.xml", "pt_arena_spectator4");
		AddSpectator(scene, "pers_unosha", "arena_spectator_unosha2.xml", "pt_arena_spectator5");
		AddSpectator(scene, "pers_dohodyaga", "arena_spectator_dohodyaga.xml", "pt_arena_spectator6");
		AddSpectator(scene, "pers_boy", "arena_spectator_boy.xml", "pt_arena_spectator7");

		@Rotate(-vInitDirection.x, -vInitDirection.z);
		HeadLook(player);

		Darken(1, 0, c_fDarkenTime);

		@UnlockCamera();

		for (;;) {
			@Sleep(1);
			if (player != null) {
				bool bDead;
				enemy->IsDead(bDead);
				if (bDead)
					break;
			}
		}

		// player wins!

		@LockCamera();
		@RotateAsync(vInitDirection.x, vInitDirection.z);
		Darken(0, 1, c_fDarkenTime);
		
		@RemoveActor(enemy);
		RemoveSpectators();
		
		RestoreContainer(player, 0, m_Container1, m_ContAmount1, m_ContainerSel1);
		RestoreContainer(player, 1, m_Container2, m_ContAmount2, m_ContainerSel2);
		RestoreContainer(player, 2, m_Container3, m_ContAmount3, m_ContainerSel3);
		RestoreContainer(player, 3, m_Container4, m_ContAmount4, m_ContainerSel4);
		RestoreContainer(player, 4, m_Container5, m_ContAmount5, m_ContainerSel5);
		player->SelectWeapon();

		Vector vReturnPos, vReturnDir;
		scene->GetLocator("pt_arena_return", bExist, vReturnPos, vReturnDir);
		@Teleport(player, scene, vReturnPos, vReturnDir);

		@StopAsync();
		@Rotate(vInitDirection.x, vInitDirection.z);

		Darken(1, 0, c_fDarkenTime);
		
		@UnlockCamera();

		EnableContainerUse();
		EnableInventoryDrop();
		DecrementNoAccess(player);
	}

	void ClearWeaponsContainer(object player) {
		int iItemCount;
		player->GetItemCount(iItemCount, 0);
		for (int i = 0; i < iItemCount; ++i) {
			object item;
			player->GetItem(item, i);
			int iItemID;
			item->GetItemID(iItemID);
			bool bHas;
			@HasInvItemProperty(bHas, iItemID, "Group");
			if (bHas) {
				int iGroup;
				@GetInvItemProperty(iGroup, iItemID, "Group");
				if (iGroup != 0) {
					continue;
				}
				else {
					bool bSel;
					player->IsItemSelected(bSel, i, 0);
					if (bSel)
						continue;
				}
			}
			int iAmount;
			player->GetItemAmount(iAmount, i, 0);
			player->RemoveItem(i, iAmount, 0);
			--i;
			--iItemCount;
		}
	}
	
	void AddSpectator(object scene, string filename, string xmlname, string loc) {
		Vector vPos, vDir;
		bool bExist;
		scene->GetLocator(loc, bExist, vPos, vDir);
		if (!bExist) {
			@Trace("Locator doesn't exist for arena spectator " + loc);
			return;
		}

		object spec;
		scene->AddStationaryActor(spec, vPos, vDir, filename, xmlname, true);
		m_Spectators->add(spec);
	}
	
	void RemoveSpectators(void) {
		int iCount;
		m_Spectators->size(iCount);
		for (int i = 0; i < iCount; ++i) {
			object spec;
			m_Spectators->get(spec, i);
			object actor;
			spec->GetActor(actor);
			if (actor != null)
				@RemoveActor(actor);
			spec->Remove();
		}
		m_Spectators->clear();
	}
}

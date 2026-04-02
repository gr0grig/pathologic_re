include std.sci
include attack_melee.sci
include death_base.sci
include std2_melee_attack.sci

var object g_Container1, g_ContAmount1;
var object g_Container2, g_ContAmount2;
var object g_Container3, g_ContAmount3;
var object g_Container4, g_ContAmount4;
var object g_Container5, g_ContAmount5;

var object g_ContainerSel1;
var object g_ContainerSel2;
var object g_ContainerSel3;
var object g_ContainerSel4;
var object g_ContainerSel5;

void HandleDeath(object actor)
{
	TDeath{actor};
}

void OnHit(object actor, int iHitType, float fDamage, float fHit)
{
	StdHandleHit(actor, iHitType, fDamage);
}

void OnHit2(object actor, int iHitType, float fDamage, float fHit, Vector vPos, Vector vDir)
{
	StdHandleHit2(actor, iHitType, fDamage, vPos, vDir);
}

void OnPropertyChange(object actor, string strProp)
{
	if (strProp == "health") {
		float fHealth;
		@GetProperty("health", fHealth);
		if (fHealth <= 0) {
			@SignalDeath(actor);
		}
	}
}

void OnDeath(object actor)
{
	HandleDeath(actor);
}

maintask TStarshina : TAttackMeleeBase
{
	void init(void) {
		//TWaitForLoad{};
	
		object player = GetPlayerActor();

		g_ContAmount1 = CreateIntVector();
		g_ContAmount2 = CreateIntVector();
		g_ContAmount3 = CreateIntVector();
		g_ContAmount4 = CreateIntVector();
		g_ContAmount5 = CreateIntVector();

		g_Container1 = GetContainerItems(player, 0, g_ContAmount1);
		g_Container2 = GetContainerItems(player, 1, g_ContAmount2);
		g_Container3 = GetContainerItems(player, 2, g_ContAmount3);
		g_Container4 = GetContainerItems(player, 3, g_ContAmount4);
		g_Container5 = GetContainerItems(player, 4, g_ContAmount5);
		g_ContainerSel1 = GetContainerSelItems(player, 0);
		g_ContainerSel2 = GetContainerSelItems(player, 1);
		g_ContainerSel3 = GetContainerSelItems(player, 2);
		g_ContainerSel4 = GetContainerSelItems(player, 3);
		g_ContainerSel5 = GetContainerSelItems(player, 4);
		
		for (int i = 0; i < 5; ++i) {
			player->RemoveAllItems(i);
		}
		player->SelectWeapon();

		@SensePlayerOnly(true);
		
		@Sleep(1.5);

		for (;;) {
			super.init(player, true, c_fAttackDistance + 30);
			@Sleep(1);
		}
	}

	float GetDamageAmount(object actor, int iAttackType) {return 0.25;}
	int GetDamageType(object actor, int iAttackType) {return c_iHitTypePhysical;}
}

task TFollowAttackMelee : TFollowAttackMeleeBase
{
}

task TDeath : TDeathDirBase
{
	void init(object actor) {
		super.init(actor);

		object scene;
		@GetSceneByName(scene, "boiny_arena");
		@RemoveScene(scene);
		
		RemoveActorByName("NPC_Starshina");

		object player = GetPlayerActor();

		RestoreContainer(player, 0, g_Container1, g_ContAmount1, g_ContainerSel1);
		RestoreContainer(player, 1, g_Container2, g_ContAmount2, g_ContainerSel2);
		RestoreContainer(player, 2, g_Container3, g_ContAmount3, g_ContainerSel3);
		RestoreContainer(player, 3, g_Container4, g_ContAmount4, g_ContainerSel4);
		RestoreContainer(player, 4, g_Container5, g_ContAmount5, g_ContainerSel5);
		player->SelectWeapon();

		TeleportActor(player, "boiny", "pt_Starshina");
		TriggerActor("quest_b11_01", "fight_win");
		
		for (;;) {
			@Hold();
		}
	}
}

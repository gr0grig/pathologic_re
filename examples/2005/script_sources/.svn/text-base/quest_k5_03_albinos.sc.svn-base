include std.sci
include NPC_Albinos.sci
include idle.sci
include retreat.sci
include death_base.sci
include points_follower.sci
include kgame.sci

// CONSTANTS
const float c_fDamageFreq = 1;
const float c_fDamageAmount = 0.05;
const float c_fDamageDist = 800;
// CONSTANTS

const int c_iDamageTimer = 100;

void DamagePlayer(void)
{
	object player;
	@FindActor(player, "player");
	if (player) {
		if (GetActorDistanceSqr(player) <= c_fDamageDist * c_fDamageDist) {
			float fDamage = Damage(player, c_fDamageAmount, c_iDamageTypePhysical);
			@ReportHit(player, c_iHitTypeMental, fDamage, c_fDamageAmount);
		}
	}
}

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
	if (IsPlayerActor(actor))
		PlayerModReputation(actor, -0.1);
	HandleDeath(actor);	
}

task TAlbinosIdle : TIdleBaseLookAsync
{
	void init(void) {
		for (;;) {
			super.init(300, 100);
			@Sleep(3);
		}
	}
	
	void OnUse(object actor) {
		CancelActivity();
		TDlg_DN5_Klara_Albinos{actor};
		TRetreat{actor, false};
	}
	
	void OnAttacked(object actor) {
		//CancelActivity();
		//TRetreat{actor, true};
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}
	
	void OnUnload(void) {
		TriggerActor("quest_k5_03", "abinos_unload");
		@Hold();
	}	
}

maintask TRun : TPointsFollower
{
	var int m_iStartPoint;
	void init(void) {
		object scene;
		@GetScene(scene);
		scene->RemoveStationaryActor(self());
		@GetVariable("pt_k5q03_albinos_path", m_iStartPoint);
		if (m_iStartPoint != -1)
			super.init("pt_k5q03_albinos_path", m_iStartPoint, true);
		TAlbinosIdle{};
	}

	void OnAttacked(object actor) {
		//CancelActivity();
		//TRetreat{actor, true};
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}
	
	void OnUnload(void) {
		TriggerActor("quest_k5_03", "abinos_unload");
		@Hold();
	}
}

task TRetreat : TRetreatBase
{
	void init(object actor, bool bDamage) {
		if (bDamage)
			@SetTimer(c_iDamageTimer, c_fDamageFreq);
		super.init(actor);	
	}
	
	void OnUnload(void) {
		TriggerActor("quest_k5_03", "albinos_retreated");
		@Hold();
	}

	void OnTimer(int id)
	{
		if (id == c_iDamageTimer)
			DamagePlayer();
		else
			super.OnTimer(id);
	}
}

task TDeath : TDeathDirHoldBase
{
}

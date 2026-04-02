include std.sci
include idle.sci
include retreat.sci
include NPC_wasted_male.sci
include kgame.sci

void OnHit(object actor, int iHitType, float fDamage, float fHit)
{
	StdHandleHit(actor, iHitType, fDamage);
}

void OnHit2(object actor, int iHitType, float fDamage, float fHit, Vector vPos, Vector vDir)
{
	StdHandleHit2(actor, iHitType, fDamage, vPos, vDir);
}

void OnDeath(object actor) {}

maintask TWastedMale : TIdleBaseLookAsync
{
	void init(void) {
		for (;;) {
			@Sleep(3);
			super.init(300, 100);
		}
	}

	void OnUse(object actor) {
		CancelActivity();
		int iRet = TDlg_DN10_Klara_WastedMalePrison{actor};
		if (iRet == 0) {
			object scene;
			@GetScene(scene);
			scene->RemoveStationaryActor(self());
			TRetreat{actor};
		}
	}
}

task TRetreat : TRetreatBase
{
}

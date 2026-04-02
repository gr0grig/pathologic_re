include std.sci
include item_base.sci

task TDeathBase
{
	void init(string strAnimation) {
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		@StopSecondaryAnimation();
		PlayAnimationSound(strAnimation);
		@PlayAnimation("all", strAnimation);
		@WaitForAnimEnd();
		@LockAnimationEnd("all", strAnimation);
		@RemoveEnvelope();
	}
	
	void OnHit(object actor, int iHitType, float fDamage, float fHit) {}
	void OnPropertyChange(object actor, string strProp) {}
	void OnDeath(object actor) {}
}

task TDeathHoldBase : TDeathBase
{
	void init(string strAnimation) {
		super.init(strAnimation);
		for (;;) {
			@Hold();
		}
	}
}

task TDeathDirBase : TDeathBase
{
	void init(object actor) {
		if (actor == null) {
			super.init("fdie");
		}
		else {
			Vector vActorPos, vCurPos, vLookDir;
			actor->GetPosition(vActorPos);
			@GetPosition(vCurPos);
			@GetDirection(vLookDir);
			Vector vDelta = vCurPos - vActorPos;
			string strAnimation = ((vDelta.x * vLookDir.x + vDelta.z * vLookDir.z >= 0)? "fdie" : "bdie");
			
			@RemoveRTEnvelope();
			@SetDeathState();
			@Stop();
			@StopAsync();

			object owner = actor;
			if (actor->FuncExist("GetScriptProperty", 2)) {
				bool bHas;
				actor->HasScriptProperty(bHas, "Owner");
				if (bHas) {
					actor->GetScriptProperty(owner, "Owner");
					if (owner == null) {
						owner = actor;
					}
				}
			}

			bool bLooking;
			if (owner->FuncExist("@GetEyesHeight", 1)) {
				float fEyesHeight;
				owner->GetEyesHeight(fEyesHeight);
				Vector vOffset = [0, 0, 0];
				vOffset.y = fEyesHeight;
				@LookAsync(actor, "head", vOffset);
				bLooking = true;
			}
			else {
				bLooking = false;
			}

			PlayAnimationSound(strAnimation);
			@PlayAnimation("all", strAnimation);
			@WaitForAnimEnd();
			if (bLooking) {
				@StopAsync();
				@UnlookAsync("head");
			}
			@LockAnimationEnd("all", strAnimation);
			@RemoveEnvelope();
		}
	}
}

task TDeathDirHoldBase : TDeathDirBase
{
	void init(object actor) {
		super.init(actor);
		for (;;) {
			@Hold();
		}
	}
}

task TDeathDirUsableBase : TDeathDirBase
{
	void init(object actor) {
		disable OnUse;
		super.init(actor);
		@SetRTEnvelope(50, 40);
		enable OnUse;
		for (;;) {
			@Hold();
		}
	}

	void OnUse(object actor) {
		bool bActive;
		@IsOverrideActive(bActive);
		if (!bActive)
			HumanBarter(actor);
	}
}

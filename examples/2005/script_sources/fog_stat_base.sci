include std.sci

// CONSTANTS
const float c_fVisDist = 600;
const float c_fAttackDist = 200;
const float c_fDiseaseAmount = 0.1;
// CONSTANTS

bool ShouldBecomeVisible(object player)
{
	return player && GetActorDistanceSqr(player) < c_fVisDist * c_fVisDist;
}

bool ShouldAttackPlayer(object player)
{
	return GetActorDistanceSqr(player) < c_fAttackDist * c_fAttackDist;
}

task TFogStatBase
{
	void init(void) {
		for (;;) {
			object player = GetPlayerActor();
			while (ShouldBecomeVisible(player)) {
				TPlayerAttack{player};
			}
			@Sleep(1);
		}
	}
}

task TPlayerAttackBase
{
	void init(object actor) {
		float fHeight;
		@GetHeight(fHeight);
		Vector vOffset = [0, 0, 0];
		vOffset.y = fHeight;
		object sound;
		@PlayLoopedGlobalSound(sound, "attack", vOffset);
		@FogLinear(1, 1);
		for (;;) {
			if (!IsLoaded())
				return;
			if (ShouldAttackPlayer(actor)) {
				float fDamage = Disease(actor, c_fDiseaseAmount);
				@ReportHit(actor, c_iHitTypeDisease, fDamage, c_fDiseaseAmount);
			}
			@Sleep(1);
			if (!ShouldBecomeVisible(actor))
				break;
		}
		@FogLinear(0, 1);
		sound->FadeOut(1);
		@Sleep(1);
	}
}

include std.sci

// CONSTANTS
const float c_fHuntDist = 1500;
const float c_fDiseaseDist = 300;
const float c_fDiseaseAmount = 0.25;
// CONSTANTS

task TFogAttack
{
	void init(object actor) {
		@FogLinear(1, 1);
		float fHeight;
		@GetHeight(fHeight);
		Vector vOffset = [0, 0, 0];
		vOffset.y = fHeight;
		@PlayGlobalSound("breath", vOffset);
		Vector vActorPFPos;
		actor->GetPFPosition(vActorPFPos);
		@MovePoint(vActorPFPos, 500);
		if (IsAccessible(actor)) {
			if (VectorDistSqr(GetActorPosition(), GetActorPosition(actor)) <= c_fDiseaseDist * c_fDiseaseDist) {
				@PlaySound("attack");
				float fDamage = Disease(actor, c_fDiseaseAmount);
				@ReportHit(actor, c_iHitTypeDisease, fDamage, c_fDiseaseAmount);
			}
		}
		@SetVisirVisibility(false);
		@FogLinear(0, 2);
		@Sleep(5);
		@RemoveActor(self());
	}
}

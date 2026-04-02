include std.sci

// CONSTANTS
const float c_fHuntDist = 1500;
const float c_fDiseaseDist = 300;
const float c_fDiseaseAmount = 0.2;

const float c_fTraceDistance = 400;
const float c_fVictimSpeedThreshold = 220;
const float c_fWatchTime = 20;

const int c_iPlayerMoveTimer = 21;
// CONSTANTS

task TFogAttack
{
	var object player;
	var bool bPlayerMoved;
	var Vector vPos, vPrevPos;
	
	void init(object actor) {
		player = actor;
	
		@Trace("TFogAttack");
		// jumping to player, and showing fog to player
		@FogLinear(0.8, 2.0);
		
		Vector vInitialFogPos, vVictimPos;
		float fWatchTime = 0;
		
		@GetPosition(vInitialFogPos);
		actor->GetPFPosition(vVictimPos);
		
		float fSpendTime;
		bool bFirstTime = true;
		
		while (true) {
			@Trace("Watching");
			actor->GetPFPosition(vVictimPos);
		
			Vector vCurPos;
			@GetPosition(vCurPos);
			float fDistSqr = VectorDistSqr(vCurPos, vVictimPos);
		
			if (fDistSqr > c_fTraceDistance * c_fTraceDistance) {
				// moving to player
				Vector vMovePos, vDir;
				vDir = Normalize(vVictimPos - vCurPos);
				float fLen = sqrt(fDistSqr) - c_fTraceDistance * 0.9;
				vMovePos = vCurPos + vDir * fLen;
				if (bFirstTime) {
					@MovePoint(vMovePos, 700);
					fSpendTime = fLen / 700.0;
				}
				else {
					@MovePoint(vMovePos, 220);
					fSpendTime = fLen / 100.0;
				}
			}
			else {
				// rotate move
				@Sleep(1.0);
				fSpendTime = 1.0;
			}
				
			// checking if player is to be attacked
			if (!IsAccessible(actor)) {
				if (!bFirstTime) {
					@KillTimer(c_iPlayerMoveTimer);
				}
				@FogLinear(0, 0.5);
				@Sleep(0.5);
				return;
			}
			
			
			if (bFirstTime) {
				bFirstTime = false;
				actor->GetPFPosition(vPos);
				@SetTimer(c_iPlayerMoveTimer, 1);
			}
			else
			if (bPlayerMoved) {
				break; // to real attack
			}
			
			fWatchTime += fSpendTime;
			if (fWatchTime >= c_fWatchTime) { // player is smart
				@Trace("Leaving");
				@KillTimer(c_iPlayerMoveTimer);
				@FogLinear(0, 1.0);
				@MovePoint(vInitialFogPos, 900);
				@Sleep(5);
				return;
			}
		}
		
		@KillTimer(c_iPlayerMoveTimer);
		@Trace("Attacking");
			
		@FogLinear(1, 0.5);
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
		@FogLinear(0, 1);
		@Sleep(5);
		@RemoveActor(self());
	}
	
	void OnTimer(int id) {
		if (c_iPlayerMoveTimer == id) {
			vPrevPos = vPos;
			vPrevPos.y = 0;
			player->GetPFPosition(vPos);
			vPos.y = 0;
			
			if (VectorDist(vPos, vPrevPos) > c_fVictimSpeedThreshold) {
				bPlayerMoved = true;
			}			
		}
	}	
}

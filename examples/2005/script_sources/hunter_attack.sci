include std.sci
include attack_melee.sci
include death_base.sci
include item_base.sci

// CONSTANTS
const float c_fLooseDistance = 3000;
const float c_fAttackDistance = 150;
const float c_fLongAttackDistance = 300;
const float c_fForceJumpProbability = 0.4;
const float c_fEvadeProbability = 0.75;
const float c_fFalseAttackProbability = 0.25;
// CONSTANTS

task TFollowAttackMelee : TFollowAttackMeleeBase
{
	void OnAttacked(object actor) {
		HandleAttackBase(actor);
	}
}

task TAttack : TAttackMeleeBase
{
	var bool m_bBackJumping;

	void init(object actor, bool bPrepare) {
		super.init(actor, bPrepare, c_fAttackDistance + 30);
	}
	
	float GetDamageAmount(object actor, int iAttackType) {return 0.2;}
	int GetDamageType(object actor, int iAttackType) {return c_iHitTypePhysical;}

	void OnAttacked(object actor) {
		HandleAttackBase(actor);
	}

	bool OnPerformedAttack(void) {
		if (IsAccessible(m_Victim) && rndbool(0.5)) {
			Vector vCurPos, vEnemyPos;
			@GetPosition(vCurPos);
			m_Victim->GetPosition(vEnemyPos);
			Vector vCurDir;
			@GetDirection(vCurDir);
			Vector vSearchDir = Normalize(vCurPos - vEnemyPos);

			Vector vOffset1, vOffset2;
			@GetAnimationOffset(vOffset1, "all", "jump1");
			@GetAnimationOffset(vOffset2, "all", "jump2");
			
			float fMinDist, fMaxDist;
			if (vOffset1.z < vOffset2.z) {
				fMinDist = -vOffset2.z;
				fMaxDist = -vOffset1.z;
			}
			else {
				fMinDist = -vOffset1.z;
				fMaxDist = -vOffset2.z;
			}

			Vector vBestDir;
			float fDist;
			@FindLongestDir(vBestDir, fDist, vSearchDir, 10 * PI / 180, 6, fMaxDist * 3);
			if (fDist < fMinDist) {
				@FindLongestDir(vBestDir, fDist, vSearchDir, 30 * PI / 180, 16, fMaxDist * 3);
			}
			
			if (fDist >= fMinDist) {
				@StopAsync();
				
				@SetDirection(-vBestDir);

				m_bBackJumping = true;
				if (fDist >= fMaxDist) {
					int iAnim;
					@irand(iAnim, 2);
					@PlayAnimation("all", "jump" + (iAnim + 1));
				}
				else {
					if (-vOffset1.z <= fDist) {
						@PlayAnimation("all", "jump1");
					}
					else {
						@PlayAnimation("all", "jump2");
					}
				}
				@WaitForAnimEnd();
				m_bBackJumping = false;
				return false;
			}
		}
		return true;
	}
	
	void CancelActivity(void) {
		if (m_bBackJumping)
			@StopAnimation();
		super.CancelActivity();
	}
}

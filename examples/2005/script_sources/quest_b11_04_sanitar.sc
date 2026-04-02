include std.sci
include death_base.sci

var float g_fAttackFlameLength;
var bool g_bFlameAttackState;
var object g_Flame;
var object g_FlameSound;

const float c_fNormalFlameLength = 0.05;
const int c_iAttackTimer = 70;
const float c_fDamageAmount = 0.1;
const float c_fCleanBodyRate = 0.02;
const float c_fFireAmount = 0.1;

void InitGlobals(void)
{
	float fAttackDist;
	@GetAttackDistance(fAttackDist);
	g_fAttackFlameLength = fAttackDist / c_fMaxFlameLength;

	object scene;
	@GetScene(scene);
	object flame;
	@AddActorByType(flame, "flame", scene, [0, 0, 0]);
	flame->Attach(self(), "flame");
	g_bFlameAttackState = false;
	flame->SetLength(c_fNormalFlameLength);
	g_Flame = flame;

	@SetTimer(c_iAttackTimer, 0.1);
}

void OnTimer(int id)
{
	if (id != c_iAttackTimer)
		return;
	if (g_Flame == null)
		return;
	object pActorList;
	float fDist;
	g_Flame->Intersect(pActorList, fDist);
	g_Flame->SetLength((g_bFlameAttackState)? minf(fDist, g_fAttackFlameLength) : c_fNormalFlameLength);
	
	object pActor;
	bool bMore;
	while (pActorList->Next(bMore, pActor), bMore) {
		if (pActor != null && pActor != self()) {
			float fDamage = Damage(pActor, c_fDamageAmount, c_iDamageTypeFire);
			
			if (HasProperty(pActor, "disease")) {
				float fDisease;
				pActor->GetProperty("disease", fDisease);
				if (fDisease <= c_fCleanBodyRate) {
					fDisease = 0;
				}
				else {
					fDisease -= c_fCleanBodyRate;
				}
				pActor->SetProperty("disease", fDisease);
			}
			
			if (HasProperty(pActor, "fire")) {
				float fFire;
				pActor->GetProperty("fire", fFire);
				pActor->SetProperty("fire", fFire + c_fFireAmount);
			}
		}
	}
}

void SetFlameLength(bool bAttack)
{
	float fLength = (bAttack)? g_fAttackFlameLength : c_fNormalFlameLength;
	float fActualLength;
	g_Flame->GetLength(fActualLength);
	if (fLength < fActualLength) {
		fActualLength = fLength;
	}
	g_Flame->SetLength(fActualLength);
	
	if (g_bFlameAttackState != bAttack) {
		if (bAttack) {
			if (g_FlameSound == null) {
				object sound;
				Vector vSource = [0, 0, 0];
				float fHeight;
				@GetHeight(fHeight);
				vSource.y = fHeight;
				@PlayLoopedGlobalSound(sound, "flame_loop", vSource, 0, 200);
				g_FlameSound = sound;
			}
			g_FlameSound->FadeIn(2);
		}
		else {
			if (g_FlameSound != null) {
				g_FlameSound->FadeOut(2);
			}
		}
		g_bFlameAttackState = bAttack;
	}
}

maintask TCleaner {
	void init(void) {
		InitGlobals();
		@PlayAnimation("all", "attack_on");
		bool bSuccess;
		@WaitForAnimEnd(bSuccess);
		SetFlameLength(true);
		for (;;) {
			@PlayAnimation("all", "cattack");
			@WaitForAnimEnd(bSuccess);
		}
	}
}

include std.sci
include attack_melee.sci

// CONSTANTS
const float c_fLooseDistance = 3000;
const float c_fAlternateAttackNearDist = 500;
const float c_fAlternateAttackFarDist = 1800;
const float c_fAttackDistance = 200;
const float c_fLongAttackDistance = 300;
const float c_fForceJumpProbability = 0.8;
const float c_fEvadeProbability = 0.45;
const float c_fFalseAttackProbability = 0.25;
const float c_fDamageAmount = 0.15;
const float c_fKnifeSpeed = 2000;
// CONSTANTS

Vector CalculateKnifeDirection(Vector vStartPos, Vector vEndPos, float fSpeed) 
{
	Vector vDelta = vEndPos - vStartPos;
	float a = 1000 * 1000 / 4;
	float b = vDelta.y * 1000 - fSpeed * fSpeed;
	float c = (vDelta | vDelta);
	float d = QuadraticDeterminant(a, b, c);
	float t;
	if (d < 0) t = 1;
	else t = sqrt(SolveQuadraticMinPos(a, b, c, sqrt(d)));
	return (vDelta + [0, 500, 0] * t * t) / t;
}

task TAttackBase
{
	bool init(object actor) {
		if (!IsAccessible(actor))
			return false;
		float fDist2 = GetActorDistanceSqr(actor);
		if (betweenf(fDist2, c_fAlternateAttackNearDist * c_fAlternateAttackNearDist, c_fAlternateAttackFarDist * c_fAlternateAttackFarDist)) {
			return TAlternateAttack{actor};
		}
		return TMeleeAttack{actor};
	}
}

task TAlternateAttack
{
	var bool m_bKilled;
	
	bool init(object actor) {
		PlayAttackMusic(actor);

		m_bKilled = false;
		RotateToActor(actor);
		if (!IsAccessible(actor))
			return false;
		BroadcastBattle();
		@Face(actor);
		@PlayAnimation("all", "aattack_begin1");
		@WaitForAnimEnd();
		if (!IsAccessible(actor)) {
			@StopAsync();
			return false;
		}
		@PlayAnimation("all", "aattack_end1");

		object scene;
		@GetScene(scene);
		Vector vPosition;
		bool bFound;
		@GetGeometryLocator("knife", bFound, vPosition);
		object knife;
		@AddActorByType(knife, "scripted", scene, vPosition, [0, 0, 1], "grabitel_knife.xml");
		knife->SetScriptProperty("Owner", self());
		knife->SetScriptProperty("Target", actor);
		
		Vector vTargetPos;
		actor->GetPosition(vTargetPos);
		float fEyesHeight;
		actor->GetEyesHeight(fEyesHeight);
		vTargetPos.y += fEyesHeight - 10;
		Vector vDirection = CalculateKnifeDirection(vPosition, vTargetPos, c_fKnifeSpeed);
		knife->SetScriptProperty("StartDirection", vDirection);

		@WaitForAnimEnd();
		@StopAsync();
		
		if (m_bKilled)
			return true;

		if (!IsAccessible(actor))
			return false;
		return TMeleeAttack{actor};
	}
	
	void OnAttacked(object actor) {
		HandleAttackBase(actor);
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		FilterPlayerDamage(player, actor);
	}
	
	void OnTrigger(string name) {
		if (name == "kill") {
			m_bKilled = true;
		}
	}
}

var bool g_bAttackRet;

task TMeleeAttack : TAttackMeleeBase
{
	bool init(object actor) {
		g_bAttackRet = false;
		super.init(actor, true, c_fAttackDistance);
		if (g_bAttackRet && m_bStopAttack) {
			@PlayAnimation("all", "attack_off");
			@WaitForAnimEnd();
		}
		return g_bAttackRet;
	}
	
	float GetDamageAmount(object actor, int iAttackType) {return c_fDamageAmount;}
	int GetDamageType(object actor, int iAttackType) {return c_iDamageTypePhysical;}
	int GetHitType(void) { return c_iHitTypePhysical2; }

	void OnDamageTarget(object actor, float fDamage) {
		if (fDamage > 0 && IsZeroHealth(actor)) {
			g_bAttackRet = true;
			StopAttack();
		}
	}

	void OnAttacked(object actor) {
		HandleAttackBase(actor);
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		FilterPlayerDamage(player, actor);
	}

	void OnTrigger(string name) {
		if (name == "kill") {
			g_bAttackRet = true;
		}
	}
}

task TFollowAttackMelee : TFollowAttackMeleeBase
{
	void OnAttacked(object actor) {
		HandleAttackBase(actor);
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		FilterPlayerDamage(player, actor);
	}

	void OnTrigger(string name) {
		if (name == "kill") {
			g_bAttackRet = true;
			CancelActivity();
		}
	}
}

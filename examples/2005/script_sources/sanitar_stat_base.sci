include std.sci
include death_base.sci
include sanitar_base.sci

// CONSTANTS
const float c_fDefenseRadius = 550;
// CONSTANTS

const int c_iAASTimer = 75;

// actor must be accessible
bool IsAttractive(object actor)
{
	return actor != null && GetActorDistanceSqr(actor) <= c_fDefenseRadius * c_fDefenseRadius;
}

bool FilterSeeDefending(object actor)
{
	return IsEnemy(actor) && IsAttractive(actor);
}

bool FilterHearDefending(object actor)
{
	return IsEnemy(actor) && IsAttractive(actor);
}

// TestActor must be accessible
bool IsMoreAttractive(object CurActor, object TestActor)
{
	if (TestActor == null)
		return false;
	return !IsEnemy(CurActor) || GetActorDistanceSqr(TestActor) < GetActorDistanceSqr(CurActor) - 25;
}

maintask TSanitar
{
	void init(void) {
		InitGlobals();
		
		@SetTimer(c_iAASTimer, 0.5);
		
		Vector vDirection;
		@GetDirection(vDirection);
		for (;;) {
			@Hold();
			bool bSuccess;
			while (@Rotate(vDirection.x, vDirection.z, bSuccess), !bSuccess) ; 
		}
	}

	void OnSee(object actor) {
		if (FilterSeeDefending(actor)) {
			BeginAttack(actor, false);
		}
	}
	
	void OnHear(object actor) {
		if (FilterHearDefending(actor)) {
			BeginAttack(actor, false);
		}
	}

	void OnAttacked(object actor) {
		if (IsAccessible(actor)) {
			HandleAttackBase(actor);
			BeginAttack(actor, true);
		}
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		if (FilterPlayerDamage(player, actor, bEnemy)) {
			if (IsAccessible(player)) {
				HandleAttackBase(player);
				BeginAttack(player, false);
			}
		}
	}

	void OnTimer(int id) {
		if (id == c_iAASTimer) {
			@ResetAAS();
		}
		else {
			HandleTimer(id);
		}
	}
	
	void BeginAttack(object actor, bool bAttacker) {
		@StopGroup0();
		TDefending{actor, bAttacker};
	}
}

task TDefending
{
	var object m_Target;
	var bool m_bAttacker;
	
	void init(object actor, bool bAttacker) {
		m_Target = actor;
		m_bAttacker = bAttacker;
		
		@Face(m_Target);
		
		do {
			SetFlameLength(true);
			
			@SetAttackState(true);

			@PlayAnimation("all", "attack_on");
			@WaitForAnimEnd();
			
			for (;;) {
				if ((m_Target == null || !m_bAttacker) && (!IsEnemy(m_Target) || !IsAttractive(m_Target)))
					break;
				PlayAttackAnimation(m_Target);
				@WaitForAnimEnd();
			}
			
			m_Target = null;
			
			@SetAttackState(false);

			SetFlameLength(false);
			@StopAsync();

			@PlayAnimation("all", "attack_off");
			@WaitForAnimEnd();
		} while(m_Target != null);
	}

	void OnSee(object actor) {
		if (m_bAttacker)
			return;
		if (FilterSeeDefending(actor) && IsMoreAttractive(m_Target, actor)) {
			m_Target = actor;
			@Face(actor);
		}
	}
	
	void OnHear(object actor) {
		if (m_bAttacker)
			return;
		if (FilterHearDefending(actor) && IsMoreAttractive(m_Target, actor)) {
			m_Target = actor;
			@Face(actor);
		}
	}

	void OnAttacked(object actor) {
		HandleAttackBase(actor);
		if (!IsAccessible(actor) || !IsAttractive(actor))
			return;
		m_Target = actor;
		m_bAttacker = true;
		@Face(actor);
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		if (FilterPlayerDamage(player, actor, bEnemy)) {
			OnAttacked(player);
		}
	}

	void OnTimer(int id) {
		if (id == c_iAASTimer) {
			@ResetAAS();
		}
		else {
			HandleTimer(id);
		}
	}
}

task TDeath : TDeathSanitar
{
	void init(object actor) {
		@KillTimer(c_iAASTimer);
		if (IsPlayerActor(actor)) {
			object scene;
			@GetScene(scene);
			scene->RemoveStationaryActor(self());
		}
		super.init(actor);
	}
}

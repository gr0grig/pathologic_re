include std.sci
include wanderer_base.sci
include idle.sci
include hunt.sci
include death_base.sci
include camp.sci
include item_base.sci
include pdamage_classes.sci

// CONSTANTS
const float c_fHuntPerceptionIncrease = 1.5;
const float c_fHuntFOVIncrease = 1.8;
const float c_fCampBrightness = 0.1;
const int c_iHuntTime = 15;
const float c_fCampHuntProbability = 0.3;
const float c_fAttackNoticeDist = 700;
const float c_fDeathRepChange = 0.05;
// CONSTANTS

const int c_iWanderTimer = 90;
const int c_iCampTimer = 91;

// vDir must be normalized
// vDir.y must be > 0
float CalculateBombSpeed(Vector vStartPos, Vector vEndPos, Vector vDir) 
{
	float cosa = sqrt(vDir.x * vDir.x + vDir.z * vDir.z);
	float tga = vDir.y / cosa;
	float len = sqrt( (vStartPos.x - vEndPos.x) * (vStartPos.x - vEndPos.x) + (vStartPos.z - vEndPos.z) * (vStartPos.z - vEndPos.z));
	float t = 500.0 / ( len * tga - (vEndPos.y - vStartPos.y) );
	
	if (t < 0)
		return -1; // no solution
	
	float v = len / cosa * sqrt(t);
	return v;
}

int GetAttackType(float fDist)
{
	if (fDist < 200) {
		return 1;
	}
	else if (fDist < 1000) {
		return 2;
	}
	return 3;
}

float GetAttackStdVelocity(int iAttackType)
{
	if (iAttackType == 1)
		return 30;
	return 700;
}

float ClampAttackVelocity(int iAttackType, float fSpeed)
{
	if (fSpeed < 10)
		return 10;
	else if (fSpeed > 1500)
		return 1500;
	return fSpeed;
}

bool FilterHearNormal(object actor)
{
	return IsEnemy(actor);
}

void HandleHearNormal(object actor)
{
	TNoiseHunt{actor};
}

bool FilterSeeNormal(object actor)
{
	return IsEnemy(actor);
}

void HandleSeeNormal(object actor)
{
	TAttack{actor};
	@ResetAAS();
}

void HandleAttack(object actor)
{
	HandleAttackBase(actor);
	TAttack{actor};
	@ResetAAS();
}

void OnHit(object actor, int iHitType, float fDamage, float fHit)
{
	StdHandleHit(actor, iHitType, fDamage);
}

void OnHit2(object actor, int iHitType, float fDamage, float fHit, Vector vPos, Vector vDir)
{
	StdHandleHit2(actor, iHitType, fDamage, vPos, vDir);
}

void HandleDeath(object actor)
{
	HandleDeathBase(actor);
	if (IsPlayerActor(actor)) {
		PlayerModReputation(actor, c_fDeathRepChange);
	}
	TDeath{actor};
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
	HandleDeath(actor);
}

bool FilterPlayerDamage(object player, object actor)
{
	if (EgoistClass(actor)) {
		bool bCanSee;
		@CanSee(bCanSee, player);
		if (bCanSee || GetActorDistanceSqr(player) <= c_fAttackNoticeDist * c_fAttackNoticeDist) {
			return true;
		}
	}
	return false;
}

maintask TBomber : TWanderBase
{
	void init(void) {
		InitGlobals();
		
		for (;;) {
			@SetTimer(c_iWanderTimer, 10);
			super.init();
		}
	}
	
	void OnSee(object actor) {
		if (FilterSeeNormal(actor)) {
			CancelActivity();
			HandleSeeNormal(actor);
		}
	}
	
	void OnHear(object actor) {
		if (FilterHearNormal(actor)) {
			CancelActivity();
			HandleHearNormal(actor);
		}
	}
	
	void OnAttacked(object actor) {
		CancelActivity();
		HandleAttack(actor);
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		if (FilterPlayerDamage(player, actor)) {
			OnAttacked(player);
		}
	}

	void CancelActivity(void) {
		@KillTimer(c_iWanderTimer);
		super.CancelActivity();
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}
	
	void OnTimer(int id) {
		if (id == c_iWanderTimer) {
			@SetTimer(c_iWanderTimer, 1);
			float fBrightness;
			@GetBrightness(fBrightness);
			if (fBrightness < c_fCampBrightness) {
				CancelActivity();
				TCamp{};
			}
		}
	}
	
}

task TDeath : TDeathDirUsableBase
{
	void init(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			GenerateBomberItems();
		}
		AddOrgans();
		super.init(actor);
	}
}

task TNoiseHunt : TNoiseFollowBase
{
	void init(object actor) {
		super.init(actor, false);
	}

	void OnSee(object actor) {
		if (FilterSeeNormal(actor)) {
			CancelActivity();
			HandleSeeNormal(actor);
		}
	}
	
	void OnAttacked(object actor) {
		CancelActivity();
		HandleAttack(actor);
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		if (FilterPlayerDamage(player, actor)) {
			OnAttacked(player);
		}
	}
	
	bool FilterNewPrey(object OldPrey, object NewPrey) {
		bool bPlayer;
		@IsPlayerActor(OldPrey, bPlayer);
		if (bPlayer)
			return false;
		if (!IsEnemy(NewPrey))
			return false;
		@IsPlayerActor(NewPrey, bPlayer);
		return bPlayer;
	}
	
	bool FilterPrey(object prey) {
		return IsEnemy(prey);
	}
	
}

task TIdle : TIdleBase
{
	void OnSee(object actor) {
		if (FilterSeeNormal(actor)) {
			CancelActivity();
			HandleSeeNormal(actor);
		}
	}
	
	void OnHear(object actor) {
		if (FilterHearNormal(actor)) {
			CancelActivity();
			HandleHearNormal(actor);
		}
	}

	void OnAttacked(object actor) {
		CancelActivity();
		HandleAttack(actor);
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		if (FilterPlayerDamage(player, actor)) {
			OnAttacked(player);
		}
	}
}

task TAttack
{
	var object m_Victim;
	var bool m_bSee;

	void init(object actor) {
		m_Victim = actor;
		@CanSee(m_bSee, actor);
		
		RotateToActor(actor);
		if (!IsAccessible(actor))
			return;
	
		@Face(actor);
		
		while(IsAccessible(m_Victim)) {
			if (!m_bSee) {
				@StopAsync();
				m_Victim = TTargetLost{};
				if (m_Victim == null) {
					break;
				}
				@CanSee(m_bSee, m_Victim);
				@Face(m_Victim);
			}
		
			PlayAttackMusic(m_Victim);
			@ReportAttack(m_Victim);
		
			Vector vPosition;
			@GetPosition(vPosition);
			Vector vTargetPos;
			m_Victim->GetPosition(vTargetPos);
			Vector vTargetDelta = vTargetPos - vPosition;
			int iAttackType = GetAttackType(sqrt(vTargetDelta | vTargetDelta));
			@PlayAnimation("all", "attack_begin" + iAttackType);
			@WaitForAnimEnd();
			if (m_Victim == null)
				break;
			
			@PlayAnimation("all", "attack_end" + iAttackType);
			object scene;
			@GetScene(scene);
			Vector vDirection;
			bool bFound;
			@GetGeometryLocator("attack" + iAttackType, bFound, vPosition, vDirection);
			object bomb;
			@AddActorByType(bomb, "scripted", scene, vPosition, [0, 0, 1], "grenade.xml");
			
			bomb->SetScriptProperty("Owner", self());

			if (iAttackType == 1) {
				bomb->SetScriptProperty("StartVelocity", [0, -500, 0]);
			}
			else {
				float k = sqrt((1 - vDirection.y * vDirection.y) / (vTargetDelta.x * vTargetDelta.x + vTargetDelta.z * vTargetDelta.z));
				vDirection.x = vTargetDelta.x * k;
				vDirection.z = vTargetDelta.z * k;

				m_Victim->GetPosition(vTargetPos);
				
				float fSpeed = CalculateBombSpeed(vPosition, vTargetPos, vDirection);
				if (fSpeed < 0) {
					fSpeed = GetAttackStdVelocity(iAttackType);
				}
				else {
					fSpeed = ClampAttackVelocity(iAttackType, fSpeed);
				}
				bomb->SetScriptProperty("StartVelocity", vDirection * fSpeed);
			}
			
			bomb->SetScriptProperty("DamageAmount", c_fDamageAmount);
			bomb->SetScriptProperty("DamageType", c_iDamageTypeFire);
			
			@WaitForAnimEnd();
			
			if (iAttackType == 1) {
				int iCryType;
				@irand(iCryType, 2);
				@Speak("scream" + (iCryType + 1));
				HeadLook(m_Victim);
				@PlayAnimation("all", "scream" + (iCryType + 1));
				@WaitForAnimEnd();
				@UnlookAsync("head");
			}
		}
		
		@StopAsync();
	}

	void OnSee(object actor) {
		if (actor == m_Victim) {
			m_bSee = true;
		}
	}
	
	void OnStopSee(object actor) {
		if (actor == m_Victim) {
			m_bSee = false;
		}
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		FilterPlayerDamage(player, actor);
	}
}

task TTargetLost {
	var object m_Ret;
	
	object init(void) {
		@Sleep(5);
		
		return m_Ret;
	}

	void OnSee(object actor) {
		CheckObject(actor);
	}
	
	void OnStopSee(object actor) {
		if (actor == m_Ret) {
			m_Ret = null;
		}
	}
	
	void OnAttacked(object actor) {
		CheckObject(actor);
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		if (FilterPlayerDamage(player, actor)) {
			OnAttacked(player);
		}
	}
	
	void CheckObject(object actor) {
		if (m_Ret == null && IsEnemy(actor)) {
			m_Ret = actor;
			@StopGroup0();
		}
	}
}

task THunt
{
	var float m_fInitSeeThresh;
	var float m_fInitSeeFOV;

	var object m_Prey;
	
	object init(object prey) {
		@GetSeeThreshold(m_fInitSeeThresh);
		@GetSeeFOV(m_fInitSeeFOV);
		@SetSeeThreshold(m_fInitSeeThresh / c_fHuntPerceptionIncrease);

		m_Prey = prey;
		PlayAttackMusic(m_Prey);
		
		bool bSuccess;
		for (int i = 0; i < 3; ++i) {
			@SetSeeFOV(m_fInitSeeFOV * c_fHuntFOVIncrease);
			@PlayAnimation("all", "hunt");
			@WaitForAnimEnd(bSuccess);
			@SetSeeFOV(m_fInitSeeFOV);
			if (!bSuccess)
				break;
			@Sleep(2, bSuccess);
			if (!bSuccess)
				break;
			PlayAttackMusic(m_Prey);
		}
		
		CancelActivity();
		
		if (bSuccess) {
			m_Prey = null;
		}
		return m_Prey;
	}

	void OnSee(object actor) {
		if (FilterSeeNormal(actor)) {
			CancelActivity();
			HandleSeeNormal(actor);
		}
	}
	
	void OnHear(object actor) {
		bool bPlayer;
		@IsPlayerActor(m_Prey, bPlayer);
		if (bPlayer)
			return;
		if (!IsEnemy(actor))
			return;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			m_Prey = actor;
			@Stop();
			@StopGroup0();
		}
	}

	void OnAttacked(object actor) {
		CancelActivity();
		HandleAttack(actor);
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		if (FilterPlayerDamage(player, actor)) {
			OnAttacked(player);
		}
	}

	void CancelActivity(void) {
		@SetSeeThreshold(m_fInitSeeThresh);
		@SetSeeFOV(m_fInitSeeFOV);
		
		@Stop();
		@StopGroup0();
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}
}

task TCamp : TCampBase
{
	void init(void) {
		@SetTimer(c_iCampTimer, 20);
		
		super.init();
	}
	
	void OnSee(object actor) {
		if (FilterSeeNormal(actor)) {
			CancelActivity();
			HandleSeeNormal(actor);
		}
	}
	
	void OnHear(object actor) {
		if (FilterHearNormal(actor)) {
			CancelActivity();
			HandleHearNormal(actor);
		}
	}
	
	void OnAttacked(object actor) {
		CancelActivity();
		HandleAttack(actor);
	}

	void OnPlayerDamage(object player, object actor, bool bEnemy) {
		if (FilterPlayerDamage(player, actor)) {
			OnAttacked(player);
		}
	}
	
	void CancelActivity(void) {
		@KillTimer(c_iCampTimer);
		@Stop();
		
		super.CancelActivity();
	}

	void OnDeath(object actor) {
		CancelActivity();
		global.OnDeath(actor);
	}

	void OnTimer(int id) {
		if (id == c_iCampTimer) {
			CancelActivity();
		}
	}

	bool DoSomething(void) {
		float fRand;
		@rand(fRand);
		if (fRand < c_fCampHuntProbability) {
			@PlayAnimation("all", "hunt");
			bool bSuccess;
			@WaitForAnimEnd(bSuccess);
			if (!bSuccess)
				return true;
		}
		return false;
	}
}

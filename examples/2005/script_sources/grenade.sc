include std.sci

property object Owner;
property Vector StartVelocity;
property float DamageAmount;
property int DamageType;

// CONSTANTS
const float c_fDamageArea = 300;
const float c_fDamageDownThreshold = 0.4;
const float c_fDamageUpThreshold = 0.8;
// CONSTANTS

var object g_smoke, g_grenade;

const float c_fExplodeAreaSize = 100.0;

maintask TGrenade
{
	void OnCollision(object who, object actor, Vector vPos, Vector vNormal) {
		disable OnCollision;
		@Trace("on collision");
		g_grenade->Enable(false);
		
		@PlayGlobalSound("bottle", [0,0,0], 1, 300);
		object sound;
		@PlayLoopedGlobalSound(sound, "fire_loop", [0, 10, 0], 200);
		if (sound != null) {
			sound->FadeIn(1.0);
		}
		
		
		object victims;
		bool bCollide;
		@Intersect(vPos, c_fDamageArea, bCollide, victims);
		object victim;
		Vector vGrenadePos = GetActorPosition();
		while (victims->Next(bCollide, victim), bCollide) {
			Vector vVictimPos = GetActorPosition(victim);
			float fGrenageDamage = 1.0 - VectorDist(vVictimPos, vGrenadePos) / c_fDamageArea;
			if (fGrenageDamage < c_fDamageDownThreshold)
				fGrenageDamage = c_fDamageDownThreshold;

			if (fGrenageDamage > c_fDamageUpThreshold)
				fGrenageDamage = 1;
				
			fGrenageDamage = fGrenageDamage * DamageAmount;
			
			float fDamage = Damage(victim, fGrenageDamage, DamageType);
			@ReportHit(victim, Owner, c_iHitTypeOscoloc, fDamage, fGrenageDamage);
			@Trace("Hit: " + victim);
		}
		victims = null;
		
		@SetPosition(vPos);
		object grenade;
		@FindGeometry("grenade", grenade);
		grenade->Enable(false);
		
		object fire;
		@FindParticleSystem("grenadefire", fire);
		if (fire == null) {
			@Trace("Can't find fire particle system");
			return;
		}
		
		fire->AddSource([0,0,0], [0,1,0], 0);
		fire->AddSource([50, 0, 50], [0, 1, 0], 0);
		fire->AddSource([-50, 0, 50], [0, 1, 0], 0);
		fire->AddSource([-50, 0, -50], [0, 1, 0], 0);
		fire->AddSource([50, 0, -50], [0, 1, 0], 0);
		fire->AddSource([25, 0, 25], [0, 1, 0], 0);
		fire->AddSource([-25, 0, 25], [0, 1, 0], 0);
		fire->AddSource([-25, 0, -25], [0, 1, 0], 0);
		fire->AddSource([25, 0, -25], [0, 1, 0], 0);
		fire->Enable();
		fire->Fade(false);
		
		g_smoke->Fade();
		
		@Sleep(10.0);
		
		fire->Fade();
		if (sound != null) {
			sound->FadeOut(1.0);
		}		
		@Sleep(2.0);
		@RemoveActor(self());
	}
	
	void init(void) {
		object body;
		@CreateRigidBody(body, [0, 0, 0], 10, StartVelocity, [2, 2, 2], Owner);
		body->Enable(true);
		g_grenade = body;
		
		object smoke;
		@FindParticleSystem("smoke", smoke);
		
		smoke->AddSource([0,0,0], [0,1,0], 0);
		smoke->Enable(true);
		smoke->Fade(false);
		g_smoke = smoke;		

		object grenade;
		@FindGeometry("grenade", grenade);
		grenade->Enable(true);
		@Attach(body);

		for (;;) {
			@Hold();
		}
	}
	
	void OnUnload(void) {
		@RemoveActor(self());
		@Hold();
	}
}

include std.sci

// CONSTANTS
const float c_fDamageAmount = 0.9;
// CONSTANTS

property object Owner;
property Vector StartDirection;
property object Target;

var object g_knife;

maintask TKnife
{
	void init(void) {
		object body;
		@CreateRigidBody(body, [0, 0, 0], 50, StartDirection, [20, 20, 20], Owner);
		body->Enable(true);
		g_knife = body;
		@Attach(body);

		@FindGeometry("knife", body);
		body->SetRotation(StartDirection);
		body->Enable(true);

		for (;;) {
			@Hold();
		}
	}

	void OnUnload(void) {
		@RemoveActor(self());
		@sync();
	}

	void OnCollision(object who, object actor, Vector vPos, Vector vNormal) {
		g_knife->Enable(false);
		@RemoveActor(self());
		if (!actor || !actor->FuncExist("GetScene", 1) || !IsAccessible(actor))
			return;
		float fDamage = Damage(actor, c_fDamageAmount, c_iDamageTypePhysical);
		if (IsAccessible(Owner)) {
			@ReportAttack(actor, Owner);
			if (fDamage) {
				@ReportHit(actor, Owner, c_iHitTypePhysical2, fDamage, c_fDamageAmount);
				if (actor == Target && IsZeroHealth(actor)) {
					@Trigger(Owner, "kill");
				}
			}
		}
	}
}

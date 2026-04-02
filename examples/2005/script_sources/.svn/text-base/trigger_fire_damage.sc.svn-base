include std.sci
include actor_disp_base.sci

// CONSTANTS
const float c_fDamageAmount = 0.8;
// CONSTANTS

var object g_Objects;

maintask TFireDamage : TDispBase
{
	void init(void) {
		g_Objects = CreateObjectVector();
		for (;;) {
			@Sleep(1);
			int nObjects;
			g_Objects->size(nObjects);
			for (int i = 0; i < nObjects; ) {
				object actor;
				g_Objects->get(actor, i);
				if (!actor) {
					g_Objects->remove(i);
				}
				else {
					@Trace("Damaging: " + actor);
					float fDamage = Damage(actor, c_fDamageAmount, c_iDamageTypeFire);
					@ReportHit(actor, self(), c_iHitTypeFire, fDamage, c_fDamageAmount);
					++i;
				}
			}
		}
	}
	
	void OnIntersection(object actor) {
		if (HasProperty(actor, "health")) {
			@Trace("New damage target: " + actor);
			g_Objects->add(actor);
		}
	}
	
	void OnStopIntersection(object actor) {
		int iSize;
		g_Objects->size(iSize);
		for (int i = 0; i < iSize; ) {
			object obj;
			g_Objects->get(obj, i);
			if (obj == actor) {
				g_Objects->remove(i);
				iSize--;
			}
			else {
				++i;
				continue;
			}
		}
		
		@Trace("Removed damage target: " + actor);
	}
}

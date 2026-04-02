include std.sci

task TWeaponBase
{
	var bool m_bBlasting;

	void init(void) {
		m_bBlasting = false;
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		if (name == "shot") {
			Blast();
		}
	}
	
	void Blast(void) {
		if (m_bBlasting)
			return;
		string strWeapon;
		@GetCurrentWeapon(strWeapon);
		float fBlastTexSize, fBlastLength;
		if (strWeapon == "samopal") {
			fBlastTexSize = 18;
			fBlastLength = 1.0 / 30.0;
		}
		else if (strWeapon == "rifle") {
			fBlastTexSize = 18;
			fBlastLength = 0.075;
		}
		else if (strWeapon == "revolver") {
			fBlastTexSize = 15;
			fBlastLength = 0.075;
		}
		else {
			return;
		}
		bool bFound;
		Vector vPosition;
		@GetGeometryLocator(strWeapon + "_blast", bFound, vPosition);
		if (bFound) {
			m_bBlasting = true;
			@SetLitColor([253, 213, 86] / 255.0 / 2);
			@MakeBillboard("blast", strWeapon + "_blast.tex", vPosition, fBlastTexSize);
			@Sleep(fBlastLength);
			@SetLitColor([0, 0, 0]);
			@RemoveBillboard("blast");
			m_bBlasting = false;
		}
	}
}

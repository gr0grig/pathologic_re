include std.sci

const string c_strFireplace = "pt_fireplace";

task TCotBase 
{
	var object m_Fireplaces, m_Servants;
	void init(void) {
		@CreateObjectVector(m_Fireplaces);
		@CreateObjectVector(m_Servants);
		for (;;) {
			@Hold();
		}
	}
	
	void InitFireplaces() {
		for (int i = 1; ; ++i) {
			string loc = c_strFireplace + i;
			bool bFound;
			Vector vPos;
			@GetLocator(loc, bFound, vPos);
			if (!bFound)
				break;
				
			object fireplace;
			@AddActorByType(fireplace, "scripted", self(), vPos, [0, 0, 1], "fireplace.xml");
			m_Fireplaces->add(fireplace);
		}			
	}
	
	void InitServants() {
		OnServantsInit(m_Servants);
	}
	
	void ResetFireplaces() {
		RemoveActorsFromVector(m_Fireplaces);
		m_Fireplaces->clear();
	}
	
	void ResetServants() {
		RemoveActorsFromVector(m_Servants);
		m_Servants->clear();	
	}
	
	void OnLoad(void) {
		InitFireplaces();
		InitServants();
	}
	
	void OnUnload(void) {
		ResetFireplaces();
		ResetServants();
	}	
}

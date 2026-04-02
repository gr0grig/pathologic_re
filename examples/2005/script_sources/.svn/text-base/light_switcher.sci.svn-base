include std.sci

task TLightSwitcher
{
	var object m_Light;

	void init(void) {
		string strName;
		@GetProperty("light", strName);
		@FindActor(m_Light, strName);
		
		m_Light->Switch(true);
	}

	void OnDispose(void) {
		if (m_Light)
			m_Light->Switch(false);
	}
}

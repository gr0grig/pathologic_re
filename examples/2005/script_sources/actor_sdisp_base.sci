include actor_disp_base.sci

task TSDispBase : TDispBase
{
	var bool m_bMadeVisible;
	
	void init(void) {
		@sync();
		if (!IsLoaded()) {
			@SetVisibility(true);
			m_bMadeVisible = true;
		}
		else {
			m_bMadeVisible = false;
		}
		super.init();
	}
	
	void OnUnload(void) {
		if (!m_bMadeVisible) {
			@SetVisibility(true);
			m_bMadeVisible = true;
		}
		super.OnUnload();
	}
}

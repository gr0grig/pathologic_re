include container_base.sci
include item_base.sci

maintask TCorpse : TCorpseContainerBase
{
	var bool m_bToBeRemoved;

	void init(void) {
		@SetVisibility(true);
		m_bToBeRemoved = false;
		@SetTimeEvent(0, 24);
		super.init();
	}

	void OnGameTime(int id, float fTime) {
		if (!IsLoaded())
			@RemoveActor(self());
		else
			m_bToBeRemoved = true;
	}
	
	void OnUnload(void) {
		if (m_bToBeRemoved)
			@RemoveActor(self());
	}
}

include std.sci

maintask TPlayAll
{
	var bool m_bRemove;

	void init(void) {
		@PlayAnimation();
		@Hold();
	}

	void OnTrigger(string name) {
		if (name == "remove")
			m_bRemove = true;
	}

	void OnUnload(void) {
		if (m_bRemove)
			@RemoveActor(self());
	}
}

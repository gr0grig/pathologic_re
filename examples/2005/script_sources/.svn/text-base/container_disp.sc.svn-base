include std.sci
include container_base.sci

maintask TContainer : TContainerBase
{
	var bool m_bToBeRemoved;

	void init(void) {
		@SetVisibility(true);

		super.init();
	}

	void OnTrigger(string name) {
		if (name == "cleanup") {
			m_bToBeRemoved = true;
			bool bLoaded;
			@IsLoaded(bLoaded);
			if (!bLoaded )
				@RemoveActor(self());
		}
		else if (name == "restore") {
			m_bToBeRemoved = false;
		}
	}

	void OnUnload(void) {
		if (m_bToBeRemoved)
			@RemoveActor(self());
	}
}

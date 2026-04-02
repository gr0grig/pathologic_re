include std.sci
include container_base.sci

maintask TSupply : TContainerBase
{
	var object m_NewItems;

	void init(void) {
		m_NewItems = CreateObjectVector();
		@SetVisibility(true);
		InitContainer();

		super.init();
	}
	
	void InitContainer(void) {
		float fTime;
		@GetGameTime(fTime);
		for (int i = (int)(fTime / 24) + 1; i < 12; ++i) {
			@SetTimeEvent(i, i * 24);
		}
	}
	
	void OnGameTime(int id, float fGameTime) {
		GenerateItems(id + 1);
	}
	
	void OnLoad(void) {
		if (!m_NewItems)
			return;
		int iCount;
		m_NewItems->size(iCount);
		for (int i = 0; i < iCount; ++i) {
			object item;
			m_NewItems->get(item, i);
			bool bAdded;
			@AddItem(bAdded, item, 0);
		}
		m_NewItems->clear();
	}
	
	void GenerateItems(int iDay) {
		bool bHas;
		@HasProperty("enabled", bHas);
		if (bHas) {
			bool bEnabled;
			@GetProperty("enabled", bEnabled);
			if (bEnabled) {
				object item;
				@CreateInvItem(item);
				item->SetItemName("alpha_pills");
				m_NewItems->add(item);
			}
		}
	}
}

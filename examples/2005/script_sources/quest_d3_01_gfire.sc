include std.sci
include bonfire_geom_base.sci
include game.sci

maintask TGraveyardFire : TBonFireBase
{
	var bool m_bItemPut;
	
	void init(void) {
		m_bItemPut = false;
		super.init();
	}

	void OnTrigger(string name) {
		if (name == "put_item") {
			if (!m_bItemPut) {
				bool bAdded;
				@AddItem(bAdded, "d3q01_blood", 0);
				m_bItemPut = true;
			}
		}
		else {
			super.OnTrigger(name);
		}
	}
	
	void OnUse(object actor) {
		if (!ContainerUseEnabled())
			return;
		bool bOnGround;
		actor->IsOnGround(bOnGround);
		if (bOnGround) {
			disable OnUse;
			bool bActive;
			@IsOverrideActive(bActive);
			if (!bActive)			
				@Barter(actor);
			enable OnUse;
		}
	}

	bool CanBeRemoved(void) {
		int iCount;
		@GetItemCountOfType(iCount, "d3q01_blood");
		if (!iCount)
			return true;
		int iState;
		@GetVariable("d3q01", iState);
		return !IsNormalQuestState(iState);
	}
}

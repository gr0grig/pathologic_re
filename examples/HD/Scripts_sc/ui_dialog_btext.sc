event OnDraw 0;

maintask t0
{
	var string tv0;
	var string tv1;
	var int tv2;
	var int tv3;

	void init(void)
	{
		object L0;
		int L1;
		int L2;
		@GetConversation(L0);
		if (L0 == null) {
			@UITrace("null conversation");
			return;
		}
		L0->GetNPCName(tv0);
		@_strupr(tv0);
		L0->GetNPCDescription(tv1);
		@GetWindowSize(tv2, tv3);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnDraw(void)
	{
		int L0;
		int L1;
		int L2;
		L1 = 0;
		@GetTextHeightInWidth(L0, "default", tv2 - 50, tv0);
		L1 = L1 + (L0 + 18);
		@GetTextHeightInWidth(L0, "default", tv2 - 50, tv1);
		L1 = L1 + L0;
		L2 = (tv3 - L1) / 2;
		L1 = L2;
		@PrintInWidth(L0, "default", 25, L1, tv2 - 50, tv0, 1.0, 1.0, 1.0);
		L1 = L1 + (L0 + 18);
		@PrintInWidth(L0, "default", 25, L1, tv2 - 50, tv1, 0.800000011920929, 0.800000011920929, 0.800000011920929);
	}
}


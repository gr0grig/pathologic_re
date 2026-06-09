event OnKeyDown 101;
event OnKeyUp 102;
event OnChar 100;
event OnMessage 200;

maintask t0
{
	var int tv0;
	var int tv1;
	var int tv2;
	var int tv3;
	var int tv4;
	var object tv5;
	var object tv6;
	var object tv7;
	var object tv8;
	var object tv9;
	var object tv10;
	var object tv11;
	var object tv12;
	var object tv13;
	var object tv14;
	var object tv15;
	var object tv16;
	var object tv17;
	var object tv18;
	var object tv19;
	var object tv20;
	var object tv21;
	var string tv22;
	var object tv23;
	var object tv24;
	var object tv25;
	var object tv26;
	var int tv27;
	var int tv28;
	var object tv29;

	bool f_0_a3_b(object a0, int a1, bool a2)
	{
		bool L0;
		int L1;
		if (a1 == 0) {
			return false;
		}
		@HasInvItemProperty(L0, f_969_a1_i(a0), "BarterPrice" + a1);
		if (!L0) {
			return true;
		}
		@GetInvItemProperty(L1, f_969_a1_i(a0), "BarterPrice" + a1);
		if (a2 && L1 > 0) {
			return false;
		}
		if (!a2 && L1 < 0) {
			return false;
		}
		return true;
	}

	void f_32_a1_v(object a0)
	{
		int L0;
		object L1;
		int L2;
		tv24->size(L0);
		for (L2 = 0; L2 < L0; L2++) {
			tv24->get(L1, L2);
			if (f_a0a_a2_b(L1, a0)) {
				tv24->remove(L2);
				return;
			}
		}
		tv23->add(a0);
	}

	void f_4a_a1_v(object a0)
	{
		int L0;
		object L1;
		int L2;
		tv23->size(L0);
		for (L2 = 0; L2 < L0; L2++) {
			tv23->get(L1, L2);
			if (f_a0a_a2_b(L1, a0)) {
				tv23->remove(L2);
				return;
			}
		}
		tv24->add(a0);
	}

	void init(void)
	{
		tv0 = f_836_a0_i();
		@GetContainer(tv29);
		@CreateObjectVector(tv23);
		@CreateObjectVector(tv24);
		@CreateObjectVector(tv5);
		@CreateIntVector(tv6);
		@CreateIntVector(tv7);
		@CreateIntVector(tv8);
		@CreateObjectVector(tv9);
		@CreateIntVector(tv10);
		@CreateIntVector(tv11);
		@CreateObjectVector(tv12);
		@CreateIntVector(tv13);
		@CreateObjectVector(tv14);
		@CreateIntVector(tv15);
		@CreateObjectVector(tv16);
		@CreateIntVector(tv17);
		@CreateObjectVector(tv18);
		@CreateIntVector(tv19);
		@CreateObjectVector(tv20);
		@CreateIntVector(tv21);
		tv28 = f_959_a0_i();
		tv22 = "";
		int L0;
		for (L0 = 0; L0 < tv0; L0++) {
			string L1;
			string L2;
			string L3;
			string L4;
			object L5;
			object L6;
			L1 = "";
			L2 = "";
			L3 = "$parent";
			L4 = "$parent";
			if (L0 % 2 == 0) {
				L2 = f_826_a1_s(L0 + 1);
				L1 = f_816_a1_s(L0 + 1);
			} else {
				L1 = f_826_a1_s(L0 - 1);
			}
			if (L0 > 1) {
				L3 = f_826_a1_s(L0 - 2);
			}
			if (L0 < tv0 - 2) {
				L4 = f_826_a1_s(L0 + 2);
			}
			@CreateStringVector(L5);
			L5->add(L1);
			L5->add(L2);
			L5->add(L3);
			L5->add(L4);
			@SendMessage(-1, f_826_a1_s(L0), L5);
			@CreateIntVector(L6);
			L6->add(tv0);
			@SendMessage(-19, f_826_a1_s(L0), L6);
		}
		int L7;
		for (L7 = 0; L7 < tv0; L7++) {
			string L8;
			string L9;
			string L10;
			string L11;
			object L12;
			object L13;
			L8 = "";
			L9 = "";
			L10 = "$parent";
			L11 = "$parent";
			if (L7 % 2 == 0) {
				L9 = f_816_a1_s(L7 + 1);
			} else {
				L8 = f_816_a1_s(L7 - 1);
				L9 = f_826_a1_s(L7 - 1);
			}
			if (L7 > 1) {
				L10 = f_816_a1_s(L7 - 2);
			}
			if (L7 < tv0 - 2) {
				L11 = f_816_a1_s(L7 + 2);
			}
			@CreateStringVector(L12);
			L12->add(L8);
			L12->add(L9);
			L12->add(L10);
			L12->add(L11);
			@SendMessage(-1, f_816_a1_s(L7), L12);
			@CreateIntVector(L13);
			L13->add(tv0);
			@SendMessage(-19, f_816_a1_s(L7), L13);
		}
		@SendMessage(-6, f_826_a1_s(0));
		f_368_a0_v();
		float L14;
		@GetGameTime(L14);
		tv27 = 1 + L14 / 24;
		@ShowCursor();
		@SetCursor("default");
		@CaptureKeyboard();
		@ProcessEvents();
	}

	void OnKeyDown(int a0)
	{
		if (a0 == 269) {
			if (tv22 == "") {
				int L0;
				for (L0 = 0; L0 < tv0; L0++) {
					@SendMessage(-13, f_826_a1_s(L0));
					@SendMessage(-13, f_816_a1_s(L0));
				}
			}
		}
		if (a0 == 270) {
			if (tv22 == "") {
				int L1;
				for (L1 = 0; L1 < tv0; L1++) {
					@SendMessage(-14, f_826_a1_s(L1));
					@SendMessage(-14, f_816_a1_s(L1));
				}
			}
		}
		if (a0 == 267) {
			if (tv22 == "cancel_button") {
				@SendMessage(-4, "ok_button");
				tv22 = "ok_button";
			} else {
				int L2;
				for (L2 = 0; L2 < tv0; L2++) {
					@SendMessage(-15, f_826_a1_s(L2));
					@SendMessage(-15, f_816_a1_s(L2));
				}
			}
		}
		if (a0 == 268) {
			if (tv22 == "cancel_button") {
				@SendMessage(-4, f_826_a1_s(1));
				tv22 = "";
			} else {
				if (tv22 == "ok_button") {
					@SendMessage(-4, "cancel_button");
					tv22 = "cancel_button";
				} else {
					int L3;
					for (L3 = 0; L3 < tv0; L3++) {
						@SendMessage(-16, f_826_a1_s(L3));
						@SendMessage(-16, f_816_a1_s(L3));
					}
				}
			}
		}
	}

	void OnKeyUp(int a0)
	{
		if (a0 == 273) {
			if (tv22 == "") {
				int L0;
				for (L0 = 0; L0 < tv0; L0++) {
					@SendMessage(-13, f_826_a1_s(L0));
					@SendMessage(-13, f_816_a1_s(L0));
				}
			}
		}
		if (a0 == 271) {
			if (tv22 == "") {
				int L1;
				for (L1 = 0; L1 < tv0; L1++) {
					@SendMessage(-14, f_826_a1_s(L1));
					@SendMessage(-14, f_816_a1_s(L1));
				}
			}
		}
		if (a0 == 272) {
			if (tv22 == "cancel_button") {
				@SendMessage(-4, "ok_button");
				tv22 = "ok_button";
			} else {
				int L2;
				for (L2 = 0; L2 < tv0; L2++) {
					@SendMessage(-15, f_826_a1_s(L2));
					@SendMessage(-15, f_816_a1_s(L2));
				}
			}
		}
		if (a0 == 274) {
			if (tv22 == "cancel_button") {
				@SendMessage(-4, f_826_a1_s(1));
				tv22 = "";
			} else {
				if (tv22 == "ok_button") {
					@SendMessage(-4, "cancel_button");
					tv22 = "cancel_button";
				} else {
					int L3;
					for (L3 = 0; L3 < tv0; L3++) {
						@SendMessage(-16, f_826_a1_s(L3));
						@SendMessage(-16, f_816_a1_s(L3));
					}
				}
			}
		}
	}

	void OnChar(int a0)
	{
		@DestroyWindow();
	}

	void OnMessage(int a0, string a1, object a2)
	{
		int L0;
		if (a0 == -20) {
			tv22 = "";
			@Trace("iSlotResetButtons");
			return;
		}
		if (a0 == -4) {
			if (a1 == f_826_a1_s(0) || a1 == f_826_a1_s(1)) {
				if (tv2 < 2) {
					tv22 = "cancel_button";
					@SendMessage(-4, tv22);
					return;
				} else {
					tv2 = tv2 - 2;
					f_534_a0_v();
				}
			}
			if (a1 == f_826_a1_s(tv0 - 1) || a1 == f_826_a1_s(tv0 - 2)) {
				tv2 = tv2 + 2;
				f_534_a0_v();
			}
			if (a1 == f_816_a1_s(0) || a1 == f_816_a1_s(1)) {
				tv1 = tv1 - 2;
				f_4dd_a0_v();
			}
			if (a1 == f_816_a1_s(tv0 - 1) || a1 == f_816_a1_s(tv0 - 2)) {
				tv1 = tv1 + 2;
				f_4dd_a0_v();
			}
			@SendMessage(-4, a1);
			return;
		}
		L0 = f_8fb_a2_i(a0, a1);
		if (L0 != -1) {
			if (a0 == 0) {
				f_6d5_a1_v(L0);
			} else {
				f_717_a1_v(L0);
			}
			return;
		}
		L0 = f_910_a2_i(a0, a1);
		if (L0 != -1) {
			if (a0 == 0) {
				f_757_a1_v(L0);
			} else {
				f_79d_a1_v(L0);
			}
			return;
		}
		if (a1 == "cancel_button") {
			f_368_a0_v();
			return;
		}
		if (a1 == "background_left") {
			@Trace("background_left" + a0);
			tv1 = tv1 - 2 * a0;
			f_4dd_a0_v();
		}
		if (a1 == "background_right") {
			@Trace("background_right" + a0);
			tv2 = tv2 - 2 * a0;
			f_534_a0_v();
		}
		if (a1 == "l_scroll_button_top") {
			tv1 = tv1 - 2;
			f_4dd_a0_v();
			return;
		}
		if (a1 == "l_scroll_button_bottom") {
			tv1 = tv1 + 2;
			f_4dd_a0_v();
			return;
		}
		if (a1 == "r_scroll_button_top") {
			tv2 = tv2 - 2;
			f_534_a0_v();
			return;
		}
		if (a1 == "r_scroll_button_bottom") {
			tv2 = tv2 + 2;
			f_534_a0_v();
			return;
		}
		if (a1 == "l_scrollbar") {
			tv1 = f_4b7_a0_i() * a0 / 100.0 + 0.5;
			tv1 = tv1 * 2;
			f_4dd_a0_v();
			return;
		}
		if (a1 == "r_scrollbar") {
			tv2 = f_4ca_a0_i() * a0 / 100.0 + 0.5;
			tv2 = tv2 * 2;
			f_534_a0_v();
			return;
		}
		if (a1 == "ok_button") {
			f_59c_a0_v();
			return;
		}
	}

	void f_368_a0_v(void)
	{
		int L0;
		tv1 = 0;
		tv2 = 0;
		tv4 = 0;
		if (tv28 == 0) {
			@GetPlayerMoneyCount(tv3);
		} else {
			tv3 = 0;
		}
		tv23->clear();
		tv24->clear();
		tv5->clear();
		tv6->clear();
		tv7->clear();
		tv8->clear();
		tv9->clear();
		tv10->clear();
		tv11->clear();
		tv12->clear();
		tv13->clear();
		tv14->clear();
		tv15->clear();
		tv16->clear();
		tv17->clear();
		tv18->clear();
		tv19->clear();
		tv20->clear();
		tv21->clear();
		f_45b_a0_v();
		f_3c9_a0_v();
		f_47a_a0_v();
		f_4dd_a0_v();
		f_598_a0_v();
		f_534_a0_v();
		f_594_a0_v();
		tv9->size(L0);
		if (L0 <= tv0) {
			@SendMessage(16384, "l_scrollbar");
		} else {
			@SendMessage(0, "l_scrollbar");
		}
		tv5->size(L0);
		if (L0 <= tv0) {
			@SendMessage(16384, "r_scrollbar");
		} else {
			@SendMessage(0, "r_scrollbar");
		}
	}

	void f_3c9_a0_v(void)
	{
		f_3fc_a2_v(0, false);
		f_3fc_a2_v(1, false);
		f_3fc_a2_v(2, false);
		f_3fc_a2_v(3, false);
		f_3fc_a2_v(4, false);
		f_3fc_a2_v(0, true);
		f_3fc_a2_v(1, true);
		f_3fc_a2_v(2, true);
		f_3fc_a2_v(3, true);
		f_3fc_a2_v(4, true);
	}

	void f_3fc_a2_v(int a0, bool a1)
	{
		object L0;
		int L1;
		int L2;
		int L3;
		L1 = f_9d8_a1_i(a0);
		L3 = 0;
		for (; L3 < L1; L3++) {
			bool L4;
			L4 = f_9f1_a2_b(a0, L3);
			if (!a1 && L4) {
				continue;
			}
			L2 = f_9e9_a2_i(a0, L3);
			L0 = f_9e0_a2_o(a0, L3);
			if (a1 && (f_0_a3_b(L0, tv28, true) || L4)) {
				tv5->add(L0);
				tv6->add(L2);
				tv7->add(0);
				tv8->add(1);
			} else {
				if (!a1 && !f_0_a3_b(L0, tv28, true)) {
					tv5->add(L0);
					tv6->add(L2);
					tv7->add(0);
					tv8->add(0);
				}
			}
		}
	}

	void f_45b_a0_v(void)
	{
		int L0;
		int L1;
		object L2;
		object L3;
		int L4;
		L0 = f_9d0_a0_i();
		for (L4 = 0; L4 < L0; L4++) {
			L1 = f_a02_a1_i(L4);
			L3 = f_9f9_a1_o(L4);
			tv9->add(L3);
			tv10->add(L1);
			tv11->add(0);
		}
	}

	void f_47a_a0_v(void)
	{
		f_499_a3_v(0, tv12, tv13);
		f_499_a3_v(1, tv14, tv15);
		f_499_a3_v(2, tv16, tv17);
		f_499_a3_v(3, tv18, tv19);
		f_499_a3_v(4, tv20, tv21);
	}

	void f_499_a3_v(int a0, object a1, object a2)
	{
		object L0;
		int L1;
		int L2;
		int L3;
		L1 = f_9d8_a1_i(a0);
		for (L3 = 0; L3 < L1; L3++) {
			L2 = f_9e9_a2_i(a0, L3);
			L0 = f_9e0_a2_o(a0, L3);
			a1->add(L0);
			a2->add(L2);
		}
	}

	int f_4b7_a0_i(void)
	{
		int L0;
		int L1;
		tv9->size(L0);
		L1 = (L0 + 2 - 1) / 2 - tv0 / 2;
		if (L1 < 0) {
			return 0;
		}
		return L1;
	}

	int f_4ca_a0_i(void)
	{
		int L0;
		int L1;
		tv5->size(L0);
		L1 = (L0 + 2 - 1) / 2 - tv0 / 2;
		if (L1 < 0) {
			return 0;
		}
		return L1;
	}

	void f_4dd_a0_v(void)
	{
		int L0;
		int L1;
		int L2;
		tv9->size(L0);
		if (tv1 + tv0 > L0) {
			if (L0 % 2 == 0) {
				tv1 = tv1 - (tv1 + tv0 - L0);
			} else {
				tv1 = tv1 - (tv1 + tv0 - L0 - 1);
			}
		}
		if (tv1 < 0) {
			tv1 = 0;
		}
		L2 = tv1;
		for (; L2 < tv1 + tv0; L2++) {
			if (L2 < L0) {
				object L3;
				int L4;
				int L5;
				object L6;
				tv9->get(L3, L2);
				tv10->get(L4, L2);
				L1 = 0;
				L5 = f_7f3_a1_i(L2 - tv1);
				if (L5 > 0) {
					L1 = L1 | 16384;
				}
				if (f_0_a3_b(L3, tv28, false)) {
					L1 = L1 | 131072;
				}
				@CreateIntVector(L6);
				L6->add(L5);
				L6->add(L4);
				@SendMessage(65536, f_816_a1_s(L2 - tv1), L6);
				@SendMessage(L1, f_816_a1_s(L2 - tv1), L3);
			} else {
				@SendMessage(32768, f_816_a1_s(L2 - tv1));
			}
		}
	}

	void f_534_a0_v(void)
	{
		int L0;
		object L1;
		int L2;
		int L3;
		int L4;
		tv5->size(L0);
		if (tv2 + tv0 > L0) {
			if (L0 % 2 == 0) {
				tv2 = tv2 - (tv2 + tv0 - L0);
			} else {
				tv2 = tv2 - (tv2 + tv0 - L0 - 1);
			}
		}
		if (tv2 < 0) {
			tv2 = 0;
		}
		L4 = tv2;
		for (; L4 < tv2 + tv0; L4++) {
			if (L4 < L0) {
				int L5;
				int L6;
				object L7;
				tv5->get(L1, L4);
				tv6->get(L3, L4);
				L2 = 0;
				L5 = f_800_a1_i(L4 - tv2);
				if (L5 > 0) {
					L2 = L2 | 16384;
				}
				tv8->get(L6, L4);
				if (f_0_a3_b(L1, tv28, true) || L6 > 0) {
					L2 = L2 | 131072;
				}
				@CreateIntVector(L7);
				L7->add(L5);
				L7->add(L3);
				@SendMessage(65536, f_826_a1_s(L4 - tv2), L7);
				@SendMessage(L2, f_826_a1_s(L4 - tv2), L1);
			} else {
				@SendMessage(32768, f_826_a1_s(L4 - tv2));
			}
		}
	}

	void f_594_a0_v(void)
	{
		@SendMessage(tv3, "r_money_slot");
	}

	void f_598_a0_v(void)
	{
		@SendMessage(tv4, "l_money_slot");
	}

	void f_59c_a0_v(void)
	{
		int L0;
		bool L1;
		object L2;
		object L3;
		object L4;
		int L5;
		int L6;
		@GetContainer(L3);
		@GetPlayerContainer(L4);
		tv24->size(L0);
		for (L5 = 0; L5 < L0; L5++) {
			tv24->get(L2, L5);
			L1 = f_a17_a3_b(L4, L2, f_9bd_a1_i(L2));
			if (!L1) {
				@Trace("Error: failed to remove item");
			}
			L1 = f_a30_a3_b(L3, L2, 0);
			if (!L1) {
				@Trace("Error: failed to add item");
			}
		}
		tv23->size(L0);
		for (L6 = 0; L6 < L0; L6++) {
			tv23->get(L2, L6);
			L1 = f_a17_a3_b(L3, L2, 0);
			if (!L1) {
				@Trace("Error: failed to remove item");
			}
			L1 = f_a30_a3_b(L4, L2, f_9bd_a1_i(L2));
			if (!L1) {
				@Trace("Error: failed to add item");
			}
		}
		if (tv28 == 0) {
			@SetPlayerMoneyCount(tv3);
		}
		tv4 = 0;
		f_368_a0_v();
	}

	bool f_5fa_a1_b(object a0)
	{
		int L0;
		L0 = f_9bd_a1_i(a0);
		if (L0 == 0) {
			return f_674_a3_b(a0, tv12, tv13);
		} else {
			if (L0 == 1) {
				return f_674_a3_b(a0, tv14, tv15);
			} else {
				if (L0 == 2) {
					return f_674_a3_b(a0, tv16, tv17);
				} else {
					if (L0 == 3) {
						return f_674_a3_b(a0, tv18, tv19);
					}
				}
			}
		}
		return f_674_a3_b(a0, tv20, tv21);
	}

	bool f_637_a1_b(object a0)
	{
		int L0;
		L0 = f_9bd_a1_i(a0);
		if (L0 == 0) {
			return f_6a7_a3_b(a0, tv12, tv13);
		} else {
			if (L0 == 1) {
				return f_6a7_a3_b(a0, tv14, tv15);
			} else {
				if (L0 == 2) {
					return f_6a7_a3_b(a0, tv16, tv17);
				} else {
					if (L0 == 3) {
						return f_6a7_a3_b(a0, tv18, tv19);
					}
				}
			}
		}
		return f_6a7_a3_b(a0, tv20, tv21);
	}

	bool f_674_a3_b(object a0, object a1, object a2)
	{
		int L0;
		object L1;
		a1->size(L0);
		if (f_9c7_a1_i(a0) > 1) {
			int L2;
			for (L2 = 0; L2 < L0; L2++) {
				int L3;
				a1->get(L1, L2);
				a2->get(L3, L2);
				if (f_a0f_a2_b(a0, L1)) {
					if (L3 < f_9c7_a1_i(a0)) {
						a2->set(L2, L3 + 1);
					}
					return true;
				}
			}
		}
		if (L0 < 12) {
			a1->add(a0);
			a2->add(1);
			return true;
		}
		return false;
	}

	bool f_6a7_a3_b(object a0, object a1, object a2)
	{
		int L0;
		object L1;
		int L2;
		a1->size(L0);
		for (L2 = 0; L2 < L0; L2++) {
			int L3;
			a1->get(L1, L2);
			a2->get(L3, L2);
			if (f_a0f_a2_b(a0, L1)) {
				L3 = L3 + -1;
				if (L3 == 0) {
					a1->remove(L2);
					a2->remove(L2);
				} else {
					a2->set(L2, L3);
				}
				return true;
			}
		}
		return false;
	}

	void f_6cb_a1_v(int a0)
	{
		tv3 = tv3 + a0;
		tv4 = tv4 - a0;
		f_594_a0_v();
		f_598_a0_v();
	}

	void f_6d5_a1_v(int a0)
	{
		int L0;
		object L1;
		int L2;
		int L3;
		tv11->size(L0);
		if (a0 + tv1 >= L0) {
			return;
		}
		tv9->get(L1, a0 + tv1);
		if (f_0_a3_b(L1, tv28, false)) {
			return;
		}
		tv11->get(L2, a0 + tv1);
		tv10->get(L3, a0 + tv1);
		if (L2 < L3) {
			int L4;
			L4 = f_96e_a2_i(L1, tv28) * f_93f_a3_f(tv29, tv27, tv28);
			if (L4 <= tv3) {
				if (f_5fa_a1_b(L1)) {
					L2 = L2 + 1;
					tv11->set(a0 + tv1, L2);
					f_32_a1_v(L1);
					f_6cb_a1_v(-L4);
				}
			}
		}
		f_4dd_a0_v();
		f_534_a0_v();
	}

	void f_717_a1_v(int a0)
	{
		int L0;
		object L1;
		int L2;
		int L3;
		tv11->size(L0);
		if (a0 + tv1 >= L0) {
			return;
		}
		tv9->get(L1, a0 + tv1);
		if (f_0_a3_b(L1, tv28, false)) {
			return;
		}
		tv11->get(L2, a0 + tv1);
		tv10->get(L3, a0 + tv1);
		if (L2 > 0) {
			int L4;
			f_637_a1_b(L1);
			f_4a_a1_v(L1);
			L2 = L2 + -1;
			tv11->set(a0 + tv1, L2);
			L4 = f_96e_a2_i(L1, tv28) * f_93f_a3_f(tv29, tv27, tv28);
			f_6cb_a1_v(L4);
		}
		f_4dd_a0_v();
		f_534_a0_v();
	}

	void f_757_a1_v(int a0)
	{
		int L0;
		object L1;
		int L2;
		int L3;
		int L4;
		tv7->size(L0);
		if (a0 + tv2 >= L0) {
			return;
		}
		tv5->get(L1, a0 + tv2);
		if (f_0_a3_b(L1, tv28, true)) {
			return;
		}
		tv8->get(L2, a0 + tv2);
		if (L2 > 0) {
			return;
		}
		tv7->get(L3, a0 + tv2);
		tv6->get(L4, a0 + tv2);
		if (L3 < L4) {
			int L5;
			f_637_a1_b(L1);
			f_4a_a1_v(L1);
			L3 = L3 + 1;
			tv7->set(a0 + tv2, L3);
			L5 = f_96e_a2_i(L1, tv28) * f_925_a3_f(tv29, tv27, tv28);
			f_6cb_a1_v(L5);
		}
		f_4dd_a0_v();
		f_534_a0_v();
	}

	void f_79d_a1_v(int a0)
	{
		int L0;
		object L1;
		int L2;
		int L3;
		int L4;
		tv7->size(L0);
		if (a0 + tv2 >= L0) {
			return;
		}
		tv5->get(L1, a0 + tv2);
		if (f_0_a3_b(L1, tv28, true)) {
			return;
		}
		tv8->get(L2, a0 + tv2);
		if (L2 > 0) {
			return;
		}
		tv7->get(L3, a0 + tv2);
		tv6->get(L4, a0 + tv2);
		if (L3 > 0) {
			int L5;
			L5 = f_96e_a2_i(L1, tv28) * f_925_a3_f(tv29, tv27, tv28);
			if (L5 <= tv3) {
				if (f_5fa_a1_b(L1)) {
					L3 = L3 + -1;
					f_32_a1_v(L1);
					tv7->set(a0 + tv2, L3);
					f_6cb_a1_v(-f_96e_a2_i(L1, tv28) * f_925_a3_f(tv29, tv27, tv28));
				}
			}
		}
		f_4dd_a0_v();
		f_534_a0_v();
	}

	int f_7f3_a1_i(int a0)
	{
		int L0;
		int L1;
		tv11->size(L0);
		if (a0 + tv1 >= L0) {
			return 0;
		}
		tv11->get(L1, a0 + tv1);
		return L1;
	}

	int f_800_a1_i(int a0)
	{
		int L0;
		int L1;
		tv7->size(L0);
		if (a0 + tv2 >= L0) {
			return 0;
		}
		tv7->get(L1, a0 + tv2);
		return L1;
	}
}

int f_80d_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

string f_816_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "l_slot0" + (a0 + 1);
	}
	return "l_slot" + (a0 + 1);
}

string f_826_a1_s(int a0)
{
	if (a0 + 1 < 10) {
		return "r_slot0" + (a0 + 1);
	}
	return "r_slot" + (a0 + 1);
}

int f_836_a0_i(void)
{
	int L0;
	int L1;
	int L2;
	@GetWindowSize(L1, L2);
	L0 = 18;
	if (L1 == 1024 && L2 == 768) {
		L0 = 24;
	} else {
		if (L1 == 1280 && L2 == 1024) {
			L0 = 32;
		} else {
			if (L1 == 1280 && L2 == 720) {
				L0 = 22;
			} else {
				if (L1 == 1280 && L2 == 768) {
					L0 = 24;
				} else {
					if (L1 == 1280 && L2 == 800) {
						L0 = 24;
					} else {
						if (L1 == 1360 && L2 == 768) {
							L0 = 24;
						} else {
							if (L1 == 1366 && L2 == 768) {
								L0 = 24;
							} else {
								if (L1 == 1440 && L2 == 900) {
									L0 = 28;
								} else {
									if (L1 == 1536 && L2 == 864) {
										L0 = 26;
									} else {
										if (L1 == 1600 && L2 == 1200) {
											L0 = 38;
										} else {
											if (L1 == 1600 && L2 == 1200) {
												L0 = 38;
											} else {
												if (L1 == 1600 && L2 == 900) {
													L0 = 28;
												} else {
													if (L1 == 1600 && L2 == 1050) {
														L0 = 32;
													} else {
														if (L1 == 1600 && L2 == 1050) {
															L0 = 32;
														} else {
															if (L1 == 1920 && L2 == 1080) {
																L0 = 34;
															} else {
																if (L1 == 1920 && L2 == 1200) {
																	L0 = 38;
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return L0;
}

int f_8fb_a2_i(int a0, string a1)
{
	int L0;
	int L1;
	L0 = f_836_a0_i();
	for (L1 = 0; L1 < L0; L1++) {
		if (a1 == f_816_a1_s(L1)) {
			return L1;
		}
	}
	return -1;
}

int f_910_a2_i(int a0, string a1)
{
	int L0;
	int L1;
	L0 = f_836_a0_i();
	for (L1 = 0; L1 < L0; L1++) {
		if (a1 == f_826_a1_s(L1)) {
			return L1;
		}
	}
	return -1;
}

float f_925_a3_f(object a0, int a1, int a2)
{
	float L0;
	int L1;
	if (a2 != 0) {
		return 1;
	}
	L0 = 1;
	for (L1 = 1; L1 <= a1; L1++) {
		bool L2;
		a0->HasProperty("sellf" + L1, L2);
		if (L2) {
			a0->GetProperty("sellf" + L1, L0);
		}
	}
	return L0 / 100;
}

float f_93f_a3_f(object a0, int a1, int a2)
{
	float L0;
	int L1;
	if (a2 != 0) {
		return 1;
	}
	L0 = 1;
	for (L1 = 1; L1 <= a1; L1++) {
		bool L2;
		a0->HasProperty("buyf" + L1, L2);
		if (L2) {
			a0->GetProperty("buyf" + L1, L0);
		}
	}
	return L0 / 100;
}

int f_959_a0_i(void)
{
	object L0;
	bool L1;
	int L2;
	@GetContainer(L0);
	L0->HasProperty("barter", L1);
	if (!L1) {
		return 0;
	}
	L0->GetProperty("barter", L2);
	return L2;
}

int f_969_a1_i(object a0)
{
	int L0;
	a0->GetItemID(L0);
	return L0;
}

int f_96e_a2_i(object a0, int a1)
{
	if (a1 == 0) {
		int L0;
		L0 = f_80d_a0_i();
		int L1;
		L1 = 0;
		int L2;
		L2 = 1;
		for (; L2 <= L0; L2++) {
			string L3;
			bool L4;
			L3 = "Price";
			if (L2 != 1) {
				L3 = L3 + L2;
			}
			@HasInvItemProperty(L4, f_969_a1_i(a0), L3);
			if (!L4) {
				continue;
			}
			@GetInvItemProperty(L1, f_969_a1_i(a0), L3);
		}
		bool L5;
		a0->HasProperty(L5, "durability");
		if (L5) {
			int L6;
			a0->GetProperty(L6, "durability");
			L1 = L1 * (0.5 * (1.0 + L6 / 100.0));
		}
		return L1;
	}
	bool L7;
	@HasInvItemProperty(L7, f_969_a1_i(a0), "BarterPrice" + a1);
	if (!L7) {
		return 0;
	}
	int L8;
	@GetInvItemProperty(L8, f_969_a1_i(a0), "BarterPrice" + a1);
	if (L8 > 0) {
		return L8;
	}
	return -L8;
}

int f_9bd_a1_i(object a0)
{
	int L0;
	@GetInvItemProperty(L0, f_969_a1_i(a0), "Category");
	return L0;
}

int f_9c7_a1_i(object a0)
{
	int L0;
	@GetItemMaxStackSize(f_969_a1_i(a0), L0);
	return L0;
}

int f_9d0_a0_i(void)
{
	int L0;
	object L1;
	@GetContainer(L1);
	L1->GetItemCount(L0);
	return L0;
}

int f_9d8_a1_i(int a0)
{
	int L0;
	object L1;
	@GetPlayerContainer(L1);
	L1->GetItemCount(L0, a0);
	return L0;
}

object f_9e0_a2_o(int a0, int a1)
{
	object L0;
	object L1;
	@GetPlayerContainer(L0);
	L0->GetItem(L1, a1, a0);
	return L1;
}

int f_9e9_a2_i(int a0, int a1)
{
	object L0;
	int L1;
	@GetPlayerContainer(L0);
	L0->GetItemAmount(L1, a1, a0);
	return L1;
}

bool f_9f1_a2_b(int a0, int a1)
{
	object L0;
	bool L1;
	@GetPlayerContainer(L0);
	L0->IsItemSelected(L1, a1, a0);
	return L1;
}

object f_9f9_a1_o(int a0)
{
	object L0;
	object L1;
	@GetContainer(L0);
	L0->GetItem(L1, a0);
	return L1;
}

int f_a02_a1_i(int a0)
{
	object L0;
	int L1;
	@GetContainer(L0);
	L0->GetItemAmount(L1, a0);
	return L1;
}

bool f_a0a_a2_b(object a0, object a1)
{
	bool L0;
	a0->Compare(L0, a1);
	return L0;
}

bool f_a0f_a2_b(object a0, object a1)
{
	return f_a0a_a2_b(a0, a1);
}

bool f_a17_a3_b(object a0, object a1, int a2)
{
	int L0;
	object L1;
	int L2;
	a0->GetItemCount(L0, a2);
	for (L2 = 0; L2 < L0; L2++) {
		a0->GetItem(L1, L2, a2);
		if (f_a0a_a2_b(a1, L1)) {
			a0->RemoveItem(L2, 1, a2);
			return true;
		}
	}
	return false;
}

bool f_a30_a3_b(object a0, object a1, int a2)
{
	bool L0;
	a0->AddItem(L0, a1, a2, 1);
	return L0;
}


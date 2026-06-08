event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;

	void init(void)
	{
		object L0;
		@GetSceneByName(L0, "house_vlad");
		tv0 = f_b1_a3_o(L0, "b8q02_trigger", "b8q02_trigger.xml");
		tv1 = f_b9_a4_o(L0, "pt_b8q02_book", "scripted_container", "b8q02_item_book.xml");
		f_cb_a2_v("house_vlad@door2", false);
		f_93_a1_v(8);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "b8q02_trigger") {
			object L0;
			int L1;
			@PlaySound("door_close");
			f_cb_a2_v("ihouse_vlad@door2", true);
			@GetSceneByName(L0, "house_vlad");
			for (L1 = 1; ; L1 = L1 + 1) {
				bool L2;
				Vector L3;
				Vector L4;
				object L5;
				L0->GetLocator("pt_b8q02_grabitel" + L1, L2, L3, L4);
				if (!L2) {
					break;
				}
				@AddActor(L5, "pers_grabitel", L0, L3, L4, "b8q02_grabitel.xml");
			}
		} else {
			if (a0 == "book_taken") {
				f_dc_a0_v();
				@PlaySound("door_open");
				f_cb_a2_v("ihouse_vlad@door2", false);
			} else {
				if (a0 == "fail") {
					f_69_a0_v();
				} else {
					if (a0 == "completed") {
						f_71_a0_v();
					}
				}
			}
		}
	}

	void f_5e_a0_v(void)
	{
		int L0;
		@GetVariable("b8q02", L0);
		if (L0 != 1000) {
			f_69_a0_v();
		}
	}

	void f_69_a0_v(void)
	{
		@SetVariable("b8q02", -1);
		f_79_a0_v();
	}

	void f_71_a0_v(void)
	{
		@SetVariable("b8q02", 1000);
		f_79_a0_v();
	}

	void f_79_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			@RemoveActor(tv0);
		}
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		f_cb_a2_v("ihouse_vlad@door2", false);
		f_cb_a2_v("house_vlad@door2", true);
		@RemoveActor(f_ab_a0_o());
	}

	void f_93_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_79_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_5e_a0_v();
	}
}

object f_ab_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_b1_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddActor(L0, a1, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], a2);
	return L0;
}

object f_b9_a4_o(object a0, string a1, string a2, string a3)
{
	bool L0;
	Vector L1;
	Vector L2;
	object L3;
	a0->GetLocator(a1, L0, L1, L2);
	if (!L0) {
		@Trace("Locator " + a1 + " doesn't exist");
		L3 = null;
	} else {
		@AddActorByType(L3, a2, a0, L1, L2, a3);
	}
	return L3;
}

void f_cb_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_dc_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 295, 2, 521493);
	f_f6_a2_b(L0, 293);
}

object f_e9_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_f6_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_e9_a0_o();
	L0->Find(a1, L1);
	if (!L1) {
		@Trace("Can't find diary parent with id: " + a1);
		return false;
	}
	L1->AddChild(a0);
	@SendWorldWndMessage(7);
	a0->GetCategory(L2);
	@SetDiarySection(L2);
	return false;
}


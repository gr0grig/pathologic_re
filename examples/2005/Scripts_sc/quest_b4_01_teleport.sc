maintask t0
{
	void init(void)
	{
		object L0;
		@Sleep(2.5);
		f_10b_a3_v(0, 1, 2.0);
		@FindActor(L0, "player");
		if (L0) {
			object L1;
			@GetSceneByName(L1, "factory");
			Vector L2;
			Vector L3;
			bool L4;
			L1->GetLocator("pt_b4q01_teleport", L4, L2, L3);
			@Teleport(L0, L1, L2, L3);
			float L5;
			@GetGameTime(L5);
			@AdvanceGameTime(110 - L5);
			int L6;
			L0->GetItemCount(L6, 0);
			int L7;
			L7 = L6;
			for (; L7; L7--) {
				object L8;
				int L9;
				bool L10;
				int L11;
				L0->GetItem(L8, L7 - 1, 0);
				L8->GetItemID(L9);
				@HasInvItemProperty(L10, L9, "Weapon");
				if (!L10) {
					@HasInvItemProperty(L10, L9, "Ammo");
					if (!L10) {
						continue;
					}
				}
				L0->GetItemAmount(L11, L7 - 1);
				L0->RemoveItem(L7 - 1, L11);
			}
			L0->SelectWeapon();
			L0->SetProperty("health", 0.30000001192092896);
			float L12;
			L0->GetProperty("tiredness", L12);
			if (L12 > 0.800000011920929) {
				L0->SetProperty("tiredness", 0.800000011920929);
				f_f7_a1_v(0.800000011920929 - L12);
			}
			float L13;
			L0->GetProperty("hunger", L13);
			if (L13 > 0.800000011920929) {
				L0->SetProperty("hunger", 0.800000011920929);
			}
			float L14;
			L0->GetProperty("reputation", L14);
			if (L14 > 0.20000000298023224) {
				f_d4_a2_b(L0, 0.20000000298023224 - L14);
			}
			f_c3_a2_v("ifactory@door1", true);
			object L15;
			@FindActor(L15, "ifactory_grid_door");
			L15->SetProperty("locked", true);
			L15->Close();
		}
		@sync();
		f_c3_a2_v("warehouse_gangster@door1", false);
		f_10b_a3_v(1, 0, 1.0);
		@RemoveActor(f_b2_a0_o());
	}
}

bool f_90_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_9c_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_90_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_b8_a3_f(L0 + a2, a3, a4));
	return true;
}

object f_b2_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_b8_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

void f_c3_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_d4_a2_b(object a0, float a1)
{
	if (!a0) {
		return false;
	}
	if (a1 > 0) {
		@SendWorldWndMessage(8);
	} else {
		if (a1 < 0) {
			@SendWorldWndMessage(9);
		} else {
			return false;
		}
	}
	f_101_a1_v(a1);
	f_9c_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_f7_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(11, L0);
}

void f_101_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

void f_10b_a3_v(float a0, float a1, float a2)
{
	bool L0;
	float L1;
	L0 = a1 > a0;
	L1 = (a1 - a0) / a2;
	while (L0 ? a0 < a1 : a1 < a0) {
		float L2;
		@ModDarkenLevel(a0);
		@sync(L2);
		a0 = a0 + L2 * L1;
	}
	@ModDarkenLevel(a1);
}


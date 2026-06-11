event OnDialogReply 11;
event OnUse 0;
event OnTimer 7;

var Vector g0;
var bool g1;

task t0
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_496_a2_b(a0, 110.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_628_a0_i());
		L0->SetNPCDescription(f_626_a0_i());
		L0->SetPhoto(f_62a_a0_s());
		L0->SetPhoto2(f_62c_a0_s());
		L0->SetPlayerName(f_658_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t1{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_4db_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t1
{
	var object tv0;
	var object tv1;
	var string tv2;
	var bool tv3;

	void init(object a0, object a1)
	{
		tv0 = a1;
		tv1 = a0;
		tv3 = false;
		while (1) {
			if (f_64c_a1_b(tv1)) {
				f_630_a2_v(tv1, tv0);
				f_a2_a1_v("Neutral");
				tv0->SetMessage(520512);
				tv0->ClearReplies();
				tv0->AddReply(520513, 21717, 21716);
				tv0->AddReply(529946, 31329, 31328);
				break;
			}
			f_a2_a1_v("Neutral");
			tv0->SetMessage(520519);
			tv0->ClearReplies();
			tv0->AddReply(520520, -1, 21723);
			tv0->AddReply(520521, -1, 21724);
			break;
			return;
		}
		if (f_62e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_518_a1_v(tv2);
			}
		} else {
			@PlayAnimation("all", "idle");
			for (; ; ) {
				@WaitForAnimEnd();
				if (tv3) {
					break;
				}
				@PlayAnimation("all", "idle");
			}
		}
	}

	void f_a2_a1_v(string a0)
	{
		if (!f_62e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_528_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_58f_a0_v();
			if (a1 == 21720) {
				f_636_a2_v(tv1, tv0);
			}
			if (a1 == 21723) {
				f_636_a2_v(tv1, tv0);
			}
			if (a0 == 21715) {
				if (f_64c_a1_b(tv1)) {
					f_630_a2_v(tv1, tv0);
					f_a2_a1_v("Neutral");
					tv0->SetMessage(520512);
					tv0->ClearReplies();
					tv0->AddReply(520513, 21717, 21716);
					tv0->AddReply(529946, 31329, 31328);
					return;
				}
				f_a2_a1_v("Neutral");
				tv0->SetMessage(520519);
				tv0->ClearReplies();
				tv0->AddReply(520520, -1, 21723);
				tv0->AddReply(520521, -1, 21724);
				return;
			}
			if (a0 == 31329) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(529947);
				tv0->ClearReplies();
				tv0->AddReply(529948, 21717, 31330);
				return;
			}
			if (a0 == 21717) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(520514);
				tv0->ClearReplies();
				tv0->AddReply(520515, 21719, 21718);
				tv0->AddReply(529949, 21719, 31332);
				return;
			}
			if (a0 == 21719) {
				f_a2_a1_v("Neutral");
				tv0->SetMessage(520516);
				tv0->ClearReplies();
				tv0->AddReply(520517, -1, 21720);
				tv0->AddReply(520518, -1, 21721);
				return;
			}
			tv3 = true;
			if (f_62e_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

task t2
{
	var object tv0;

	int init(object a0)
	{
		object L0;
		bool L1;
		int L2;
		bool L3;
		tv0 = a0;
		if (!f_496_a2_b(a0, 110.0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_628_a0_i());
		L0->SetNPCDescription(f_626_a0_i());
		L0->SetPhoto(f_62a_a0_s());
		L0->SetPhoto2(f_62c_a0_s());
		L0->SetPlayerName(f_658_a0_i());
		L2 = -1;
		@IsOverrideActive(L1);
		if (L1) {
			return -2;
		}
		@DoDialog(L0);
		t3{a0, L0};
		L0->IsDialogEnd(L3);
		while (!L3) {
			@sync();
			L0->IsDialogEnd(L3);
		}
		f_4db_a1_v(a0);
		@StopDialog(L0);
		L0->GetReturnValue(L2);
		return L2;
	}
}

task t3
{
	var object tv0;
	var object tv1;
	var string tv2;
	var bool tv3;

	void init(object a0, object a1)
	{
		tv0 = a1;
		tv1 = a0;
		tv3 = false;
		while (1) {
			f_1d4_a1_v("Neutral");
			tv0->SetMessage(520523);
			tv0->ClearReplies();
			tv0->AddReply(520524, -1, 21727);
			tv0->AddReply(529950, -1, 31334);
			break;
			return;
		}
		if (f_62e_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_518_a1_v(tv2);
			}
		} else {
			@PlayAnimation("all", "idle");
			for (; ; ) {
				@WaitForAnimEnd();
				if (tv3) {
					break;
				}
				@PlayAnimation("all", "idle");
			}
		}
	}

	void f_1d4_a1_v(string a0)
	{
		if (!f_62e_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_528_a2_v(a0, a0 == "" ? false : true);
		tv2 = a0;
	}

	void OnDialogReply(int a0, int a1)
	{
		while (1) {
			f_58f_a0_v();
			if (a1 == 21727) {
				f_63b_a2_v(tv1, tv0);
				f_646_a2_v(tv1, tv0);
			}
			if (a1 == 31334) {
				f_63b_a2_v(tv1, tv0);
				f_646_a2_v(tv1, tv0);
			}
			if (a0 == 21726) {
				f_1d4_a1_v("Neutral");
				tv0->SetMessage(520523);
				tv0->ClearReplies();
				tv0->AddReply(520524, -1, 21727);
				tv0->AddReply(529950, -1, 31334);
				return;
			}
			tv3 = true;
			if (f_62e_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t4
{
	var Vector tv0;
	var Vector tv1;
	var bool tv2;
	var bool tv3;

	void init(void)
	{
		tv2 = false;
		g1 = false;
		tv3 = false;
		g0 = f_241_a0_V();
		@SetTimer(10, 0.75);
		f_2ad_a0_v();
	}

	Vector f_241_a0_V(void)
	{
		Vector L0;
		@GetDirection(L0);
		return L0;
	}

	void OnUse(object a0)
	{
		f_28f_a0_v();
		if (tv3) {
			t2{a0};
			tv3 = false;
			return;
		} else {
			if (1 != t0{a0}) {
				return;
			}
		}
		@KillTimer(10);
		t5{a0};
		tv3 = true;
		@SetTimer(10, 0.75);
	}

	void OnTimer(int a0)
	{
		if (a0 == 10) {
			object L0;
			@FindActor(L0, "player");
			if (f_669_a1_b(L0)) {
				if (!g1) {
					f_584_a1_v(L0);
					g1 = true;
				}
			} else {
				if (g1) {
					@UnlookAsync("head");
					g1 = false;
				}
			}
		}
	}

	void f_28f_a0_v(void)
	{
		if (tv2) {
			@StopAnimation();
		} else {
			f_301_a0_v();
		}
	}

	void f_298_a0_v(void)
	{
		int L0;
		tv2 = true;
		L0 = f_615_a0_i();
		if (L0) {
			int L1;
			@irand(L1, L0);
			@PlayAnimation("all", f_60e_a1_s(L1));
			@WaitForAnimEnd();
		}
		tv2 = false;
	}

	void f_2ad_a0_v(void)
	{
		@GetPFPosition(tv1);
		@GetDirection(tv0);
		for (; ; ) {
			int L0;
			bool L1;
			f_306_a0_v();
			@irand(L0, 10);
			@Sleep(L0 + 5, L1);
			if (L1) {
				f_298_a0_v();
			} else {
				for (; ; ) {
					Vector L2;
					f_306_a0_v();
					@GetPFPosition(L2);
					if (f_5a0_a2_f(tv1, L2) > 40000) {
						object L3;
						@FindPathTo(L3, tv1);
						if (L3 != null) {
							@RotatePath(L3, L1);
							if (!L1) {
								continue;
							}
							@FollowPath(L3, false, L1);
							if (!L1) {
								continue;
							}
							@Rotate(tv0.x, tv0.z, L1);
							if (!L1) {
								continue;
							}
							@WaitForAnimEnd(L1);
							if (!L1) {
								continue;
							}
							break;
						} else {
							@Sleep(1);
						}
					} else {
						@Rotate(tv0.x, tv0.z, L1);
						if (!L1) {
							continue;
						}
						@WaitForAnimEnd(L1);
						if (!L1) {
							continue;
						}
						break;
					}
				}
			}
		}
	}

	void f_301_a0_v(void)
	{
		@StopGroup0();
		@Stop();
	}

	void f_306_a0_v(void)
	{
	}
}

task t5
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;
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

	void init(object a0)
	{
		Vector L0;
		int L1;
		object L2;
		Vector L3;
		Vector L4;
		Vector L5;
		Vector L6;
		bool L7;
		object L8;
		tv15 = f_5a4_a0_o();
		f_4ed_a1_v(a0);
		f_5bc_a0_v();
		f_5c8_a0_v();
		L0 = g0;
		@LockCamera();
		@RotateAsync(-L0.x, -L0.z);
		f_5fa_a3_v(0, 1, 0.75);
		@CreateIntVector(tv1);
		@CreateIntVector(tv3);
		@CreateIntVector(tv5);
		@CreateIntVector(tv7);
		@CreateIntVector(tv9);
		tv0 = f_537_a3_o(a0, 0, tv1);
		tv2 = f_537_a3_o(a0, 1, tv3);
		tv4 = f_537_a3_o(a0, 2, tv5);
		tv6 = f_537_a3_o(a0, 3, tv7);
		tv8 = f_537_a3_o(a0, 4, tv9);
		tv10 = f_550_a2_o(a0, 0);
		tv11 = f_550_a2_o(a0, 1);
		tv12 = f_550_a2_o(a0, 2);
		tv13 = f_550_a2_o(a0, 3);
		tv14 = f_550_a2_o(a0, 4);
		f_438_a1_v(a0);
		for (L1 = 1; L1 < 5; L1++) {
			a0->RemoveAllItems(L1);
		}
		a0->SelectWeapon();
		@GetScene(L2);
		L2->GetLocator("pt_arena_player", L7, L3, L4);
		L2->GetLocator("pt_arena_enemy", L7, L5, L6);
		@Teleport(a0, L2, L3, L4);
		@AddActor(L8, "pers_butcher", L2, L5, L6, "arena_fighter.xml");
		f_465_a4_v(L2, "pers_worker", "arena_spectator_worker.xml", "pt_arena_spectator1");
		f_465_a4_v(L2, "pers_worker", "arena_spectator_worker.xml", "pt_arena_spectator2");
		f_465_a4_v(L2, "pers_unosha", "arena_spectator_unosha.xml", "pt_arena_spectator3");
		f_465_a4_v(L2, "pers_unosha", "arena_spectator_unosha.xml", "pt_arena_spectator4");
		f_465_a4_v(L2, "pers_unosha", "arena_spectator_unosha2.xml", "pt_arena_spectator5");
		f_465_a4_v(L2, "pers_dohodyaga", "arena_spectator_dohodyaga.xml", "pt_arena_spectator6");
		f_465_a4_v(L2, "pers_boy", "arena_spectator_boy.xml", "pt_arena_spectator7");
		@Rotate(-L0.x, -L0.z);
		f_584_a1_v(a0);
		f_5fa_a3_v(1, 0, 0.75);
		@UnlockCamera();
		for (; ; ) {
			bool L9;
			@Sleep(1);
			if (a0 != null) {
				L8->IsDead(L9);
				if (L9) {
					break;
				}
			}
		}
		Vector L10;
		Vector L11;
		@LockCamera();
		@RotateAsync(L0.x, L0.z);
		f_5fa_a3_v(0, 1, 0.75);
		@RemoveActor(L8);
		f_476_a0_v();
		f_564_a5_v(a0, 0, tv0, tv1, tv10);
		f_564_a5_v(a0, 1, tv2, tv3, tv11);
		f_564_a5_v(a0, 2, tv4, tv5, tv12);
		f_564_a5_v(a0, 3, tv6, tv7, tv13);
		f_564_a5_v(a0, 4, tv8, tv9, tv14);
		a0->SelectWeapon();
		L2->GetLocator("pt_arena_return", L7, L10, L11);
		@Teleport(a0, L2, L10, L11);
		@StopAsync();
		@Rotate(L0.x, L0.z);
		f_5fa_a3_v(1, 0, 0.75);
		@UnlockCamera();
		f_5c2_a0_v();
		f_5b6_a0_v();
		f_504_a1_v(a0);
	}

	void f_438_a1_v(object a0)
	{
		int L0;
		int L1;
		a0->GetItemCount(L0, 0);
		L1 = 0;
		for (; L1 < L0; L1++) {
			object L2;
			a0->GetItem(L2, L1);
			int L3;
			L2->GetItemID(L3);
			bool L4;
			@HasInvItemProperty(L4, L3, "Group");
			if (L4) {
				int L5;
				@GetInvItemProperty(L5, L3, "Group");
				if (L5 != 0) {
					continue;
				} else {
					bool L6;
					a0->IsItemSelected(L6, L1, 0);
					if (L6) {
						continue;
					}
				}
			}
			int L7;
			a0->GetItemAmount(L7, L1, 0);
			a0->RemoveItem(L1, L7, 0);
			L1 = L1 + -1;
			L0 = L0 + -1;
		}
	}

	void f_465_a4_v(object a0, string a1, string a2, string a3)
	{
		Vector L0;
		Vector L1;
		bool L2;
		object L3;
		a0->GetLocator(a3, L2, L0, L1);
		if (!L2) {
			@Trace("Locator doesn't exist for arena spectator " + a3);
			return;
		}
		a0->AddStationaryActor(L3, L0, L1, a1, a2, true);
		tv15->add(L3);
	}

	void f_476_a0_v(void)
	{
		int L0;
		int L1;
		tv15->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			object L2;
			object L3;
			tv15->get(L2, L1);
			L2->GetActor(L3);
			if (L3 != null) {
				@RemoveActor(L3);
			}
			L2->Remove();
		}
		tv15->clear();
	}
}

float f_48e_a1_f(object a0)
{
	Vector L0;
	Vector L1;
	Vector L2;
	@GetPosition(L0);
	a0->GetPosition(L1);
	L2 = L1 - L0;
	return L2 | L2;
}

bool f_496_a2_b(object a0, float a1)
{
	float L0;
	Vector L1;
	Vector L2;
	Vector L3;
	Vector L4;
	Vector L5;
	Vector L6;
	bool L7;
	a0->GetPosition(L1);
	a0->GetEyesHeight(L0);
	L1.y += L0;
	@GetPosition(L2);
	@GetEyesHeight(L0);
	L2.y += L0;
	L3 = L1 - L2;
	L3.y = 0;
	L3 = L3 / sqrt(L3 | L3);
	L4 = -L3;
	L5 = L3 * a1 + f_596_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4, true);
	@Rotate(L5.x, L5.z);
	if (f_62e_a0_b()) {
	} else {
		bool L8;
		@HasAnimationTrack(L8, "head");
		if (L8) {
			@LookAsyncCamera("head");
		}
	}
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_4db_a1_v(object a0)
{
	@CameraSwitchToNormal(true);
	if (f_62e_a0_b()) {
	} else {
		bool L0;
		@HasAnimationTrack(L0, "head");
		if (L0) {
			@UnlookAsync("head");
		}
	}
}

void f_4ed_a1_v(object a0)
{
	bool L0;
	if (!a0) {
		return;
	}
	a0->HasProperty("noaccess", L0);
	if (L0) {
		int L1;
		a0->GetProperty("noaccess", L1);
		a0->SetProperty("noaccess", L1 + 1);
	} else {
		a0->SetProperty("noaccess", 1);
	}
}

void f_504_a1_v(object a0)
{
	int L0;
	if (!a0) {
		return;
	}
	a0->GetProperty("noaccess", L0);
	if (L0 > 1) {
		a0->SetProperty("noaccess", L0 - 1);
	} else {
		a0->RemoveProperty("noaccess");
	}
}

void f_518_a1_v(string a0)
{
	bool L0;
	@lshHasAnimation(L0, a0);
	if (L0) {
		float L1;
		float L2;
		@lshGetAnimTimes(a0, L1, L2);
		@lshPlayAnimation(L1, L2, false);
	} else {
		@Trace("Can't find lsh animation : " + a0);
	}
}

void f_528_a2_v(string a0, bool a1)
{
	bool L0;
	@lshHasAnimation(L0, a0);
	if (L0) {
		float L1;
		float L2;
		@lshGetAnimTimes(a0, L1, L2);
		@lshPlayAnimation(L1, L2, a1);
	} else {
		@Trace("Can't find lsh animation : " + a0);
	}
}

object f_537_a3_o(object a0, int a1, object a2)
{
	object L0;
	int L1;
	int L2;
	L0 = f_5a4_a0_o();
	a0->GetItemCount(L1, a1);
	for (L2 = 0; L2 < L1; L2++) {
		object L3;
		int L4;
		a0->GetItem(L3, L2, a1);
		L0->add(L3);
		a0->GetItemAmount(L4, L2, a1);
		a2->add(L4);
	}
	return L0;
}

object f_550_a2_o(object a0, int a1)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	a0->GetItemCount(L1, a1);
	for (L2 = 0; L2 < L1; L2++) {
		bool L3;
		a0->IsItemSelected(L3, L2, a1);
		if (L3) {
			L0->add(L2);
		}
	}
	return L0;
}

void f_564_a5_v(object a0, int a1, object a2, object a3, object a4)
{
	a0->RemoveAllItems(a1);
	int L0;
	a2->size(L0);
	int L1;
	for (L1 = 0; L1 < L0; L1++) {
		object L2;
		int L3;
		bool L4;
		a2->get(L2, L1);
		a3->get(L3, L1);
		a0->AddItem(L4, L2, a1, L3);
	}
	a4->size(L0);
	int L5;
	for (L5 = 0; L5 < L0; L5++) {
		int L6;
		a4->get(L6, L5);
		a0->SelectItem(L6, true, a1);
	}
}

void f_584_a1_v(object a0)
{
	float L0;
	Vector L1;
	a0->GetEyesHeight(L0);
	L1 = [0.0, 0.0, 0.0];
	L1.y = L0;
	@LookAsync(a0, "head", L1);
}

void f_58f_a0_v(void)
{
	if (f_62e_a0_b()) {
		@lshStopSpeech();
	}
}

Vector f_596_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

float f_5a0_a2_f(Vector a0, Vector a1)
{
	Vector L0;
	L0 = a1 - a0;
	return L0 | L0;
}

object f_5a4_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

int f_5aa_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_5af_a2_v(string a0, int a1)
{
	int L0;
	@GetVariable(a0, L0);
	@SetVariable(a0, L0 + a1);
}

void f_5b6_a0_v(void)
{
	f_5af_a2_v("noinv_drop", -1);
}

void f_5bc_a0_v(void)
{
	f_5af_a2_v("noinv_drop", 1);
}

void f_5c2_a0_v(void)
{
	f_5af_a2_v("nouse_container", -1);
}

void f_5c8_a0_v(void)
{
	f_5af_a2_v("nouse_container", 1);
}

void f_5ce_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_5da_a3_v(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (!L2) {
		a0->DropItems(a1, a2);
	} else {
		f_5ce_a2_v(L0, a2);
	}
}

void f_5ed_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_5da_a3_v(a0, L0, a2);
}

void f_5fa_a3_v(float a0, float a1, float a2)
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

string f_60e_a1_s(int a0)
{
	string L0;
	L0 = "idle";
	if (a0) {
		L0 = L0 + a0;
	}
	return L0;
}

int f_615_a0_i(void)
{
	int L0;
	for (L0 = 0; ; L0++) {
		bool L1;
		@HasAnimation(L1, "all", f_60e_a1_s(L0));
		if (!L1) {
			break;
		}
	}
	return L0;
}

int f_626_a0_i(void)
{
	return 521048;
}

int f_628_a0_i(void)
{
	return 521047;
}

string f_62a_a0_s(void)
{
	return "ui/NPC_Morlok.png";
}

string f_62c_a0_s(void)
{
	return "ui/NPC_Morlok_b.png";
}

bool f_62e_a0_b(void)
{
	return false;
}

void f_630_a2_v(object a0, object a1)
{
	@SetVariable("ooArenaManager1", 1);
}

void f_636_a2_v(object a0, object a1)
{
	a1->SetReturnValue(1);
}

void f_63b_a2_v(object a0, object a1)
{
	@Trace("blood is given");
	f_5ed_a3_v(a0, "blood", 1);
}

void f_646_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

bool f_64c_a1_b(object a0)
{
	if (f_5aa_a1_i("ooArenaManager1") == 0) {
		return true;
	}
	return false;
}

int f_658_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	if (L0 == 0) {
		return 1;
	} else {
		if (L0 == 1) {
			return 2;
		}
	}
	return 3;
}

bool f_669_a1_b(object a0)
{
	float L0;
	if (a0 == null) {
		return false;
	}
	L0 = sqrt(f_48e_a1_f(a0));
	if (g1) {
		L0 = L0 - 100;
	}
	return L0 < 300;
}


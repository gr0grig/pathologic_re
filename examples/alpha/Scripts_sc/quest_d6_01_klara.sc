event evt_11 11;
event OnUse 0;
event OnTrigger 26;
event OnUnload 6;

var object g0;

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
		if (!f_4b4_a1_b(a0)) {
			return -2;
		}
		@CreateDialog(L0);
		L0->SetNPCName(f_6de_a0_i());
		L0->SetPhoto(f_6e0_a0_s());
		L0->SetPlayerName(f_6bd_a0_i());
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
		f_4ec_a1_v(a0);
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
			if (f_61d_a1_b(tv1) && f_5f9_a1_b(tv1) || f_605_a1_b(tv1) && f_61d_a1_b(tv1)) {
				f_558_a2_v(tv1, tv0);
				f_f1_a1_v("Neutral");
				tv0->SetMessage(12737);
				tv0->ClearReplies();
				tv0->AddReply(12738, 13933, 13932);
				tv0->AddReply(12744, 13965, 13938);
				tv0->AddReply(12745, 13954, 13939);
				break;
			}
			if (f_629_a1_b(tv1) || f_611_a1_b(tv1)) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(12748);
				tv0->ClearReplies();
				if (f_635_a1_b(tv1)) {
					tv0->AddReply(12749, 3753, 13943);
				}
				if (f_665_a1_b(tv1) && f_641_a1_b(tv1) && !f_64d_a1_b(tv1) && !f_659_a1_b(tv1)) {
					tv0->AddReply(12750, 11864, 13944);
				}
				tv0->AddReply(12769, -1, 13968);
				break;
			}
			return;
		}
		if (f_6e2_a0_b()) {
			for (; ; ) {
				@lshWaitForAnimEnd();
				if (tv3) {
					break;
				}
				f_4f0_a1_v(tv2);
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

	void f_f1_a1_v(string a0)
	{
		if (!f_6e2_a0_b()) {
			return;
		}
		if (a0 == tv2) {
			return;
		}
		f_4f0_a1_v(a0);
		tv2 = a0;
	}

	void evt_11(int a0, int a1)
	{
		while (1) {
			f_502_a0_v();
			if (a1 == 13943) {
				f_55e_a2_v(tv1, tv0);
			}
			if (a1 == 3807) {
				f_544_a2_v(tv1, tv0);
				f_552_a2_v(tv1, tv0);
			}
			if (a1 == 3812) {
				f_544_a2_v(tv1, tv0);
				f_552_a2_v(tv1, tv0);
			}
			if (a1 == 13944) {
				f_5f3_a2_v(tv1, tv0);
			}
			if (a1 == 11873) {
				f_564_a2_v(tv1, tv0);
			}
			if (a0 == 13931) {
				if (f_61d_a1_b(tv1) && f_5f9_a1_b(tv1) || f_605_a1_b(tv1) && f_61d_a1_b(tv1)) {
					f_558_a2_v(tv1, tv0);
					f_f1_a1_v("Neutral");
					tv0->SetMessage(12737);
					tv0->ClearReplies();
					tv0->AddReply(12738, 13933, 13932);
					tv0->AddReply(12744, 13965, 13938);
					tv0->AddReply(12745, 13954, 13939);
					return;
				}
				if (f_629_a1_b(tv1) || f_611_a1_b(tv1)) {
					f_f1_a1_v("Neutral");
					tv0->SetMessage(12748);
					tv0->ClearReplies();
					if (f_635_a1_b(tv1)) {
						tv0->AddReply(12749, 3753, 13943);
					}
					if (f_665_a1_b(tv1) && f_641_a1_b(tv1) && !f_64d_a1_b(tv1) && !f_659_a1_b(tv1)) {
						tv0->AddReply(12750, 11864, 13944);
					}
					tv0->AddReply(12769, -1, 13968);
					return;
				}
			}
			if (a0 == 11864) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(10739);
				tv0->ClearReplies();
				tv0->AddReply(10740, 11866, 11865);
				tv0->AddReply(10752, 11866, 11879);
				return;
			}
			if (a0 == 11866) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(10741);
				tv0->ClearReplies();
				tv0->AddReply(10742, 11868, 11867);
				tv0->AddReply(10751, 11870, 11877);
				return;
			}
			if (a0 == 11868) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(10743);
				tv0->ClearReplies();
				tv0->AddReply(10744, 11870, 11869);
				tv0->AddReply(10749, 11870, 11874);
				tv0->AddReply(10750, -1, 11876);
				return;
			}
			if (a0 == 11870) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(10745);
				tv0->ClearReplies();
				tv0->AddReply(10746, -1, 11871);
				tv0->AddReply(10747, -1, 11872);
				tv0->AddReply(10748, -1, 11873);
				return;
			}
			if (a0 == 3753) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(3483);
				tv0->ClearReplies();
				tv0->AddReply(3484, 3756, 3754);
				tv0->AddReply(3485, 3778, 3755);
				tv0->AddReply(3508, 3763, 3783);
				return;
			}
			if (a0 == 3778) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(3505);
				tv0->ClearReplies();
				tv0->AddReply(3506, 3775, 3779);
				tv0->AddReply(3507, 3763, 3781);
				return;
			}
			if (a0 == 3756) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(3486);
				tv0->ClearReplies();
				tv0->AddReply(3487, 3775, 3757);
				tv0->AddReply(3488, 3770, 3758);
				tv0->AddReply(3489, 3760, 3759);
				tv0->AddReply(3491, 3763, 3761);
				return;
			}
			if (a0 == 3760) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(3490);
				tv0->ClearReplies();
				tv0->AddReply(3492, 3763, 3762);
				tv0->AddReply(3509, 3786, 3785);
				return;
			}
			if (a0 == 3786) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(3510);
				tv0->ClearReplies();
				tv0->AddReply(3511, 3788, 3787);
				tv0->AddReply(3515, 3766, 3793);
				return;
			}
			if (a0 == 3788) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(3512);
				tv0->ClearReplies();
				tv0->AddReply(3513, 3775, 3789);
				tv0->AddReply(3514, 3766, 3791);
				return;
			}
			if (a0 == 3763) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(3493);
				tv0->ClearReplies();
				tv0->AddReply(3494, 3766, 3764);
				tv0->AddReply(3495, 3766, 3765);
				return;
			}
			if (a0 == 3766) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(3496);
				tv0->ClearReplies();
				tv0->AddReply(3497, 3771, 3769);
				tv0->AddReply(3501, 3797, 3773);
				tv0->AddReply(3502, -1, 3774);
				return;
			}
			if (a0 == 3797) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(3517);
				tv0->ClearReplies();
				tv0->AddReply(3518, -1, 3798);
				tv0->AddReply(3519, -1, 3799);
				tv0->AddReply(3520, 3801, 3800);
				return;
			}
			if (a0 == 3801) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(3521);
				tv0->ClearReplies();
				tv0->AddReply(3522, 3804, 3802);
				tv0->AddReply(3523, -1, 3803);
				return;
			}
			if (a0 == 3804) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(3524);
				tv0->ClearReplies();
				tv0->AddReply(3525, 3770, 3805);
				return;
			}
			if (a0 == 3771) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(3499);
				tv0->ClearReplies();
				tv0->AddReply(3500, 3770, 3772);
				tv0->AddReply(3516, -1, 3796);
				return;
			}
			if (a0 == 3770) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(3498);
				tv0->ClearReplies();
				tv0->AddReply(3526, -1, 3807);
				tv0->AddReply(3527, 3809, 3808);
				return;
			}
			if (a0 == 3809) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(3528);
				tv0->ClearReplies();
				tv0->AddReply(3529, 3811, 3810);
				return;
			}
			if (a0 == 3811) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(3530);
				tv0->ClearReplies();
				tv0->AddReply(3531, -1, 3812);
				tv0->AddReply(3532, -1, 3813);
				return;
			}
			if (a0 == 3775) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(3503);
				tv0->ClearReplies();
				tv0->AddReply(3504, 3770, 3776);
				return;
			}
			if (a0 == 13965) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(12767);
				tv0->ClearReplies();
				tv0->AddReply(12768, 13933, 13966);
				return;
			}
			if (a0 == 13933) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(12739);
				tv0->ClearReplies();
				tv0->AddReply(12740, 13935, 13934);
				tv0->AddReply(12746, 13935, 13940);
				tv0->AddReply(12747, 13935, 13941);
				return;
			}
			if (a0 == 13935) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(12741);
				tv0->ClearReplies();
				tv0->AddReply(12742, 13937, 13936);
				tv0->AddReply(12751, 13947, 13945);
				tv0->AddReply(12752, -1, 13946);
				return;
			}
			if (a0 == 13947) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(12753);
				tv0->ClearReplies();
				tv0->AddReply(12754, 13949, 13948);
				return;
			}
			if (a0 == 13949) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(12755);
				tv0->ClearReplies();
				tv0->AddReply(12756, -1, 13950);
				tv0->AddReply(12757, -1, 13951);
				return;
			}
			if (a0 == 13937) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(12743);
				tv0->ClearReplies();
				tv0->AddReply(12758, 13954, 13952);
				tv0->AddReply(12759, 13954, 13953);
				return;
			}
			if (a0 == 13954) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(12760);
				tv0->ClearReplies();
				tv0->AddReply(12761, 13957, 13956);
				return;
			}
			if (a0 == 13957) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(12762);
				tv0->ClearReplies();
				tv0->AddReply(12763, 13959, 13958);
				return;
			}
			if (a0 == 13959) {
				f_f1_a1_v("Neutral");
				tv0->SetMessage(12764);
				tv0->ClearReplies();
				tv0->AddReply(12765, -1, 13960);
				tv0->AddReply(12766, -1, 13961);
				return;
			}
			tv3 = true;
			if (f_6e2_a0_b()) {
				@lshStopAnimation();
			} else {
				@StopAnimation();
			}
			return;
		}
	}
}

maintask t2
{
	var bool tv0;

	void OnUse(object a0)
	{
		t0{a0};
	}

	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_4b2_a0_b()) {
				@RemoveActor(f_509_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_4b2_a0_b()) {
			@RemoveActor(f_509_a0_o());
		}
	}
}

bool f_4b2_a0_b(void)
{
	return true;
}

bool f_4b4_a1_b(object a0)
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
	L5 = L3 * 70 + f_50f_a1_V(L4 ^ [0.0, 1.0, 0.0]) * 25 - [0.0, 10.0, 0.0];
	L6 = L2 + L5;
	@IsOverrideActive(L7);
	if (L7) {
		return false;
	}
	@StopWorld();
	@CameraTransit(L6, L4);
	@Rotate(L5.x, L5.z);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	return true;
}

void f_4ec_a1_v(object a0)
{
	@CameraSwitchToNormal();
}

void f_4f0_a1_v(string a0)
{
	float L0;
	float L1;
	@Trace("playing " + a0);
	@lshGetAnimTimes(a0, L0, L1);
	@lshPlayAnimation(L0, L1);
	@Trace("start: " + L0);
	@Trace("end: " + L1);
}

void f_502_a0_v(void)
{
	if (f_6e2_a0_b()) {
		@lshStopSpeech();
	}
}

object f_509_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_50f_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

int f_519_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

void f_51e_a3_v(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (!L2) {
		a0->DropItems(a1, a2);
	}
}

void f_52b_a3_v(object a0, string a1, int a2)
{
	object L0;
	@CreateInvItem(L0);
	L0->SetItemName(a1);
	f_51e_a3_v(a0, L0, a2);
}

bool f_538_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_544_a2_v(object a0, object a1)
{
	f_6ce_a0_v();
	@Trace("klara blood is given");
	f_52b_a3_v(a0, "d6q01_klara_blood", 1);
}

void f_552_a2_v(object a0, object a1)
{
	@TriggerWorld("playsound", "giveitem");
}

void f_558_a2_v(object a0, object a1)
{
	@SetVariable("ood6Klara1", 1);
}

void f_55e_a2_v(object a0, object a1)
{
	@SetVariable("ood6Klara2", 1);
}

void f_564_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	@SetVariable("d6q01KlaraVolonteer", 1);
	L0 = f_6ac_a0_o();
	L0->FindMark(L1, "d6q01AlexandrGotoJulia");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01AlexandrGotoKaterina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01AlexandrGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01AlexangrGotoJulLaraSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01BigVladGotoAnna");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01BigVladGotoAnnaOspinaSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01BigVladGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01KaterinaGotoLaska");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01KaterinagotoLaskaSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01KillerIsKlara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01LaskaGotoAlbinos");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01ViktorGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01ViktorGotoAlxBigSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01ViktorGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	f_69b_a1_b(112);
	f_69b_a1_b(113);
	f_69b_a1_b(114);
	f_69b_a1_b(115);
	f_69b_a1_b(116);
	f_69b_a1_b(117);
	f_69b_a1_b(122);
	f_538_a2_b("quest_d6_01", "completed");
}

void f_5f3_a2_v(object a0, object a1)
{
	@SetVariable("ood6Klara3", 1);
}

bool f_5f9_a1_b(object a0)
{
	if (f_519_a1_i("d6q01") == 2) {
		return true;
	}
	return false;
}

bool f_605_a1_b(object a0)
{
	if (f_519_a1_i("d6q01") == 2) {
		return true;
	}
	return false;
}

bool f_611_a1_b(object a0)
{
	if (f_519_a1_i("d6q01") == 4) {
		return true;
	}
	return false;
}

bool f_61d_a1_b(object a0)
{
	if (f_519_a1_i("ood6Klara1") == 0) {
		return true;
	}
	return false;
}

bool f_629_a1_b(object a0)
{
	if (f_519_a1_i("d6q01") == 3) {
		return true;
	}
	return false;
}

bool f_635_a1_b(object a0)
{
	if (f_519_a1_i("ood6Klara2") == 0) {
		return true;
	}
	return false;
}

bool f_641_a1_b(object a0)
{
	if (f_519_a1_i("microscope_d6q01_klara_blood") != 0) {
		return true;
	}
	return false;
}

bool f_64d_a1_b(object a0)
{
	if (f_519_a1_i("d6q01") == 1000) {
		return true;
	}
	return false;
}

bool f_659_a1_b(object a0)
{
	if (f_519_a1_i("d6q01") == -1) {
		return true;
	}
	return false;
}

bool f_665_a1_b(object a0)
{
	if (f_519_a1_i("ood6Klara3") == 0) {
		return true;
	}
	return false;
}

object f_671_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_67e_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_671_a0_o();
	L0->Find(a1, L1);
	if (!L1) {
		@Trace("Can't find diary parent with id: " + a1);
		return false;
	}
	L1->AddChild(a0);
	@SetVariable("player_diary", 1);
	a0->GetCategory(L2);
	@SetDiarySection(L2);
	return false;
}

bool f_69b_a1_b(int a0)
{
	object L0;
	object L1;
	L0 = f_671_a0_o();
	L0->Find(a0, L1);
	if (!L1) {
		return false;
	}
	L1->Remove();
	return true;
}

object f_6ac_a0_o(void)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("Can't find main outdoor scene");
		L1 = null;
		return L1;
	}
	L0->GetMap(L1);
	return L1;
}

int f_6bd_a0_i(void)
{
	int L0;
	@GetVariable("player", L0);
	if (L0 == 0) {
		return 200001;
	} else {
		if (L0 == 1) {
			return 200002;
		}
	}
	return 200003;
}

void f_6ce_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 163, 1, 15405);
	f_67e_a2_b(L0, 111);
}

int f_6de_a0_i(void)
{
	return 2865;
}

string f_6e0_a0_s(void)
{
	return "ui/NPC_Klara.png";
}

bool f_6e2_a0_b(void)
{
	return true;
}


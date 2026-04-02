// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool)
	{
		if(1 != 0) {
			func_638();
			if(var_7_bool == 13708) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_720();
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_683();
			}
			if(var_6_int == 11632) {
				bool var_74_bool;
				func_726(var_74_bool, var_1_object);
				if(var_74_bool != 0) {
					func_171(var_7_bool, "Neutral");
					var_0_object->SetMessage(10543); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(10544, 11634, 11633); //@t
					var_0_object->AddReply(10560, 11650, 11649); //@t
					var_0_object->AddReply(10566, 11634, 11655); //@t
					return 0;
				}
				bool var_103_bool;
				func_726(var_103_bool, var_1_object);
				if(var_103_bool != 0) {
					func_171(var_7_bool, "Neutral");
					var_0_object->SetMessage(11865); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(11866, 13080, 13079); //@t
					return 0;
				}
				bool var_110_bool;
				func_736(var_1_object);
				if(var_110_bool != 0) {
					func_171(var_7_bool, "Neutral");
					var_0_object->SetMessage(12536); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(12537, 13707, 13706); //@t
					return 0;
				}
			}
			if(var_6_int == 13707) {
				func_171(var_7_bool, "Neutral");
				var_0_object->SetMessage(12538); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12539, -1, 13708); //@t
				return 0;
			}
			if(var_6_int == 13080) {
				func_171(var_7_bool, "Neutral");
				var_0_object->SetMessage(11867); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11868, 13082, 13081); //@t
				return 0;
			}
			if(var_6_int == 13082) {
				func_171(var_7_bool, "Neutral");
				var_0_object->SetMessage(11869); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11870, -1, 13083); //@t
				return 0;
			}
			if(var_6_int == 11650) {
				func_171(var_7_bool, "Neutral");
				var_0_object->SetMessage(10561); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10562, 11652, 11651); //@t
				return 0;
			}
			if(var_6_int == 11652) {
				func_171(var_7_bool, "Neutral");
				var_0_object->SetMessage(10563); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10564, -1, 11653); //@t
				var_0_object->AddReply(10565, -1, 11654); //@t
				return 0;
			}
			if(var_6_int == 11634) {
				func_171(var_7_bool, "Neutral");
				var_0_object->SetMessage(10545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10546, 11636, 11635); //@t
				var_0_object->AddReply(10553, 11643, 11642); //@t
				var_0_object->AddReply(10557, 11647, 11646); //@t
				return 0;
			}
			if(var_6_int == 11647) {
				func_171(var_7_bool, "Neutral");
				var_0_object->SetMessage(10558); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10559, -1, 11648); //@t
				return 0;
			}
			if(var_6_int == 11643) {
				func_171(var_7_bool, "Neutral");
				var_0_object->SetMessage(10554); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10555, -1, 11644); //@t
				var_0_object->AddReply(10556, -1, 11645); //@t
				return 0;
			}
			if(var_6_int == 11636) {
				func_171(var_7_bool, "Neutral");
				var_0_object->SetMessage(10547); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10548, -1, 11637); //@t
				var_0_object->AddReply(10549, 11639, 11638); //@t
				return 0;
			}
			if(var_6_int == 11639) {
				func_171(var_7_bool, "Neutral");
				var_0_object->SetMessage(10550); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10551, -1, 11640); //@t
				var_0_object->AddReply(10552, -1, 11641); //@t
				return 0;
			}
			var_3_string = true;
			bool var_211_bool;
			func_847(var_211_bool);
			if(var_211_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbc";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		object var_8_object;
		var_6_object = var_8_object;
		TaskCall(0);
		int var_7_int;
		func_0(var_9_object, var_7_int, var_8_object);
		TaskReturn();
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		bool var_8_bool;
		if(var_6_string == "cleanup") {
			var_0_object = true;
			@IsLoaded(var_8_bool);
			bool var_11_bool = false;
			if(!var_8_bool) { //@nz
				bool var_13_bool;
				func_558(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_645(var_14_object);
				@RemoveActor(var_14_object);
			}
		} else if(var_6_string == "restore") {
			var_0_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		bool var_6_bool = false;
		if(var_0_object != 0) {
			bool var_8_bool;
			func_558(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_645(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_560(var_18_bool, var_19_object);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_59_int;
	func_843(var_59_int);
	var_14_object->SetNPCName(var_59_int);
	string var_60_string;
	func_845(var_60_string);
	var_14_object->SetPhoto(var_60_string);
	int var_61_int;
	func_810(var_61_int);
	var_14_object->SetPlayerName(var_61_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	object var_70_object; object var_71_object;
	var_8_object = var_70_object;
	var_14_object = var_71_object;
	TaskCall(1);
	func_63(var_72_object, var_73_object, var_74_string, var_75_bool, var_70_object, var_71_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_134_bool = !var_17_bool; //@nz
		if(var_134_bool == 0) goto Label_52;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_52:
	object var_135_object;
	var_8_object = var_135_object;
	func_616();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_645(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_651(cvector var_43_cvector, cvector var_44_cvector)
{
	float var_47_float = sqrt(var_44_cvector | var_44_cvector);
	if(var_47_float < 0.000001)
		var_43_cvector = [0.0, 0.0, 0.0];
	var_43_cvector = var_44_cvector / var_47_float;
}


void func_843(int var_59_int)
{
	var_59_int = 11961;
}


void func_845(string var_60_string)
{
	var_60_string = "ui/NPC_Burah.png";
}


void func_847(bool var_82_bool)
{
	var_82_bool = true;
}


// @pe
void func_720(void)
{
	@SetVariable("ood5Burah1", 1);
}


void func_661(int var_123_int, string var_124_string)
{
	int var_126_int;
	@GetVariable(var_124_string, var_126_int);
	var_126_int = var_123_int;
}


// @pe
void func_726(bool var_77_bool, object var_78_object)
{
	object var_80_object;
	var_78_object = var_80_object;
	func_748(var_80_object);
	bool var_79_bool;
	if(var_79_bool != 0) {
		var_77_bool = true;
		return 0;
	}
	var_77_bool = false;
}


void func_793(object var_22_object)
{
	object var_25_object; object var_26_object;
	@GetMainOutdoorScene(var_25_object);
	if(var_25_object == null) {
		@Trace("Can't find main outdoor scene");
		var_26_object = null;
		var_26_object = var_22_object;
	}
	var_25_object->GetMap(var_26_object);
	var_26_object = var_22_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_666(bool var_66_bool, string var_67_string, string var_68_string)
{
	object var_70_object;
	@FindActor(var_70_object, var_67_string);
	if(var_70_object == null)
		var_66_bool = false;
	@Trigger(var_70_object, var_68_string);
	var_66_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_736(bool var_121_bool)
{
	int var_123_int;
	func_661(var_123_int, "ood5Burah1");
	if(var_123_int == 0) {
		var_121_bool = true;
		return 0;
	}
	var_121_bool = false;
}


void func_678(float var_33_float)
{
	float var_35_float;
	@GetGameTime(var_35_float);
	var_35_float = var_33_float;
}


// @pe
void func_616(void)
{
	@CameraSwitchToNormal();
}


void func_810(int var_61_int)
{
	int var_63_int;
	@GetVariable("player", var_63_int);
	if(var_63_int == 0) {
		var_61_int = 200001;
		return 2;
	EMIT "GOTO 0x339";
	}
	if(var_63_int == 1) {
		var_61_int = 200002;
		return 2;
	}
	var_61_int = 200003;
}


// @pe
void func_171(object var_2_object, string var_81_string)
{
	bool var_82_bool;
	func_847(var_82_bool);
	if(!var_82_bool) //@nz
		return 0;
	if(var_81_string == var_2_object)
		return 0;
	string var_85_string;
	func_620(var_85_string);
	var_2_object = var_85_string;
}


void func_683(void)
{
	@SetVariable("d5q01", 7);
	object var_22_object;
	func_793(var_22_object);
	object var_19_object;
	var_22_object = var_19_object;
	float var_33_float;
	func_678(var_33_float);
	var_19_object->AddMark("d5q01BurahMeeting1", "pt_d5q01_girl_corpse1", 1, 15351, var_33_float);
	float var_40_float;
	func_678(var_40_float);
	var_19_object->AddMark("d5q01BurahMeeting2", "pt_d5q01_girl_corpse2", 1, 15352, var_40_float);
	func_827();
	bool var_66_bool;
	func_666(var_66_bool, "quest_d5_01", "burah_free");
}
EMIT "Stack[-1] = 0";


void func_620(string var_85_string)
{
	@Trace("playing " + var_85_string);
	float var_88_float;
	float var_89_float;
	@lshGetAnimTimes(var_85_string, var_88_float, var_89_float);
	@lshPlayAnimation(var_88_float, var_89_float);
	@Trace("start: " + var_88_float);
	@Trace("end: " + var_89_float);
}


void func_558(bool var_8_bool)
{
	var_8_bool = true;
}


// @pe
void func_748(bool var_79_bool)
{
	var_79_bool = false;
}


void func_560(bool var_18_bool, object var_19_object)
{
	cvector var_29_cvector;
	var_19_object->GetPosition(var_29_cvector);
	float var_28_float;
	var_19_object->GetEyesHeight(var_28_float);
	var_36_float = GetByIndex(var_29_cvector, 1);
	SetByIndex(var_29_cvector, 1) = (var_36_float + var_28_float);
	cvector var_30_cvector;
	@GetPosition(var_30_cvector);
	@GetEyesHeight(var_28_float);
	var_37_float = GetByIndex(var_30_cvector, 1);
	SetByIndex(var_30_cvector, 1) = (var_37_float + var_28_float);
	cvector var_31_cvector = var_29_cvector - var_30_cvector;
	var_38_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (float)0;
	var_40_float = sqrt(var_31_cvector | var_31_cvector);
	var_31_cvector /= var_40_float;
	cvector var_32_cvector = -var_31_cvector;
	cvector var_43_cvector;
	func_651(var_43_cvector, (var_32_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_33_cvector = ((var_31_cvector * 70) + (var_43_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_35_bool;
	@IsOverrideActive(var_35_bool);
	if(var_35_bool != 0)
		var_18_bool = false;
	@StopWorld();
	@CameraTransit((var_30_cvector + var_33_cvector), var_32_cvector);
	var_56_float = GetByIndex(var_33_cvector, 0);
	var_57_float = GetByIndex(var_33_cvector, 2);
	@Rotate(var_56_float, var_57_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
}


void func_751(object var_56_object)
{
	object var_58_object;
	@GetDiaryRoot(var_58_object);
	if(!var_58_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_56_object = false;
	}
	var_58_object = var_56_object;
}
EMIT "Stack[-1] = 0";


void func_827(void)
{
	@Trace("Adding diary entry");
	object var_42_object;
	@CreateDiaryEntry(var_42_object, 146, 1, 15346);
	bool var_47_bool; object var_48_object;
	var_42_object = var_48_object;
	func_764(var_47_bool, var_48_object, 139);
}
EMIT "Stack[-1] = 0";


void func_764(bool var_47_bool, object var_48_object, int var_49_int)
{
	object var_56_object;
	func_751(var_56_object);
	object var_53_object;
	var_56_object = var_53_object;
	object var_54_object;
	var_53_object->Find(var_49_int, var_54_object);
	if(!var_54_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_49_int);
		var_47_bool = false;
	}
	var_54_object->AddChild(var_48_object);
	@SetVariable("player_diary", 1);
	int var_55_int;
	var_48_object->GetCategory(var_55_int);
	@SetDiarySection(var_55_int);
	var_47_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_638(void)
{
	bool var_9_bool;
	func_847(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_70_object, object var_71_object)
{
	var_0_object = var_71_object;
	var_1_object = var_70_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_77_bool;
		func_726(var_77_bool, var_1_object);
		if(var_77_bool != 0) {
			func_171(var_71_object, "Neutral");
			var_0_object->SetMessage(10543); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(10544, 11634, 11633); //@t
			var_0_object->AddReply(10560, 11650, 11649); //@t
			var_0_object->AddReply(10566, 11634, 11655); //@t
		} else {
					bool var_114_bool;
					func_726(var_114_bool, var_1_object);
					if(var_114_bool == 0) goto Label_119;
					func_171(var_71_object, "Neutral");
					var_0_object->SetMessage(11865); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(11866, 13080, 13079); //@t
		}
	}
Label_141:
	for(;;) {
		bool var_106_bool;
		func_847(var_106_bool);
		if(var_106_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_620(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_170;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_170:
			}
			bool var_121_bool;
			func_736(var_1_object);
			if(var_121_bool != 0) {
			func_171(var_71_object, "Neutral");
			var_0_object->SetMessage(12536); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(12537, 13707, 13706); //@t
			goto Label_141;
		}
		return 0;
	}
}
EMIT "GOTO 0x43";



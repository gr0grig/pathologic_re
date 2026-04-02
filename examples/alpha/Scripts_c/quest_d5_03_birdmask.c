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
			func_667();
			if(var_7_bool == 13729) {
				object var_12_object = var_1_object;
				func_741(var_0_object);
				object var_63_object = var_1_object;
				func_724(var_0_object);
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_object;
				func_712();
			}
			if(var_7_bool == 13730) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_797();
			}
			if(var_7_bool == 13735) {
				object var_114_object = var_1_object;
				func_724(var_0_object);
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_712();
				object var_118_object = var_1_object;
				func_741(var_0_object);
			}
			if(var_7_bool == 13738) {
				object var_122_object; object var_123_object;
				var_122_object = var_1_object;
				var_123_object = var_0_object;
				func_718();
			}
			if(var_6_int == 13720) {
				bool var_128_bool;
				func_860(var_1_object);
				if(var_128_bool != 0) {
					func_185(var_7_bool, "Neutral");
					var_0_object->SetMessage(12551); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(12552, 13722, 13721); //@t
					return 0;
				}
				func_185(var_7_bool, "Neutral");
				var_0_object->SetMessage(12562); //@t
				var_0_object->ClearReplies(); //@t
				bool var_157_bool = false;
				bool var_158_bool;
				func_838(var_158_bool, var_1_object);
				if(var_158_bool != 0) {
					bool var_167_bool;
					func_896(var_1_object);
					if(var_167_bool != 0)
						var_157_bool = true;
				}
				if(var_157_bool != 0)
					var_0_object->AddReply(12563, 13734, 13732); //@t
				bool var_176_bool = false;
				bool var_177_bool = false;
				bool var_178_bool;
				func_848(var_1_object);
				if(var_178_bool != 0) {
					bool var_184_bool;
					func_872(var_1_object);
					if(!var_184_bool) //@nz
						var_177_bool = true;
				}
				if(var_177_bool != 0) {
					bool var_191_bool;
					func_884(var_1_object);
					if(!var_191_bool) //@nz
						var_176_bool = true;
				}
				if(var_176_bool != 0)
					var_0_object->AddReply(12567, 13737, 13736); //@t
				var_0_object->AddReply(12564, -1, 13733); //@t
				return 0;
			}
			if(var_6_int == 13737) {
				func_185(var_7_bool, "Neutral");
				var_0_object->SetMessage(12568); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12609, 13785, 13784); //@t
				return 0;
			}
			if(var_6_int == 13785) {
				func_185(var_7_bool, "Neutral");
				var_0_object->SetMessage(12610); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12569, -1, 13738); //@t
				return 0;
			}
			if(var_6_int == 13734) {
				func_185(var_7_bool, "Neutral");
				var_0_object->SetMessage(12565); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12566, -1, 13735); //@t
				return 0;
			}
			if(var_6_int == 13722) {
				func_185(var_7_bool, "Neutral");
				var_0_object->SetMessage(12553); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12554, 13724, 13723); //@t
				var_0_object->AddReply(12604, 13778, 13777); //@t
				return 0;
			}
			if(var_6_int == 13778) {
				func_185(var_7_bool, "Neutral");
				var_0_object->SetMessage(12605); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12606, 13724, 13779); //@t
				return 0;
			}
			if(var_6_int == 13724) {
				func_185(var_7_bool, "Neutral");
				var_0_object->SetMessage(12555); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12556, 13726, 13725); //@t
				var_0_object->AddReply(12607, 13726, 13781); //@t
				return 0;
			}
			if(var_6_int == 13726) {
				func_185(var_7_bool, "Neutral");
				var_0_object->SetMessage(12557); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12558, 13728, 13727); //@t
				return 0;
			}
			if(var_6_int == 13728) {
				func_185(var_7_bool, "Neutral");
				var_0_object->SetMessage(12559); //@t
				var_0_object->ClearReplies(); //@t
				bool var_263_bool;
				func_838(var_263_bool, var_1_object);
				if(var_263_bool != 0)
					var_0_object->AddReply(12560, -1, 13729); //@t
				var_0_object->AddReply(12561, -1, 13730); //@t
				return 0;
			}
			var_3_string = true;
			bool var_271_bool;
			func_1031(var_271_bool);
			if(var_271_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xca";
	
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
		if(var_9_object == 1) {
			bool var_165_bool;
			func_695(var_165_bool, "quest_d5_03", "completed");
		}
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
				func_587(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_674(var_14_object);
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
			func_587(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_674(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


// @pe
void func_896(bool var_124_bool)
{
	int var_126_int;
	func_690(var_126_int, "d5q03");
	if(var_126_int == 2)
		var_124_bool = true;
	var_124_bool = false;
}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_589(var_18_bool, var_19_object);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_59_int;
	func_1027(var_59_int);
	var_14_object->SetNPCName(var_59_int);
	string var_60_string;
	func_1029(var_60_string);
	var_14_object->SetPhoto(var_60_string);
	int var_61_int;
	func_978(var_61_int);
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
		var_161_bool = !var_17_bool; //@nz
		if(var_161_bool == 0) goto Label_52;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_52:
	object var_162_object;
	var_8_object = var_162_object;
	func_645();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_1027(int var_59_int)
{
	var_59_int = 4029;
}


void func_1029(string var_60_string)
{
	var_60_string = "ui/NPC_Black.png";
}


// @pe
void func_645(void)
{
	@CameraSwitchToNormal();
}


void func_1031(bool var_86_bool)
{
	var_86_bool = false;
}


void func_649(string var_89_string)
{
	@Trace("playing " + var_89_string);
	float var_92_float;
	float var_93_float;
	@lshGetAnimTimes(var_89_string, var_92_float, var_93_float);
	@lshPlayAnimation(var_92_float, var_93_float);
	@Trace("start: " + var_92_float);
	@Trace("end: " + var_93_float);
}


void func_908(bool var_117_bool, object var_118_object)
{
	float var_120_float;
	var_118_object->GetProperty("money", var_120_float);
	if(var_120_float >= 50000)
		var_117_bool = true;
	var_117_bool = false;
}


void func_919(object var_52_object)
{
	object var_54_object;
	@GetDiaryRoot(var_54_object);
	if(!var_54_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_52_object = false;
	}
	var_54_object = var_52_object;
}
EMIT "Stack[-1] = 0";


void func_667(void)
{
	bool var_9_bool;
	func_1031(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_797(void)
{
	@SetVariable("d5q03", 2);
	object var_85_object;
	func_961(var_85_object);
	object var_82_object;
	var_85_object = var_82_object;
	float var_90_float;
	func_707(var_90_float);
	var_82_object->AddMark("d5q03BirdmaskBringMoneySelf", "pt_map_uprava_prison", 0, 15372, var_90_float);
	float var_97_float;
	func_707(var_97_float);
	var_82_object->AddMark("d5q03BirdmaskGotoMladVlad", "pt_map_mladvlad", 0, 15374, var_97_float);
	float var_102_float;
	func_707(var_102_float);
	var_82_object->AddMark("d5q03BirdmaskGotoViktor", "pt_map_viktor", 0, 15373, var_102_float);
	func_995();
}
EMIT "Stack[-1] = 0";


void func_674(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_932(bool var_43_bool, object var_44_object, int var_45_int)
{
	object var_52_object;
	func_919(var_52_object);
	object var_49_object;
	var_52_object = var_49_object;
	object var_50_object;
	var_49_object->Find(var_45_int, var_50_object);
	if(!var_50_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_45_int);
		var_43_bool = false;
	}
	var_50_object->AddChild(var_44_object);
	@SetVariable("player_diary", 1);
	int var_51_int;
	var_44_object->GetCategory(var_51_int);
	@SetDiarySection(var_51_int);
	var_43_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_680(cvector var_43_cvector, cvector var_44_cvector)
{
	float var_47_float = sqrt(var_44_cvector | var_44_cvector);
	if(var_47_float < 0.000001)
		var_43_cvector = [0.0, 0.0, 0.0];
	var_43_cvector = var_44_cvector / var_47_float;
}


void func_690(int var_79_int, string var_80_string)
{
	int var_82_int;
	@GetVariable(var_80_string, var_82_int);
	var_82_int = var_79_int;
}


void func_695(bool var_165_bool, string var_166_string, string var_167_string)
{
	object var_169_object;
	@FindActor(var_169_object, var_166_string);
	if(var_169_object == null)
		var_165_bool = false;
	@Trigger(var_169_object, var_167_string);
	var_165_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_185(object var_2_object, string var_85_string)
{
	bool var_86_bool;
	func_1031(var_86_bool);
	if(!var_86_bool) //@nz
		return 0;
	if(var_85_string == var_2_object)
		return 0;
	string var_89_string;
	func_649(var_89_string);
	var_2_object = var_89_string;
}


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_70_object, object var_71_object)
{
	var_0_object = var_71_object;
	var_1_object = var_70_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_77_bool;
		func_860(var_1_object);
		if(var_77_bool != 0) {
			func_185(var_71_object, "Neutral");
			var_0_object->SetMessage(12551); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(12552, 13722, 13721); //@t
		} else {
					func_185(var_71_object, "Neutral");
					var_0_object->SetMessage(12562); //@t
					var_0_object->ClearReplies(); //@t
					bool var_114_bool = false;
					bool var_115_bool;
					func_838(var_115_bool, var_1_object);
					if(var_115_bool != 0) {
						bool var_124_bool;
						func_896(var_1_object);
						if(var_124_bool != 0)
							var_114_bool = true;
					}
					if(var_114_bool != 0)
						var_0_object->AddReply(12563, 13734, 13732); //@t
					bool var_133_bool = false;
					bool var_134_bool = false;
					bool var_135_bool;
					func_848(var_1_object);
					if(var_135_bool != 0) {
						bool var_141_bool;
						func_872(var_1_object);
						if(!var_141_bool) //@nz
							var_134_bool = true;
					}
					if(var_134_bool != 0) {
						bool var_148_bool;
						func_884(var_1_object);
						if(!var_148_bool) //@nz
							var_133_bool = true;
					}
					if(var_133_bool != 0)
						var_0_object->AddReply(12567, 13737, 13736); //@t
					var_0_object->AddReply(12564, -1, 13733); //@t
		}
	}
	for(;;) {
		bool var_104_bool;
		func_1031(var_104_bool);
		if(var_104_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_649(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_184;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_184:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x43";


void func_961(object var_18_object)
{
	object var_21_object; object var_22_object;
	@GetMainOutdoorScene(var_21_object);
	if(var_21_object == null) {
		@Trace("Can't find main outdoor scene");
		var_22_object = null;
		var_22_object = var_18_object;
	}
	var_21_object->GetMap(var_22_object);
	var_22_object = var_18_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_707(float var_90_float)
{
	float var_92_float;
	@GetGameTime(var_92_float);
	var_92_float = var_90_float;
}


// @pe
void func_838(bool var_115_bool, object var_116_object)
{
	object var_118_object;
	var_116_object = var_118_object;
	bool var_117_bool;
	func_908(var_117_bool, var_118_object);
	if(var_117_bool != 0) {
		var_115_bool = true;
		return 0;
	}
	var_115_bool = false;
}


// @pe
void func_712(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_587(bool var_8_bool)
{
	var_8_bool = true;
}


void func_589(bool var_18_bool, object var_19_object)
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
	func_680(var_43_cvector, (var_32_cvector ^ [0.0, 1.0, 0.0]));
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


// @pe
void func_718(void)
{
	@SetVariable("ood5Birdmask1", 1);
}


// @pe
void func_848(bool var_135_bool)
{
	int var_137_int;
	func_690(var_137_int, "ood5Birdmask1");
	if(var_137_int == 0) {
		var_135_bool = true;
		return 0;
	}
	var_135_bool = false;
}


void func_978(int var_61_int)
{
	int var_63_int;
	@GetVariable("player", var_63_int);
	if(var_63_int == 0) {
		var_61_int = 200001;
		return 2;
	EMIT "GOTO 0x3e1";
	}
	if(var_63_int == 1) {
		var_61_int = 200002;
		return 2;
	}
	var_61_int = 200003;
}


void func_724(object var_63_object)
{
	float var_66_float;
	var_63_object->GetProperty("money", var_66_float);
	if((var_66_float - 50000) < 0)
		var_66_float = 0;
	var_63_object->SetProperty("money", var_66_float);
	@Trace("money 50000 removed");
}


// @pe
void func_860(bool var_77_bool)
{
	int var_79_int;
	func_690(var_79_int, "d5q03");
	if(var_79_int == 1)
		var_77_bool = true;
	var_77_bool = false;
}


void func_995(void)
{
	@Trace("Adding diary entry");
	object var_104_object;
	@CreateDiaryEntry(var_104_object, 156, 2, 15367);
	bool var_109_bool; object var_110_object;
	var_104_object = var_110_object;
	func_932(var_109_bool, var_110_object, 154);
}
EMIT "Stack[-1] = 0";


void func_741(object var_13_object)
{
	object var_18_object;
	func_961(var_18_object);
	object var_16_object;
	var_18_object = var_16_object;
	object var_17_object;
	var_16_object->FindMark(var_17_object, "d5q03BirdmaskBringMoneySelf");
	if(var_17_object != 0)
		var_17_object->Remove();
	var_16_object->FindMark(var_17_object, "d5q03BirdmaskGotoMladVlad");
	if(var_17_object != 0)
		var_17_object->Remove();
	var_16_object->FindMark(var_17_object, "d5q03BirdmaskGotoViktor");
	if(var_17_object != 0)
		var_17_object->Remove();
	var_16_object->FindMark(var_17_object, "d5q03MladVladSavePrisonersSelf");
	if(var_17_object != 0)
		var_17_object->Remove();
	var_16_object->FindMark(var_17_object, "d5q03SavePrisoners");
	if(var_17_object != 0)
		var_17_object->Remove();
	var_16_object->FindMark(var_17_object, "d5q03ViktorSavePrisonersSelf");
	if(var_17_object != 0)
		var_17_object->Remove();
	func_1011();
	var_13_object->SetReturnValue(1);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_872(bool var_141_bool)
{
	int var_143_int;
	func_690(var_143_int, "d5q03");
	if(var_143_int == 1000)
		var_141_bool = true;
	var_141_bool = false;
}


void func_1011(void)
{
	@Trace("Adding diary entry");
	object var_38_object;
	@CreateDiaryEntry(var_38_object, 157, 2, 15368);
	bool var_43_bool; object var_44_object;
	var_38_object = var_44_object;
	func_932(var_43_bool, var_44_object, 154);
}
EMIT "Stack[-1] = 0";


// @pe
void func_884(bool var_148_bool)
{
	int var_150_int;
	func_690(var_150_int, "d5q03");
	if(var_150_int == -1)
		var_148_bool = true;
	var_148_bool = false;
}



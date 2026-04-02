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
			func_786();
			if(var_7_bool == 13729) {
				object var_12_object = var_1_object;
				func_950(var_0_object);
				object var_61_object = var_1_object;
				func_940(var_0_object);
				object var_82_object; object var_83_object;
				var_82_object = var_1_object;
				var_83_object = var_0_object;
				func_928();
			}
			if(var_7_bool == 13730) {
				object var_88_object; object var_89_object;
				var_88_object = var_1_object;
				var_89_object = var_0_object;
				func_1006();
			}
			if(var_7_bool == 16739) {
				object var_122_object = var_1_object;
				func_1047(var_0_object);
			}
			if(var_7_bool == 16737) {
				object var_164_object; object var_165_object;
				var_164_object = var_1_object;
				var_165_object = var_0_object;
				func_918();
			}
			if(var_7_bool == 13735) {
				object var_182_object = var_1_object;
				func_940(var_0_object);
				object var_184_object; object var_185_object;
				var_184_object = var_1_object;
				var_185_object = var_0_object;
				func_928();
				object var_186_object = var_1_object;
				func_950(var_0_object);
			}
			if(var_7_bool == 13738) {
				object var_190_object; object var_191_object;
				var_190_object = var_1_object;
				var_191_object = var_0_object;
				func_934();
			}
			if(var_6_int == 13720) {
				bool var_196_bool;
				func_1076(var_1_object);
				if(var_196_bool != 0) {
					func_201(var_7_bool, "Neutral");
					var_0_object->SetMessage(512551); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(512552, 13722, 13721); //@t
					var_0_object->AddReply(515690, -1, 16737); //@t
					return 0;
				}
				func_201(var_7_bool, "Neutral");
				var_0_object->SetMessage(512562); //@t
				var_0_object->ClearReplies(); //@t
				bool var_225_bool = false;
				bool var_226_bool;
				func_1054(var_226_bool, var_1_object);
				if(var_226_bool != 0) {
					bool var_235_bool;
					func_1112(var_1_object);
					if(var_235_bool != 0)
						var_225_bool = true;
				}
				if(var_225_bool != 0)
					var_0_object->AddReply(512563, 13734, 13732); //@t
				bool var_244_bool = false;
				bool var_245_bool = false;
				bool var_246_bool;
				func_1064(var_1_object);
				if(var_246_bool != 0) {
					bool var_252_bool;
					func_1088(var_1_object);
					if(!var_252_bool) //@nz
						var_245_bool = true;
				}
				if(var_245_bool != 0) {
					bool var_259_bool;
					func_1100(var_1_object);
					if(!var_259_bool) //@nz
						var_244_bool = true;
				}
				if(var_244_bool != 0)
					var_0_object->AddReply(512567, 13737, 13736); //@t
				var_0_object->AddReply(512564, -1, 13733); //@t
				return 0;
			}
			if(var_6_int == 13737) {
				func_201(var_7_bool, "Neutral");
				var_0_object->SetMessage(512568); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512609, 13785, 13784); //@t
				var_0_object->AddReply(515693, 13785, 16740); //@t
				return 0;
			}
			if(var_6_int == 13785) {
				func_201(var_7_bool, "Neutral");
				var_0_object->SetMessage(512610); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512569, -1, 13738); //@t
				return 0;
			}
			if(var_6_int == 13734) {
				func_201(var_7_bool, "Neutral");
				var_0_object->SetMessage(512565); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512566, -1, 13735); //@t
				return 0;
			}
			if(var_6_int == 13722) {
				func_201(var_7_bool, "Neutral");
				var_0_object->SetMessage(512553); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512554, 13724, 13723); //@t
				var_0_object->AddReply(512604, 13778, 13777); //@t
				return 0;
			}
			if(var_6_int == 13778) {
				func_201(var_7_bool, "Neutral");
				var_0_object->SetMessage(512605); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512606, 13724, 13779); //@t
				var_0_object->AddReply(515691, 13724, 16738); //@t
				return 0;
			}
			if(var_6_int == 13724) {
				func_201(var_7_bool, "Neutral");
				var_0_object->SetMessage(512555); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512556, 13726, 13725); //@t
				var_0_object->AddReply(512607, 13726, 13781); //@t
				return 0;
			}
			if(var_6_int == 13726) {
				func_201(var_7_bool, "Neutral");
				var_0_object->SetMessage(512557); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512558, 13728, 13727); //@t
				return 0;
			}
			if(var_6_int == 13728) {
				func_201(var_7_bool, "Neutral");
				var_0_object->SetMessage(512559); //@t
				var_0_object->ClearReplies(); //@t
				bool var_337_bool;
				func_1054(var_337_bool, var_1_object);
				if(var_337_bool != 0)
					var_0_object->AddReply(512560, -1, 13729); //@t
				var_0_object->AddReply(512561, -1, 13730); //@t
				var_0_object->AddReply(515692, -1, 16739); //@t
				return 0;
			}
			var_3_string = true;
			bool var_348_bool;
			func_1257(var_348_bool);
			if(var_348_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe0";
	
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
			bool var_184_bool;
			func_901(var_184_bool, "quest_d5_03", "completed");
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
				func_645(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_793(var_14_object);
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
			func_645(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_793(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_688(var_18_bool, var_19_object, 130.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_65_int;
	func_1251(var_65_int);
	var_14_object->SetNPCName(var_65_int);
	int var_66_int;
	func_1249(var_66_int);
	var_14_object->SetNPCDescription(var_66_int);
	string var_67_string;
	func_1253(var_67_string);
	var_14_object->SetPhoto(var_67_string);
	string var_68_string;
	func_1255(var_68_string);
	var_14_object->SetPhoto2(var_68_string);
	int var_69_int;
	func_1232(var_69_int);
	var_14_object->SetPlayerName(var_69_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	object var_78_object; object var_79_object;
	var_8_object = var_78_object;
	var_14_object = var_79_object;
	TaskCall(1);
	func_74(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_174_bool = !var_17_bool; //@nz
		if(var_174_bool == 0) goto Label_63;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_63:
	object var_175_object;
	var_8_object = var_175_object;
	func_756();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_773(string var_114_string)
{
	float var_117_float; float var_118_float;
	@lshGetAnimTimes(var_114_string, var_117_float, var_118_float);
	@lshPlayAnimation(var_117_float, var_118_float, false);
}


void func_901(bool var_184_bool, string var_185_string, string var_186_string)
{
	object var_188_object;
	@FindActor(var_188_object, var_185_string);
	if(var_188_object == null)
		var_184_bool = false;
	@Trigger(var_188_object, var_186_string);
	var_184_bool = true;
}
EMIT "Stack[-1] = 0";


void func_647(bool var_143_bool, object var_144_object, string var_145_string)
{
	var_150_bool = IsFuncExist(var_144_object, "HasProperty", 2);
	if(!var_150_bool) { //@nz
		var_143_bool = false;
		return 2;
	}
	bool var_147_bool;
	var_144_object->HasProperty(var_145_string, var_147_bool);
	var_147_bool = var_143_bool;
}


void func_645(bool var_8_bool)
{
	var_8_bool = true;
}


void func_1161(void)
{
	object var_38_object;
	@CreateDiaryEntry(var_38_object, 157, 2, 515368);
	bool var_42_bool; object var_43_object;
	var_38_object = var_43_object;
	func_1187(var_42_bool, var_43_object, 154);
}
EMIT "Stack[-1] = 0";


void func_780(string var_97_string, bool var_98_bool)
{
	float var_103_float; float var_104_float;
	@lshGetAnimTimes(var_97_string, var_103_float, var_104_float);
	@lshPlayAnimation(var_103_float, var_104_float, var_98_bool);
}


void func_913(float var_99_float)
{
	float var_101_float;
	@GetGameTime(var_101_float);
	var_101_float = var_99_float;
}


void func_786(void)
{
	bool var_9_bool;
	func_1257(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_659(bool var_135_bool, object var_136_object, string var_137_string, float var_138_float, float var_139_float, float var_140_float)
{
	object var_144_object;
	var_136_object = var_144_object;
	string var_145_string;
	var_137_string = var_145_string;
	bool var_143_bool;
	func_647(var_143_bool, var_144_object, var_145_string);
	if(!var_143_bool) //@nz
		var_135_bool = false;
	float var_142_float;
	var_136_object->GetProperty(var_137_string, var_142_float);
	float var_153_float; float var_155_float; float var_156_float;
	var_139_float = var_155_float;
	var_140_float = var_156_float;
	func_809(var_153_float, (var_142_float + var_138_float), var_155_float, var_156_float);
	var_136_object->SetProperty(var_137_string, var_153_float);
	var_135_bool = true;
}


// @pe
void func_918(void)
{
	func_1135();
	bool var_174_bool;
	func_901(var_174_bool, "quest_d5_03", "fail");
}


// @pe
void func_1047(object var_122_object)
{
	object var_125_object;
	var_122_object = var_125_object;
	bool var_124_bool;
	func_856(var_124_bool, var_125_object, -0.3);
}


void func_1174(object var_51_object)
{
	object var_53_object;
	@GetDiaryRoot(var_53_object);
	if(!var_53_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_51_object = false;
	}
	var_53_object = var_51_object;
}
EMIT "Stack[-1] = 0";


void func_793(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1054(bool var_128_bool, object var_129_object)
{
	object var_131_object;
	var_129_object = var_131_object;
	bool var_130_bool;
	func_1124(var_130_bool, var_131_object);
	if(var_130_bool != 0) {
		var_128_bool = true;
		return 0;
	}
	var_128_bool = false;
}


void func_799(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


// @pe
void func_928(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_1187(bool var_42_bool, object var_43_object, int var_44_int)
{
	object var_51_object;
	func_1174(var_51_object);
	object var_48_object;
	var_51_object = var_48_object;
	object var_49_object;
	var_48_object->Find(var_44_int, var_49_object);
	if(!var_49_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_44_int);
		var_42_bool = false;
	}
	var_49_object->AddChild(var_43_object);
	@SendWorldWndMessage(7);
	int var_50_int;
	var_43_object->GetCategory(var_50_int);
	@SetDiarySection(var_50_int);
	var_42_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_934(void)
{
	@SetVariable("ood5Birdmask1", 1);
}


// @pe
void func_1064(bool var_148_bool)
{
	int var_150_int;
	func_820(var_150_int, "ood5Birdmask1");
	if(var_150_int == 0) {
		var_148_bool = true;
		return 0;
	}
	var_148_bool = false;
}


// @pe
void func_809(float var_153_float, float var_154_float, float var_155_float, float var_156_float)
{
	if(var_154_float < var_155_float) {
		var_155_float = var_153_float;
		return 0;
	}
	if(var_154_float > var_156_float) {
		var_156_float = var_153_float;
		return 0;
	}
	var_154_float = var_153_float;
}


void func_681(object var_68_object, string var_69_string, int var_70_int)
{
	int var_72_int;
	var_68_object->GetProperty(var_69_string, var_72_int);
	var_68_object->SetProperty(var_69_string, (var_72_int + var_70_int));
}


// @pe
void func_940(object var_61_object)
{
	@Trace("money 50000 removed");
	object var_64_object;
	var_61_object = var_64_object;
	func_837(var_64_object, -50000);
}


void func_688(bool var_18_bool, object var_19_object, float var_20_float)
{
	cvector var_31_cvector; bool var_38_bool;
	var_19_object->GetPosition(var_31_cvector);
	float var_30_float;
	var_19_object->GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (var_39_float + var_30_float);
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	@GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (var_40_float + var_30_float);
	cvector var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_43_float = sqrt(var_33_cvector | var_33_cvector);
	var_33_cvector /= var_43_float;
	cvector var_34_cvector = -var_33_cvector;
	cvector var_45_cvector;
	func_799(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_35_cvector = ((var_33_cvector * var_20_float) + (var_45_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_37_bool;
	@IsOverrideActive(var_37_bool);
	if(var_37_bool != 0)
		var_18_bool = false;
	@StopWorld();
	@CameraTransit((var_32_cvector + var_35_cvector), var_34_cvector);
	var_58_float = GetByIndex(var_35_cvector, 0);
	var_59_float = GetByIndex(var_35_cvector, 2);
	@Rotate(var_58_float, var_59_float);
	bool var_60_bool;
	func_1257(var_60_bool);
	if(var_60_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_750;
		@LookAsyncCamera("head");
	}
Label_750:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


// @pe
void func_1076(bool var_85_bool)
{
	int var_87_int;
	func_820(var_87_int, "d5q03");
	if(var_87_int == 1)
		var_85_bool = true;
	var_85_bool = false;
}


void func_820(int var_87_int, string var_88_string)
{
	int var_90_int;
	@GetVariable(var_88_string, var_90_int);
	var_90_int = var_87_int;
}


void func_950(object var_13_object)
{
	object var_18_object;
	func_1215(var_18_object);
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
	func_1161();
	var_13_object->SetReturnValue(1);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_825(int var_77_int, int var_78_int)
{
	object var_80_object;
	@CreateIntVector(var_80_object);
	var_80_object->add(var_77_int);
	var_80_object->add(var_78_int);
	@SendWorldWndMessage(3, var_80_object);
}
EMIT "Stack[-1] = 0";


void func_1215(object var_18_object)
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


// @pe
void func_1088(bool var_154_bool)
{
	int var_156_int;
	func_820(var_156_int, "d5q03");
	if(var_156_int == 1000)
		var_154_bool = true;
	var_154_bool = false;
}


void func_837(object var_64_object, int var_65_int)
{
	int var_67_int;
	object var_68_object;
	var_64_object = var_68_object;
	int var_70_int;
	func_681(var_68_object, "money", var_70_int);
	if(var_70_int > 0) {
		@GetInvItemByName(var_67_int, "Money");
		int var_77_int; int var_78_int;
		var_67_int = var_77_int;
		var_65_int = var_78_int;
		func_825(var_77_int, var_78_int);
	}
}


// @pe
void func_201(object var_2_object, string var_93_string)
{
	bool var_94_bool;
	func_1257(var_94_bool);
	if(!var_94_bool) //@nz
		return 0;
	if(var_93_string == var_2_object)
		return 0;
	string var_97_string; bool var_98_bool;
	var_93_string = var_97_string;
	if(var_93_string == "")
		var_98_bool = false;
	else
		var_98_bool = true;
	func_780(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_78_object, object var_79_object)
{
	var_0_object = var_79_object;
	var_1_object = var_78_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_85_bool;
		func_1076(var_1_object);
		if(var_85_bool != 0) {
			func_201(var_79_object, "Neutral");
			var_0_object->SetMessage(512551); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(512552, 13722, 13721); //@t
			var_0_object->AddReply(515690, -1, 16737); //@t
		} else {
					func_201(var_79_object, "Neutral");
					var_0_object->SetMessage(512562); //@t
					var_0_object->ClearReplies(); //@t
					bool var_127_bool = false;
					bool var_128_bool;
					func_1054(var_128_bool, var_1_object);
					if(var_128_bool != 0) {
						bool var_137_bool;
						func_1112(var_1_object);
						if(var_137_bool != 0)
							var_127_bool = true;
					}
					if(var_127_bool != 0)
						var_0_object->AddReply(512563, 13734, 13732); //@t
					bool var_146_bool = false;
					bool var_147_bool = false;
					bool var_148_bool;
					func_1064(var_1_object);
					if(var_148_bool != 0) {
						bool var_154_bool;
						func_1088(var_1_object);
						if(!var_154_bool) //@nz
							var_147_bool = true;
					}
					if(var_147_bool != 0) {
						bool var_161_bool;
						func_1100(var_1_object);
						if(!var_161_bool) //@nz
							var_146_bool = true;
					}
					if(var_146_bool != 0)
						var_0_object->AddReply(512567, 13737, 13736); //@t
					var_0_object->AddReply(512564, -1, 13733); //@t
		}
	}
	for(;;) {
		bool var_112_bool;
		func_1257(var_112_bool);
		if(var_112_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_773(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_200;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_200:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


// @pe
void func_1100(bool var_161_bool)
{
	int var_163_int;
	func_820(var_163_int, "d5q03");
	if(var_163_int == -1)
		var_161_bool = true;
	var_161_bool = false;
}


void func_1232(int var_69_int)
{
	int var_71_int;
	@GetVariable("branch", var_71_int);
	if(var_71_int == 0) {
		var_69_int = 1;
		return 2;
	EMIT "GOTO 0x4df";
	}
	if(var_71_int == 1) {
		var_69_int = 2;
		return 2;
	}
	var_69_int = 3;
}


// @pe
void func_1112(bool var_137_bool)
{
	int var_139_int;
	func_820(var_139_int, "d5q03");
	if(var_139_int == 2)
		var_137_bool = true;
	var_137_bool = false;
}


// @pe
void func_856(bool var_124_bool, object var_125_object, float var_126_float)
{
	if(!var_125_object) { //@nz
		var_124_bool = false;
		return 0;
	}
	if(var_126_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_126_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_131_float;
		var_126_float = var_131_float;
		func_891(var_131_float);
		bool var_135_bool; object var_136_object; float var_138_float;
		var_125_object = var_136_object;
		var_126_float = var_138_float;
		func_659(var_135_bool, var_136_object, "reputation", var_138_float, (float)0, (float)1);
		var_124_bool = true;
		return 0;

	}
	
	var_124_bool = false;
}


void func_1249(int var_66_int)
{
	var_66_int = 515571;
}


void func_1251(int var_65_int)
{
	var_65_int = 504029;
}


void func_1124(bool var_130_bool, object var_131_object)
{
	float var_133_float;
	var_131_object->GetProperty("money", var_133_float);
	if(var_133_float >= 50000)
		var_130_bool = true;
	var_130_bool = false;
}


void func_1253(string var_67_string)
{
	var_67_string = "ui/NPC_bmask.png";
}


void func_1255(string var_68_string)
{
	var_68_string = "ui/NPC_bmask_b.png";
}


void func_1257(bool var_60_bool)
{
	var_60_bool = false;
}


void func_1006(void)
{
	@SetVariable("d5q03", 2);
	object var_94_object;
	func_1215(var_94_object);
	object var_91_object;
	var_94_object = var_91_object;
	float var_99_float;
	func_913(var_99_float);
	var_91_object->AddMark("d5q03BirdmaskBringMoneySelf", "pt_map_uprava_prison", 0, 515372, var_99_float);
	float var_106_float;
	func_913(var_106_float);
	var_91_object->AddMark("d5q03BirdmaskGotoMladVlad", "pt_map_mladvlad", 0, 515374, var_106_float);
	float var_111_float;
	func_913(var_111_float);
	var_91_object->AddMark("d5q03BirdmaskGotoViktor", "pt_map_viktor", 0, 515373, var_111_float);
	func_1148();
}
EMIT "Stack[-1] = 0";


void func_1135(void)
{
	object var_167_object;
	@CreateDiaryEntry(var_167_object, 714, 2, 536322);
	bool var_171_bool; object var_172_object;
	var_167_object = var_172_object;
	func_1187(var_171_bool, var_172_object, 154);
}
EMIT "Stack[-1] = 0";


void func_756(void)
{
	bool var_177_bool;
	@CameraSwitchToNormal();
	bool var_178_bool;
	func_1257(var_178_bool);
	if(var_178_bool != 0) {
	} else {
		@HasAnimationTrack(var_177_bool, "head");
		if(var_177_bool == 0) goto Label_772;
		@UnlookAsync("head");
	}
Label_772:
	
}


void func_891(float var_131_float)
{
	object var_133_object;
	@CreateFloatVector(var_133_object);
	var_133_object->add(var_131_float);
	@SendWorldWndMessage(16, var_133_object);
}
EMIT "Stack[-1] = 0";


void func_1148(void)
{
	object var_113_object;
	@CreateDiaryEntry(var_113_object, 156, 2, 515367);
	bool var_117_bool; object var_118_object;
	var_113_object = var_118_object;
	func_1187(var_117_bool, var_118_object, 154);
}
EMIT "Stack[-1] = 0";



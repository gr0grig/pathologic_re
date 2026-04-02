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
			func_806();
			if(var_7_bool == 13729) {
				object var_12_object = var_1_object;
				func_970(var_0_object);
				object var_61_object; object var_62_object;
				var_61_object = var_1_object;
				var_62_object = var_0_object;
				func_958();
				object var_65_object = var_1_object;
				func_948(var_0_object);
			}
			if(var_7_bool == 13730) {
				object var_88_object; object var_89_object;
				var_88_object = var_1_object;
				var_89_object = var_0_object;
				func_1026();
			}
			if(var_7_bool == 16739) {
				object var_122_object = var_1_object;
				func_1067(var_0_object);
			}
			if(var_7_bool == 16737) {
				object var_164_object; object var_165_object;
				var_164_object = var_1_object;
				var_165_object = var_0_object;
				func_938();
			}
			if(var_7_bool == 13735) {
				object var_182_object; object var_183_object;
				var_182_object = var_1_object;
				var_183_object = var_0_object;
				func_958();
				object var_184_object = var_1_object;
				func_970(var_0_object);
				object var_186_object = var_1_object;
				func_948(var_0_object);
			}
			if(var_7_bool == 13736) {
				object var_190_object; object var_191_object;
				var_190_object = var_1_object;
				var_191_object = var_0_object;
				func_964();
			}
			if(var_6_int == 13720) {
				bool var_196_bool;
				func_1096(var_1_object);
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
				bool var_230_bool = false;
				bool var_231_bool;
				func_1132(var_1_object);
				if(var_231_bool != 0) {
					bool var_237_bool;
					func_1074(var_237_bool, var_1_object);
					if(var_237_bool != 0)
						var_230_bool = true;
				}
				if(var_230_bool != 0)
					var_0_object->AddReply(512563, 13734, 13732); //@t
				bool var_249_bool = false;
				bool var_250_bool = false;
				bool var_251_bool;
				func_1084(var_1_object);
				if(var_251_bool != 0) {
					bool var_257_bool;
					func_1108(var_1_object);
					if(!var_257_bool) //@nz
						var_250_bool = true;
				}
				if(var_250_bool != 0) {
					bool var_264_bool;
					func_1120(var_1_object);
					if(!var_264_bool) //@nz
						var_249_bool = true;
				}
				if(var_249_bool != 0)
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
				bool var_342_bool;
				func_1074(var_342_bool, var_1_object);
				if(var_342_bool != 0)
					var_0_object->AddReply(512560, -1, 13729); //@t
				var_0_object->AddReply(512561, -1, 13730); //@t
				var_0_object->AddReply(515692, -1, 16739); //@t
				return 0;
			}
			var_3_string = true;
			bool var_353_bool;
			func_1277(var_353_bool);
			if(var_353_bool != 0)
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
			bool var_196_bool;
			func_921(var_196_bool, "quest_d5_03", "completed");
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
				func_813(var_14_object);
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
			func_813(var_9_object);
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
	int var_66_int;
	func_1271(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_1269(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_1273(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_1275(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_1252(var_70_int);
	var_14_object->SetPlayerName(var_70_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	object var_79_object; object var_80_object;
	var_8_object = var_79_object;
	var_14_object = var_80_object;
	TaskCall(1);
	func_74(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_185_bool = !var_17_bool; //@nz
		if(var_185_bool == 0) goto Label_63;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_63:
	object var_186_object;
	var_8_object = var_186_object;
	func_757();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_1026(void)
{
	@SetVariable("d5q03", 2);
	object var_94_object;
	func_1235(var_94_object);
	object var_91_object;
	var_94_object = var_91_object;
	float var_99_float;
	func_933(var_99_float);
	var_91_object->AddMark("d5q03BirdmaskBringMoneySelf", "pt_map_uprava_prison", 0, 515372, var_99_float);
	float var_106_float;
	func_933(var_106_float);
	var_91_object->AddMark("d5q03BirdmaskGotoMladVlad", "pt_map_mladvlad", 0, 515374, var_106_float);
	float var_111_float;
	func_933(var_111_float);
	var_91_object->AddMark("d5q03BirdmaskGotoViktor", "pt_map_viktor", 0, 515373, var_111_float);
	func_1168();
}
EMIT "Stack[-1] = 0";


void func_1155(void)
{
	object var_167_object;
	@CreateDiaryEntry(var_167_object, 714, 2, 536322);
	bool var_171_bool; object var_172_object;
	var_167_object = var_172_object;
	func_1207(var_171_bool, var_172_object, 154);
}
EMIT "Stack[-1] = 0";


void func_645(bool var_8_bool)
{
	var_8_bool = true;
}


void func_775(string var_120_string)
{
	bool var_124_bool; float var_125_float; float var_126_float;
	@lshHasAnimation(var_124_bool, var_120_string);
	if(var_124_bool != 0) {
		@lshGetAnimTimes(var_120_string, var_125_float, var_126_float);
		@lshPlayAnimation(var_125_float, var_126_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_120_string);
	}
	
}


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


void func_911(float var_131_float)
{
	object var_133_object;
	@CreateFloatVector(var_133_object);
	var_133_object->add(var_131_float);
	@SendWorldWndMessage(16, var_133_object);
}
EMIT "Stack[-1] = 0";


void func_1168(void)
{
	object var_113_object;
	@CreateDiaryEntry(var_113_object, 156, 2, 515367);
	bool var_117_bool; object var_118_object;
	var_113_object = var_118_object;
	func_1207(var_117_bool, var_118_object, 154);
}
EMIT "Stack[-1] = 0";


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
	func_829(var_153_float, (var_142_float + var_138_float), var_155_float, var_156_float);
	var_136_object->SetProperty(var_137_string, var_153_float);
	var_135_bool = true;
}


void func_791(string var_98_string, bool var_99_bool)
{
	bool var_105_bool; float var_106_float; float var_107_float;
	@lshHasAnimation(var_105_bool, var_98_string);
	if(var_105_bool != 0) {
		@lshGetAnimTimes(var_98_string, var_106_float, var_107_float);
		@lshPlayAnimation(var_106_float, var_107_float, var_99_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_98_string);
	}
	
}


void func_921(bool var_196_bool, string var_197_string, string var_198_string)
{
	object var_200_object;
	@FindActor(var_200_object, var_197_string);
	if(var_200_object == null)
		var_196_bool = false;
	@Trigger(var_200_object, var_198_string);
	var_196_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1181(void)
{
	object var_38_object;
	@CreateDiaryEntry(var_38_object, 157, 2, 515368);
	bool var_42_bool; object var_43_object;
	var_38_object = var_43_object;
	func_1207(var_42_bool, var_43_object, 154);
}
EMIT "Stack[-1] = 0";


void func_933(float var_99_float)
{
	float var_101_float;
	@GetGameTime(var_101_float);
	var_101_float = var_99_float;
}


void func_806(void)
{
	bool var_9_bool;
	func_1277(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_681(object var_72_object, string var_73_string, int var_74_int)
{
	int var_76_int;
	var_72_object->GetProperty(var_73_string, var_76_int);
	var_72_object->SetProperty(var_73_string, (var_76_int + var_74_int));
}


// @pe
void func_938(void)
{
	func_1155();
	bool var_174_bool;
	func_921(var_174_bool, "quest_d5_03", "fail");
}


// @pe
void func_1067(object var_122_object)
{
	object var_125_object;
	var_122_object = var_125_object;
	bool var_124_bool;
	func_876(var_124_bool, var_125_object, -0.3);
}


void func_1194(object var_51_object)
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


void func_813(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


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
	func_819(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_35_cvector = ((var_33_cvector * var_20_float) + (var_45_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_37_bool;
	@IsOverrideActive(var_37_bool);
	if(var_37_bool != 0)
		var_18_bool = false;
	@StopWorld();
	@CameraTransit((var_32_cvector + var_35_cvector), var_34_cvector, true);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	@Rotate(var_59_float, var_60_float);
	bool var_61_bool;
	func_1277(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_751;
		@LookAsyncCamera("head");
	}
Label_751:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


// @pe
void func_1074(bool var_145_bool, object var_146_object)
{
	object var_148_object;
	var_146_object = var_148_object;
	bool var_147_bool;
	func_1144(var_147_bool, var_148_object);
	if(var_147_bool != 0) {
		var_145_bool = true;
		return 0;
	}
	var_145_bool = false;
}


void func_819(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


// @pe
void func_948(object var_65_object)
{
	@Trace("money 60000 removed");
	object var_68_object;
	var_65_object = var_68_object;
	func_857(var_68_object, -60000);
}


void func_1207(bool var_42_bool, object var_43_object, int var_44_int)
{
	object var_51_object;
	func_1194(var_51_object);
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
void func_1084(bool var_159_bool)
{
	int var_161_int;
	func_840(var_161_int, "ood5Birdmask1");
	if(var_161_int == 0) {
		var_159_bool = true;
		return 0;
	}
	var_159_bool = false;
}


// @pe
void func_829(float var_153_float, float var_154_float, float var_155_float, float var_156_float)
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


// @pe
void func_958(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_964(void)
{
	@SetVariable("ood5Birdmask1", 1);
}


// @pe
void func_1096(bool var_86_bool)
{
	int var_88_int;
	func_840(var_88_int, "d5q03");
	if(var_88_int == 1)
		var_86_bool = true;
	var_86_bool = false;
}


// @pe
void func_201(object var_2_object, string var_94_string)
{
	bool var_95_bool;
	func_1277(var_95_bool);
	if(!var_95_bool) //@nz
		return 0;
	if(var_94_string == var_2_object)
		return 0;
	string var_98_string; bool var_99_bool;
	var_94_string = var_98_string;
	if(var_94_string == "")
		var_99_bool = false;
	else
		var_99_bool = true;
	func_791(var_98_string, var_99_bool);
	var_2_object = var_94_string;
	
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_79_object, object var_80_object)
{
	var_0_object = var_80_object;
	var_1_object = var_79_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_86_bool;
		func_1096(var_1_object);
		if(var_86_bool != 0) {
			func_201(var_80_object, "Neutral");
			var_0_object->SetMessage(512551); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(512552, 13722, 13721); //@t
			var_0_object->AddReply(515690, -1, 16737); //@t
		} else {
					func_201(var_80_object, "Neutral");
					var_0_object->SetMessage(512562); //@t
					var_0_object->ClearReplies(); //@t
					bool var_138_bool = false;
					bool var_139_bool;
					func_1132(var_1_object);
					if(var_139_bool != 0) {
						bool var_145_bool;
						func_1074(var_145_bool, var_1_object);
						if(var_145_bool != 0)
							var_138_bool = true;
					}
					if(var_138_bool != 0)
						var_0_object->AddReply(512563, 13734, 13732); //@t
					bool var_157_bool = false;
					bool var_158_bool = false;
					bool var_159_bool;
					func_1084(var_1_object);
					if(var_159_bool != 0) {
						bool var_165_bool;
						func_1108(var_1_object);
						if(!var_165_bool) //@nz
							var_158_bool = true;
					}
					if(var_158_bool != 0) {
						bool var_172_bool;
						func_1120(var_1_object);
						if(!var_172_bool) //@nz
							var_157_bool = true;
					}
					if(var_157_bool != 0)
						var_0_object->AddReply(512567, 13737, 13736); //@t
					var_0_object->AddReply(512564, -1, 13733); //@t
		}
	}
	for(;;) {
		bool var_118_bool;
		func_1277(var_118_bool);
		if(var_118_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_775(var_2_object);
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


void func_970(object var_13_object)
{
	object var_18_object;
	func_1235(var_18_object);
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
	func_1181();
	var_13_object->SetReturnValue(1);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_840(int var_88_int, string var_89_string)
{
	int var_91_int;
	@GetVariable(var_89_string, var_91_int);
	var_91_int = var_88_int;
}


void func_845(int var_81_int, int var_82_int)
{
	object var_84_object;
	@CreateIntVector(var_84_object);
	var_84_object->add(var_81_int);
	var_84_object->add(var_82_int);
	@SendWorldWndMessage(3, var_84_object);
}
EMIT "Stack[-1] = 0";


void func_1235(object var_18_object)
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
void func_1108(bool var_165_bool)
{
	int var_167_int;
	func_840(var_167_int, "d5q03");
	if(var_167_int == 1000)
		var_165_bool = true;
	var_165_bool = false;
}


void func_857(object var_68_object, int var_69_int)
{
	int var_71_int;
	object var_72_object;
	var_68_object = var_72_object;
	int var_74_int;
	func_681(var_72_object, "money", var_74_int);
	if(var_74_int > 0) {
		@GetInvItemByName(var_71_int, "Money");
		int var_81_int; int var_82_int;
		var_71_int = var_81_int;
		var_69_int = var_82_int;
		func_845(var_81_int, var_82_int);
	}
}


// @pe
void func_1120(bool var_172_bool)
{
	int var_174_int;
	func_840(var_174_int, "d5q03");
	if(var_174_int == -1)
		var_172_bool = true;
	var_172_bool = false;
}


void func_1252(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x4f3";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


// @pe
void func_1132(bool var_139_bool)
{
	int var_141_int;
	func_840(var_141_int, "d5q03");
	if(var_141_int == 2)
		var_139_bool = true;
	var_139_bool = false;
}


// @pe
void func_876(bool var_124_bool, object var_125_object, float var_126_float)
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
		func_911(var_131_float);
		bool var_135_bool; object var_136_object; float var_138_float;
		var_125_object = var_136_object;
		var_126_float = var_138_float;
		func_659(var_135_bool, var_136_object, "reputation", var_138_float, (float)0, (float)1);
		var_124_bool = true;
		return 0;

	}
	
	var_124_bool = false;
}


void func_1269(int var_67_int)
{
	var_67_int = 515571;
}


void func_757(void)
{
	bool var_188_bool;
	@CameraSwitchToNormal(true);
	bool var_190_bool;
	func_1277(var_190_bool);
	if(var_190_bool != 0) {
	} else {
		@HasAnimationTrack(var_188_bool, "head");
		if(var_188_bool == 0) goto Label_774;
		@UnlookAsync("head");
	}
Label_774:
	
}


void func_1271(int var_66_int)
{
	var_66_int = 504029;
}


void func_1144(bool var_147_bool, object var_148_object)
{
	float var_150_float;
	var_148_object->GetProperty("money", var_150_float);
	if(var_150_float >= 60000)
		var_147_bool = true;
	var_147_bool = false;
}


void func_1273(string var_68_string)
{
	var_68_string = "ui/NPC_bmask.png";
}


void func_1275(string var_69_string)
{
	var_69_string = "ui/NPC_bmask_b.png";
}


void func_1277(bool var_61_bool)
{
	var_61_bool = false;
}



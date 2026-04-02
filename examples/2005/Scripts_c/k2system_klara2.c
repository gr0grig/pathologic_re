// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, bool var_16_bool)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, cvector var_17_cvector, bool var_18_bool)
	{
		if(1 != 0) {
			func_1537();
			if(var_17_cvector == 40394) {
				func_152(var_18_bool, "Neutral");
				var_0_object->SetMessage(538516); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538517, 40400, 40395); //@t
				var_0_object->AddReply(538518, 40397, 40396); //@t
				return 0;
			}
			if(var_17_cvector == 40397) {
				func_152(var_18_bool, "Neutral");
				var_0_object->SetMessage(538519); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538520, 40404, 40398); //@t
				var_0_object->AddReply(538521, 40404, 40399); //@t
				return 0;
			}
			if(var_17_cvector == 40400) {
				func_152(var_18_bool, "Neutral");
				var_0_object->SetMessage(538522); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538523, 40404, 40401); //@t
				var_0_object->AddReply(538524, 40397, 40402); //@t
				return 0;
			}
			if(var_17_cvector == 40404) {
				func_152(var_18_bool, "Neutral");
				var_0_object->SetMessage(538525); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538526, -1, 40407); //@t
				var_0_object->AddReply(538527, -1, 40408); //@t
				return 0;
			}
			var_3_string = true;
			bool var_72_bool;
			func_1613(var_72_bool);
			if(var_72_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaf";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, cvector var_17_cvector, bool var_18_bool)
	{
		if(1 != 0) {
			func_1537();
			if(var_18_bool == 40419) {
				object var_23_object; object var_24_object;
				var_23_object = var_1_object;
				var_24_object = var_0_object;
				func_1621();
			}
			if(var_18_bool == 40477) {
				object var_35_object; object var_36_object;
				var_35_object = var_1_object;
				var_36_object = var_0_object;
				func_1627();
				object var_43_object; object var_44_object;
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_1634();
			}
			if(var_18_bool == 40478) {
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_1627();
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_1634();
			}
			if(var_18_bool == 40479) {
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_1634();
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_1641();
			}
			if(var_18_bool == 40476) {
				object var_65_object; object var_66_object;
				var_65_object = var_1_object;
				var_66_object = var_0_object;
				func_1627();
				object var_67_object; object var_68_object;
				var_67_object = var_1_object;
				var_68_object = var_0_object;
				func_1634();
			}
			if(var_17_cvector == 40410) {
				func_427(var_18_bool, "Neutral");
				var_0_object->SetMessage(538529); //@t
				var_0_object->ClearReplies(); //@t
				bool var_84_bool;
				func_1658(var_84_bool, var_1_object);
				if(var_84_bool != 0)
					var_0_object->AddReply(538538, 40420, 40419); //@t
				var_0_object->AddReply(538535, -1, 40416); //@t
				var_0_object->AddReply(538536, -1, 40417); //@t
				return 0;
			}
			if(var_17_cvector == 40420) {
				func_427(var_18_bool, "Neutral");
				var_0_object->SetMessage(538539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538540, 40426, 40421); //@t
				var_0_object->AddReply(538541, 40424, 40422); //@t
				var_0_object->AddReply(538542, 40425, 40423); //@t
				return 0;
			}
			if(var_17_cvector == 40425) {
				func_427(var_18_bool, "Neutral");
				var_0_object->SetMessage(538544); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538587, 40474, 40473); //@t
				var_0_object->AddReply(538589, -1, 40476); //@t
				return 0;
			}
			if(var_17_cvector == 40424) {
				func_427(var_18_bool, "Neutral");
				var_0_object->SetMessage(538543); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538592, -1, 40479); //@t
				var_0_object->AddReply(538593, 40425, 40480); //@t
				return 0;
			}
			if(var_17_cvector == 40426) {
				func_427(var_18_bool, "Neutral");
				var_0_object->SetMessage(538545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538585, 40424, 40470); //@t
				var_0_object->AddReply(538586, 40474, 40471); //@t
				return 0;
			}
			if(var_17_cvector == 40474) {
				func_427(var_18_bool, "Neutral");
				var_0_object->SetMessage(538588); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538590, -1, 40477); //@t
				var_0_object->AddReply(538591, -1, 40478); //@t
				return 0;
			}
			var_3_string = true;
			bool var_161_bool;
			func_1613(var_161_bool);
			if(var_161_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1c2";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, cvector var_17_cvector, bool var_18_bool)
	{
		if(1 != 0) {
			func_1537();
			if(var_18_bool == 40461) {
				object var_23_object; object var_24_object;
				var_23_object = var_1_object;
				var_24_object = var_0_object;
				func_1615();
			}
			if(var_17_cvector == 40460) {
				func_823(var_18_bool, "Neutral");
				var_0_object->SetMessage(538575); //@t
				var_0_object->ClearReplies(); //@t
				bool var_48_bool;
				func_1648(var_48_bool, var_1_object);
				if(var_48_bool != 0)
					var_0_object->AddReply(538576, 40462, 40461); //@t
				var_0_object->AddReply(538581, -1, 40466); //@t
				var_0_object->AddReply(538582, -1, 40467); //@t
				return 0;
			}
			if(var_17_cvector == 40462) {
				func_823(var_18_bool, "Neutral");
				var_0_object->SetMessage(538577); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538578, 40464, 40463); //@t
				var_0_object->AddReply(538583, -1, 40468); //@t
				return 0;
			}
			if(var_17_cvector == 40464) {
				func_823(var_18_bool, "Neutral");
				var_0_object->SetMessage(538579); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538580, -1, 40465); //@t
				var_0_object->AddReply(538584, -1, 40469); //@t
				return 0;
			}
			var_3_string = true;
			bool var_92_bool;
			func_1613(var_92_bool);
			if(var_92_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x34e";
	
	}

}


maintask task_7
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, bool var_16_bool)
	{
		func_955();
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, bool var_16_bool, string var_17_string)
	{
		bool var_19_bool;
		if(var_17_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_19_bool);
			if(!var_19_bool) { //@nz
				object var_23_object;
				func_1544(var_23_object);
				@RemoveActor(var_23_object);
			}
		} else if(var_17_string == "restore") {
			var_1_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, bool var_16_bool)
	{
		if(var_1_object != 0) {
			object var_18_object;
			func_1544(var_18_object);
			@RemoveActor(var_18_object);
			@Hold();
		}
		func_1109();
	}

	// @pe
		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, bool var_16_bool)
		{
		func_1124();
		}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, bool var_16_bool, int var_17_int)
	{
		if(var_17_int == 10) {
			func_1067();
			bool var_21_bool = false;
			bool var_22_bool;
			func_1281(var_22_bool);
			if(var_22_bool != 0) {
				bool var_25_bool;
				func_1036(var_25_bool);
				if(var_25_bool != 0)
					var_21_bool = true;
			}
			if(var_21_bool != 0) {
				bool var_42_bool;
				func_1016(var_42_bool);
				if(var_42_bool != 0) {
					bool var_61_bool; object var_62_object;
					object var_63_object;
					func_1544(var_63_object);
					var_63_object = var_62_object;
					func_1429(var_61_bool, var_62_object);
				}
			} else {
				func_1031(var_17_int);
				func_1058();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, bool var_16_bool, bool var_17_bool)
	{
		if(var_17_bool != 0)
			func_1058();
		else
			func_1509("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, bool var_16_bool, object var_17_object)
	{
		bool var_19_bool;
		@IsOverrideActive(var_19_bool);
		if(!var_19_bool) { //@nz
			disable OnUse;
			func_1249();
			bool var_21_bool; object var_22_object;
			var_17_object = var_22_object;
			func_1272(var_21_bool, var_22_object);
			enable OnUse;
			object var_35_object;
			var_17_object = var_35_object;
			func_1722(var_35_object);
			func_1509("Neutral");
			func_1067();
			func_1058();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_21_bool;
	func_1281(var_21_bool);
	if(!var_21_bool) goto Label_0; //@nz
}


void func_1281(bool var_17_bool)
{
	bool var_19_bool;
	@IsLoaded(var_19_bool);
	var_19_bool = var_17_bool;
}


void func_1537(void)
{
	bool var_20_bool;
	func_1613(var_20_bool);
	if(var_20_bool != 0)
		@lshStopSpeech();
}


void func_1272(bool var_21_bool, object var_22_object)
{
	cvector var_24_cvector;
	var_22_object->GetPosition(var_24_cvector);
	bool var_25_bool; cvector var_26_cvector;
	var_24_cvector = var_26_cvector;
	func_1262(var_25_bool, var_26_cvector);
	var_25_bool = var_21_bool;
}


// @pe
void func_1668(bool var_370_bool)
{
	bool var_372_bool;
	func_1710(var_372_bool, "Late1");
	var_372_bool = var_370_bool;
}


void func_1286(bool var_148_bool, object var_149_object, float var_150_float)
{
	cvector var_161_cvector; bool var_168_bool;
	var_149_object->GetPosition(var_161_cvector);
	float var_160_float;
	var_149_object->GetEyesHeight(var_160_float);
	var_169_float = GetByIndex(var_161_cvector, 1);
	SetByIndex(var_161_cvector, 1) = (var_169_float + var_160_float);
	cvector var_162_cvector;
	@GetPosition(var_162_cvector);
	@GetEyesHeight(var_160_float);
	var_170_float = GetByIndex(var_162_cvector, 1);
	SetByIndex(var_162_cvector, 1) = (var_170_float + var_160_float);
	cvector var_163_cvector = var_161_cvector - var_162_cvector;
	var_171_float = GetByIndex(var_163_cvector, 1);
	SetByIndex(var_163_cvector, 1) = (float)0;
	var_173_float = sqrt(var_163_cvector | var_163_cvector);
	var_163_cvector /= var_173_float;
	cvector var_164_cvector = -var_163_cvector;
	cvector var_175_cvector;
	func_1550(var_175_cvector, (var_164_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_165_cvector = ((var_163_cvector * var_150_float) + (var_175_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_167_bool;
	@IsOverrideActive(var_167_bool);
	if(var_167_bool != 0)
		var_148_bool = false;
	@StopWorld();
	@CameraTransit((var_162_cvector + var_165_cvector), var_164_cvector);
	var_188_float = GetByIndex(var_165_cvector, 0);
	var_189_float = GetByIndex(var_165_cvector, 2);
	@Rotate(var_188_float, var_189_float);
	bool var_190_bool;
	func_1613(var_190_bool);
	if(var_190_bool != 0) {
	} else {
		@HasAnimationTrack(var_168_bool, "head");
		if(var_168_bool == 0) goto Label_1348;
		@LookAsyncCamera("head");
	}
Label_1348:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_148_bool = true;
	
}


void func_1031(object var_0_object)
{
	var_94_float = GetByIndex(var_0_object, 0);
	var_95_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_94_float, var_95_float);
}


void func_1544(object var_55_object)
{
	object var_57_object;
	@self(var_57_object);
	var_57_object = var_55_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1675(bool var_299_bool)
{
	bool var_301_bool;
	func_1710(var_301_bool, "1");
	var_301_bool = var_299_bool;
}


void func_1036(bool var_25_bool)
{
	object var_28_object;
	@FindActor(var_28_object, "player");
	if(!var_28_object) { //@nz
		var_25_bool = false;
		return 4;
	}
	float var_32_float; object var_33_object;
	func_1254(var_32_float, var_33_object);
	if(var_32_float > 90000.0) {
		var_25_bool = false;
		return 4;
	}
	bool var_29_bool;
	@CanSee(var_29_bool, var_33_object);
	var_29_bool = var_25_bool;
}
EMIT "Stack[-2] = 0";


void func_13(object var_0_object, int var_42_int, object var_43_object)
{
	var_0_object = var_43_object;
	bool var_53_bool; object var_54_object;
	object var_55_object;
	func_1544(var_55_object);
	var_55_object = var_54_object;
	func_1371(var_53_bool, var_54_object);
	bool var_148_bool; object var_149_object;
	var_43_object = var_149_object;
	func_1286(var_148_bool, var_149_object, 70.0);
	if(!var_148_bool) { //@nz
		var_42_int = -2;
		return 8;
	}
	object var_49_object;
	@CreateDialog(var_49_object);
	int var_195_int;
	func_1607(var_195_int);
	var_49_object->SetNPCName(var_195_int);
	int var_196_int;
	func_1605(var_196_int);
	var_49_object->SetNPCDescription(var_196_int);
	string var_197_string;
	func_1609(var_197_string);
	var_49_object->SetPhoto(var_197_string);
	string var_198_string;
	func_1611(var_198_string);
	var_49_object->SetPhoto2(var_198_string);
	int var_199_int;
	func_1682(var_199_int);
	var_49_object->SetPlayerName(var_199_int);
	bool var_50_bool;
	@IsOverrideActive(var_50_bool);
	if(var_50_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	@DoDialog(var_49_object);
	object var_208_object; object var_209_object;
	var_43_object = var_208_object;
	var_49_object = var_209_object;
	TaskCall(2);
	func_94(var_210_object, var_211_object, var_212_string, var_213_bool, var_208_object, var_209_object);
	TaskReturn();
	bool var_52_bool;
	var_49_object->IsDialogEnd(var_52_bool);
	
	for(;;) {
		var_247_bool = !var_52_bool; //@nz
		if(var_247_bool == 0) goto Label_83;
		@sync();
		var_49_object->IsDialogEnd(var_52_bool);
	}
	
Label_83:
	object var_248_object;
	var_43_object = var_248_object;
	func_1354();
	@StopDialog(var_49_object);
	var_49_object->GetReturnValue(-1);
	int var_51_int = var_42_int;
}
EMIT "Stack[-4] = 0";


void func_1550(cvector var_175_cvector, cvector var_176_cvector)
{
	float var_179_float = sqrt(var_176_cvector | var_176_cvector);
	if(var_179_float < 0.000001)
		var_175_cvector = [0.0, 0.0, 0.0];
	var_175_cvector = var_176_cvector / var_179_float;
}


void func_1682(int var_199_int)
{
	int var_201_int;
	@GetVariable("branch", var_201_int);
	if(var_201_int == 0) {
		var_199_int = 1;
		return 2;
	EMIT "GOTO 0x6a1";
	}
	if(var_201_int == 1) {
		var_199_int = 2;
		return 2;
	}
	var_199_int = 3;
}


void func_1429(bool var_64_bool, object var_65_object)
{
	string var_71_string; bool var_73_bool; int var_74_int; string var_75_string;
	var_71_string = "c";
	int var_72_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_65_object->HasProperty((var_71_string + (var_72_int + 1)), var_73_bool);
			if(!var_73_bool) { //@nz
			} else {
				var_72_int += 1;
			}
		}
		if(!var_72_int) { //@nz
			var_64_bool = false;
			return 10;
		}
		var_74_int = 0;
		if(var_72_int > 1)
			@irand(var_74_int, var_72_int);
		var_65_object->GetProperty((var_71_string + (var_74_int + 1)), var_75_string);
		bool var_87_bool; string var_88_string;
		var_75_string = var_88_string;
		func_1522(var_87_bool, var_88_string);
		var_87_bool = var_64_bool;
		return 10;

	}
}


void func_1560(bool var_37_bool, string var_38_string, string var_39_string)
{
	object var_41_object;
	@FindActor(var_41_object, var_38_string);
	if(var_41_object == null)
		var_37_bool = false;
	@Trigger(var_41_object, var_39_string);
	var_37_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_152(object var_2_object, string var_215_string)
{
	bool var_216_bool;
	func_1613(var_216_bool);
	if(!var_216_bool) //@nz
		return 0;
	if(var_215_string == var_2_object)
		return 0;
	string var_219_string; bool var_220_bool;
	var_215_string = var_219_string;
	if(var_215_string == "")
		var_220_bool = false;
	else
		var_220_bool = true;
	func_1516(var_219_string, var_220_bool);
	var_2_object = var_215_string;
	
}


void func_1178(void)
{
	bool var_43_bool; int var_44_int; int var_45_int; bool var_46_bool;
	@WaitForAnimEnd();
	bool var_47_bool;
	func_1281(var_47_bool);
	if(!var_47_bool) //@nz
		return 12;
	int var_49_int;
	func_1588(var_49_int);
	int var_41_int;
	var_49_int = var_41_int;
	int var_42_int = 0;
	
	for(;;) {
		bool var_62_bool = false;
		if(var_42_int < 5) {
			bool var_65_bool;
			func_1281(var_65_bool);
			if(var_65_bool != 0)
				var_62_bool = true;
		}
		if(var_62_bool != 0) {
			if(!var_41_int) { //@nz
				@Sleep(3, var_43_bool);
				if(!var_43_bool) { //@nz
				} else {
			} else {
			@irand(var_44_int, var_41_int);
			@irand(var_45_int, 5);
			if(var_45_int != 0)
				var_44_int = 0;
			string var_76_string; int var_77_int;
			var_44_int = var_77_int;
			func_1581(var_76_string, var_77_int);
			@PlayAnimation("all", var_76_string);
			@WaitForAnimEnd(var_46_bool);
			var_78_bool = !var_46_bool; //@nz
			if(var_78_bool == 0) goto Label_1233;
			goto Label_1244;
			}
				Label_1233:
					bool var_69_bool;
					func_1247(var_69_bool);
					var_70_bool = !var_69_bool; //@nz
					if(var_70_bool == 0) goto Label_1239;
			}
		}
	Label_1244:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1239:
		@ResetAAS();
		var_42_int += 1;
	}
	
}


void func_285(object var_0_object, int var_260_int, object var_261_object)
{
	var_0_object = var_261_object;
	bool var_271_bool; object var_272_object;
	var_261_object = var_272_object;
	func_1286(var_271_bool, var_272_object, 70.0);
	if(!var_271_bool) { //@nz
		var_260_int = -2;
		return 8;
	}
	object var_267_object;
	@CreateDialog(var_267_object);
	int var_275_int;
	func_1607(var_275_int);
	var_267_object->SetNPCName(var_275_int);
	int var_276_int;
	func_1605(var_276_int);
	var_267_object->SetNPCDescription(var_276_int);
	string var_277_string;
	func_1609(var_277_string);
	var_267_object->SetPhoto(var_277_string);
	string var_278_string;
	func_1611(var_278_string);
	var_267_object->SetPhoto2(var_278_string);
	int var_279_int;
	func_1682(var_279_int);
	var_267_object->SetPlayerName(var_279_int);
	bool var_268_bool;
	@IsOverrideActive(var_268_bool);
	if(var_268_bool != 0) {
		var_260_int = -2;
		return 8;
	}
	@DoDialog(var_267_object);
	object var_281_object; object var_282_object;
	var_261_object = var_281_object;
	var_267_object = var_282_object;
	TaskCall(4);
	func_359(var_283_object, var_284_object, var_285_string, var_286_bool, var_281_object, var_282_object);
	TaskReturn();
	bool var_270_bool;
	var_267_object->IsDialogEnd(var_270_bool);
	
	for(;;) {
		var_329_bool = !var_270_bool; //@nz
		if(var_329_bool == 0) goto Label_348;
		@sync();
		var_267_object->IsDialogEnd(var_270_bool);
	}
	
Label_348:
	object var_330_object;
	var_261_object = var_330_object;
	func_1354();
	@StopDialog(var_267_object);
	var_267_object->GetReturnValue(-1);
	int var_269_int = var_260_int;
}
EMIT "Stack[-4] = 0";


void func_1058(void)
{
	float var_31_float;
	@rand(var_31_float, 8, 16);
	@SetTimer(10, var_31_float);
}


void func_1699(string var_25_string)
{
	int var_27_int;
	@GetProperty("day", var_27_int);
	@SetVariable((("K2S_Klara2" + var_25_string) + var_27_int), 1);
}


void func_1572(int var_108_int)
{
	float var_110_float;
	@GetGameTime(var_110_float);
	var_108_int = 1 + (var_110_float / 24);
}


void func_681(object var_0_object, int var_331_int, object var_332_object)
{
	var_0_object = var_332_object;
	bool var_342_bool; object var_343_object;
	var_332_object = var_343_object;
	func_1286(var_342_bool, var_343_object, 70.0);
	if(!var_342_bool) { //@nz
		var_331_int = -2;
		return 8;
	}
	object var_338_object;
	@CreateDialog(var_338_object);
	int var_346_int;
	func_1607(var_346_int);
	var_338_object->SetNPCName(var_346_int);
	int var_347_int;
	func_1605(var_347_int);
	var_338_object->SetNPCDescription(var_347_int);
	string var_348_string;
	func_1609(var_348_string);
	var_338_object->SetPhoto(var_348_string);
	string var_349_string;
	func_1611(var_349_string);
	var_338_object->SetPhoto2(var_349_string);
	int var_350_int;
	func_1682(var_350_int);
	var_338_object->SetPlayerName(var_350_int);
	bool var_339_bool;
	@IsOverrideActive(var_339_bool);
	if(var_339_bool != 0) {
		var_331_int = -2;
		return 8;
	}
	@DoDialog(var_338_object);
	object var_352_object; object var_353_object;
	var_332_object = var_352_object;
	var_338_object = var_353_object;
	TaskCall(6);
	func_755(var_354_object, var_355_object, var_356_string, var_357_bool, var_352_object, var_353_object);
	TaskReturn();
	bool var_341_bool;
	var_338_object->IsDialogEnd(var_341_bool);
	
	for(;;) {
		var_391_bool = !var_341_bool; //@nz
		if(var_391_bool == 0) goto Label_744;
		@sync();
		var_338_object->IsDialogEnd(var_341_bool);
	}
	
Label_744:
	object var_392_object;
	var_332_object = var_392_object;
	func_1354();
	@StopDialog(var_338_object);
	var_338_object->GetReturnValue(-1);
	int var_340_int = var_331_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_427(object var_2_object, string var_288_string)
{
	bool var_289_bool;
	func_1613(var_289_bool);
	if(!var_289_bool) //@nz
		return 0;
	if(var_288_string == var_2_object)
		return 0;
	string var_292_string; bool var_293_bool;
	var_288_string = var_292_string;
	if(var_288_string == "")
		var_293_bool = false;
	else
		var_293_bool = true;
	func_1516(var_292_string, var_293_bool);
	var_2_object = var_288_string;
	
}


void func_1067(void)
{
	@KillTimer(10);
}


void func_1581(string var_55_string, int var_56_int)
{
	string var_58_string = "idle";
	if(var_56_int != 0)
		var_58_string += var_56_int;
	var_58_string = var_55_string;
}


void func_1710(bool var_301_bool, string var_302_string)
{
	int var_305_int;
	@GetProperty("day", var_305_int);
	int var_306_int;
	@GetVariable((("K2S_Klara2" + var_302_string) + var_305_int), var_306_int);
	var_301_bool = var_306_int == 0;
}


void func_1588(int var_49_int)
{
	int var_52_int; bool var_53_bool;
	var_52_int = 0;
	
	for(;;) {
		string var_55_string; int var_56_int;
		var_52_int = var_56_int;
		func_1581(var_55_string, var_56_int);
		@HasAnimation(var_53_bool, "all", var_55_string);
		if(!var_53_bool) //@nz
			break;
		var_52_int += 1;
	}
	var_52_int = var_49_int;
}


// @pe
void func_823(object var_2_object, string var_359_string)
{
	bool var_360_bool;
	func_1613(var_360_bool);
	if(!var_360_bool) //@nz
		return 0;
	if(var_359_string == var_2_object)
		return 0;
	string var_363_string; bool var_364_bool;
	var_359_string = var_363_string;
	if(var_359_string == "")
		var_364_bool = false;
	else
		var_364_bool = true;
	func_1516(var_363_string, var_364_bool);
	var_2_object = var_359_string;
	
}


void func_1722(object var_35_object)
{
	int var_38_int;
	@GetVariable("mt_klara2", var_38_int);
	if(!var_38_int) { //@nz
		int var_42_int; object var_43_object;
		var_35_object = var_43_object;
		TaskCall(1);
		func_13(var_44_object, var_42_int, var_43_object);
		TaskReturn();
		@SetVariable("mt_klara2", 1);
	}
	int var_39_int;
	@GetProperty("day", var_39_int);
	int var_258_int;
	func_1572(var_258_int);
	if(var_39_int == var_258_int) {
		int var_260_int; object var_261_object;
		var_35_object = var_261_object;
		TaskCall(3);
		func_285(var_262_object, var_260_int, var_261_object);
		TaskReturn();
	} else {
		int var_331_int; object var_332_object;
		var_35_object = var_332_object;
		TaskCall(5);
		func_681(var_333_object, var_331_int, var_332_object);
		TaskReturn();
	}
	
}


// @pe
void func_955(void)
{
	func_996(var_16_bool);
}


void func_1466(bool var_95_bool, object var_96_object)
{
	bool var_104_bool; int var_105_int; string var_106_string;
	int var_108_int;
	func_1572(var_108_int);
	string var_102_string = ("d" + var_108_int) + "m";
	int var_103_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_96_object->HasProperty((var_102_string + (var_103_int + 1)), var_104_bool);
			if(!var_104_bool) { //@nz
			} else {
				var_103_int += 1;
			}
		}
		if(!var_103_int) { //@nz
			var_95_bool = false;
			return 10;
		}
		var_105_int = 0;
		if(var_103_int > 1)
			@irand(var_105_int, var_103_int);
		var_96_object->GetProperty((var_102_string + (var_105_int + 1)), var_106_string);
		bool var_127_bool; string var_128_string;
		var_106_string = var_128_string;
		func_1522(var_127_bool, var_128_string);
		var_127_bool = var_95_bool;
		return 10;

	}
}


void func_1605(int var_196_int)
{
	var_196_int = 515540;
}


void func_1607(int var_195_int)
{
	var_195_int = 502865;
}


void func_1609(string var_197_string)
{
	var_197_string = "ui/NPC_Klara.png";
}


void func_1354(void)
{
	bool var_250_bool;
	@CameraSwitchToNormal();
	bool var_251_bool;
	func_1613(var_251_bool);
	if(var_251_bool != 0) {
	} else {
		@HasAnimationTrack(var_250_bool, "head");
		if(var_250_bool == 0) goto Label_1370;
		@UnlookAsync("head");
	}
Label_1370:
	
}


void func_1611(string var_198_string)
{
	var_198_string = "ui/NPC_Klara_b.png";
}


void func_1613(bool var_91_bool)
{
	var_91_bool = true;
}


// @pe
void func_1615(void)
{
	func_1699("Late1");
}


// @pe
void func_1621(void)
{
	func_1699("1");
}


// @pe
void func_1109(void)
{
	func_1249();
	func_1067();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_1371(bool var_53_bool, object var_54_object)
{
	int var_60_int; int var_61_int;
	@GetVariable("voice_common", var_60_int);
	if(var_60_int != 0) {
		bool var_64_bool; object var_65_object;
		var_54_object = var_65_object;
		func_1429(var_64_bool, var_65_object);
		if(!var_64_bool) { //@nz
			bool var_95_bool; object var_96_object;
			var_54_object = var_96_object;
			func_1466(var_95_bool, var_96_object);
			if(!var_95_bool) { //@nz
				var_53_bool = false;
				return 4;
			}
		}
		@irand(var_61_int, 2);
		if(var_61_int != 0)
			@SetVariable("voice_common", ((var_60_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_140_bool; object var_141_object;
		var_54_object = var_141_object;
		func_1466(var_140_bool, var_141_object);
		if(!var_140_bool) { //@nz
			bool var_143_bool; object var_144_object;
			var_54_object = var_144_object;
			func_1429(var_143_bool, var_144_object);
			if(!var_143_bool) { //@nz
				var_53_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1427;
	
Label_1427:
	var_53_bool = true;
	
}


// @pe
void func_1627(void)
{
	bool var_37_bool;
	func_1560(var_37_bool, "klara2_positioner", "remove_klara");
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_208_object, object var_209_object)
{
	var_0_object = var_209_object;
	var_1_object = var_208_object;
	var_3_string = false;
	if(1 != 0) {
		func_152(var_209_object, "Neutral");
		var_0_object->SetMessage(538516); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(538517, 40400, 40395); //@t
		var_0_object->AddReply(538518, 40397, 40396); //@t
		goto Label_122;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_122:
	bool var_234_bool;
	func_1613(var_234_bool);
	if(var_234_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1509(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_151;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_151:
		return 0;

	}
	
}


void func_1247(bool var_69_bool)
{
	var_69_bool = true;
}


void func_1249(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1634(void)
{
	bool var_45_bool;
	func_1560(var_45_bool, "klara2_svita_positioner", "place_svita");
}


void func_996(object var_0_object)
{
	bool var_17_bool;
	func_1281(var_17_bool);
	if(!var_17_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_992();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1178();
	}
}
EMIT "Return(); Pop(0)";


void func_1509(string var_24_string)
{
	float var_27_float; float var_28_float;
	@lshGetAnimTimes(var_24_string, var_27_float, var_28_float);
	@lshPlayAnimation(var_27_float, var_28_float, false);
}


void func_1124(void)
{
	@StopGroup0();
	func_1067();
	func_1509("Neutral");
	func_1058();
}


// @pe
void func_359(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_281_object, object var_282_object)
{
	var_0_object = var_282_object;
	var_3_string = false;
	if(1 != 0) {
		func_427(var_282_object, "Neutral");
		var_0_object->SetMessage(538529); //@t
		var_0_object->ClearReplies(); //@t
		bool var_297_bool;
		func_1658(var_297_bool, var_281_object);
		if(var_297_bool != 0)
			var_0_object->AddReply(538538, 40420, 40419); //@t
		var_0_object->AddReply(538535, -1, 40416); //@t
		var_0_object->AddReply(538536, -1, 40417); //@t
		goto Label_397;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x16b";
	}
Label_397:
	bool var_321_bool;
	func_1613(var_321_bool);
	if(var_321_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1509(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_426;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_426:
		return 0;

	}
	
}


void func_1254(float var_32_float, object var_33_object)
{
	cvector var_37_cvector;
	@GetPosition(var_37_cvector);
	cvector var_38_cvector;
	var_33_object->GetPosition(var_38_cvector);
	var_32_float = (var_38_cvector - var_37_cvector) | (var_38_cvector - var_37_cvector);
}


// @pe
void func_1641(void)
{
	bool var_60_bool;
	func_1560(var_60_bool, "klara2_positioner", "klara_stay");
}


void func_1516(string var_219_string, bool var_220_bool)
{
	float var_225_float; float var_226_float;
	@lshGetAnimTimes(var_219_string, var_225_float, var_226_float);
	@lshPlayAnimation(var_225_float, var_226_float, var_220_bool);
}


void func_1262(bool var_25_bool, cvector var_26_cvector)
{
	cvector var_30_cvector;
	@GetPosition(var_30_cvector);
	cvector var_31_cvector = var_26_cvector - var_30_cvector;
	var_33_float = GetByIndex(var_31_cvector, 0);
	var_34_float = GetByIndex(var_31_cvector, 2);
	bool var_32_bool;
	@Rotate(var_33_float, var_34_float, var_32_bool);
	var_32_bool = var_25_bool;
}


// @pe
void func_1648(bool var_368_bool, object var_369_object)
{
	object var_371_object;
	var_369_object = var_371_object;
	func_1668(var_371_object);
	bool var_370_bool;
	if(var_370_bool != 0) {
		var_368_bool = true;
		return 0;
	}
	var_368_bool = false;
}


void func_1522(bool var_87_bool, string var_88_string)
{
	bool var_90_bool;
	bool var_91_bool;
	func_1613(var_91_bool);
	if(var_91_bool != 0) {
		@lshHasSpeech(var_90_bool, var_88_string);
		if(var_90_bool != 0) {
			@lshPlaySpeech(var_88_string);
			var_87_bool = true;
		}
	}
	var_87_bool = false;
}


// @pe
void func_755(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_352_object, object var_353_object)
{
	var_0_object = var_353_object;
	var_3_string = false;
	if(1 != 0) {
		func_823(var_353_object, "Neutral");
		var_0_object->SetMessage(538575); //@t
		var_0_object->ClearReplies(); //@t
		bool var_368_bool;
		func_1648(var_368_bool, var_352_object);
		if(var_368_bool != 0)
			var_0_object->AddReply(538576, 40462, 40461); //@t
		var_0_object->AddReply(538581, -1, 40466); //@t
		var_0_object->AddReply(538582, -1, 40467); //@t
		goto Label_793;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2f7";
	}
Label_793:
	bool var_383_bool;
	func_1613(var_383_bool);
	if(var_383_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1509(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_822;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_822:
		return 0;

	}
	
}


void func_1016(bool var_42_bool)
{
	object var_44_object;
	@FindActor(var_44_object, "player");
	if(!var_44_object) //@nz
		var_42_bool = false;
	bool var_47_bool; object var_48_object;
	var_44_object = var_48_object;
	func_1272(var_47_bool, var_48_object);
	var_47_bool = var_42_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1658(bool var_297_bool, object var_298_object)
{
	object var_300_object;
	var_298_object = var_300_object;
	func_1675(var_300_object);
	bool var_299_bool;
	if(var_299_bool != 0) {
		var_297_bool = true;
		return 0;
	}
	var_297_bool = false;
}



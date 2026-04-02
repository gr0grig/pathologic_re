// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1791();
			if(var_22_cvector == 32444) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_1880();
			}
			if(var_22_cvector == 32756) {
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_1880();
			}
			if(var_22_cvector == 32750) {
				object var_60_object; object var_61_object;
				var_60_object = var_1_object;
				var_61_object = var_0_object;
				func_1889();
			}
			if(var_21_bool == 32441) {
				bool var_78_bool;
				func_1905(var_1_object);
				if(var_78_bool != 0) {
					func_170(var_22_cvector, "Neutral");
					var_0_object->SetMessage(531123); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531124, 32443, 32442); //@t
					var_0_object->AddReply(531403, 32745, 32744); //@t
					return 0;
				}
				func_170(var_22_cvector, "Neutral");
				var_0_object->SetMessage(531127); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531128, -1, 32446); //@t
				var_0_object->AddReply(531398, -1, 32739); //@t
				return 0;
			}
			if(var_21_bool == 32745) {
				func_170(var_22_cvector, "Neutral");
				var_0_object->SetMessage(531404); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531405, 32749, 32746); //@t
				var_0_object->AddReply(531406, 32443, 32747); //@t
				return 0;
			}
			if(var_21_bool == 32443) {
				func_170(var_22_cvector, "Neutral");
				var_0_object->SetMessage(531125); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531399, 32741, 32740); //@t
				return 0;
			}
			if(var_21_bool == 32741) {
				func_170(var_22_cvector, "Neutral");
				var_0_object->SetMessage(531400); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531401, 32757, 32742); //@t
				var_0_object->AddReply(531407, 32749, 32748); //@t
				return 0;
			}
			if(var_21_bool == 32749) {
				func_170(var_22_cvector, "Neutral");
				var_0_object->SetMessage(531408); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531409, -1, 32750); //@t
				return 0;
			}
			if(var_21_bool == 32757) {
				func_170(var_22_cvector, "Neutral");
				var_0_object->SetMessage(531415); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531417, 32760, 32759); //@t
				var_0_object->AddReply(531416, 32743, 32758); //@t
				return 0;
			}
			if(var_21_bool == 32743) {
				func_170(var_22_cvector, "Neutral");
				var_0_object->SetMessage(531402); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531126, -1, 32444); //@t
				var_0_object->AddReply(531410, 32753, 32752); //@t
				return 0;
			}
			if(var_21_bool == 32753) {
				func_170(var_22_cvector, "Neutral");
				var_0_object->SetMessage(531411); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531412, 32755, 32754); //@t
				return 0;
			}
			if(var_21_bool == 32755) {
				func_170(var_22_cvector, "Neutral");
				var_0_object->SetMessage(531413); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531414, -1, 32756); //@t
				return 0;
			}
			if(var_21_bool == 32760) {
				func_170(var_22_cvector, "Neutral");
				var_0_object->SetMessage(531418); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531419, 32743, 32761); //@t
				return 0;
			}
			var_3_string = true;
			bool var_188_bool;
			func_1878(var_188_bool);
			if(var_188_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc1";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1791();
			if(var_22_cvector == 36944) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_1899();
			}
			if(var_21_bool == 36943) {
				func_609(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535268); //@t
				var_0_object->ClearReplies(); //@t
				bool var_46_bool;
				func_1917(var_1_object);
				if(var_46_bool != 0)
					var_0_object->AddReply(535269, 37004, 36944); //@t
				var_0_object->AddReply(535322, -1, 37003); //@t
				return 0;
			}
			if(var_21_bool == 37004) {
				func_609(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535323); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535325, 37007, 37006); //@t
				var_0_object->AddReply(535324, 37008, 37005); //@t
				return 0;
			}
			if(var_21_bool == 37008) {
				func_609(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535327); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535328, 37015, 37009); //@t
				var_0_object->AddReply(535329, 37011, 37010); //@t
				return 0;
			}
			if(var_21_bool == 37011) {
				func_609(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535330); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535331, 37007, 37012); //@t
				return 0;
			}
			if(var_21_bool == 37015) {
				func_609(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535334); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535336, -1, 37017); //@t
				var_0_object->AddReply(535335, -1, 37016); //@t
				return 0;
			}
			if(var_21_bool == 37007) {
				func_609(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535326); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535332, 37014, 37013); //@t
				return 0;
			}
			if(var_21_bool == 37014) {
				func_609(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535333); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535337, -1, 37019); //@t
				var_0_object->AddReply(535338, -1, 37020); //@t
				return 0;
			}
			var_3_string = true;
			bool var_114_bool;
			func_1878(var_114_bool);
			if(var_114_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x278";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1791();
			if(var_21_bool == 19142) {
				func_953(var_22_cvector, "Neutral");
				var_0_object->SetMessage(518009); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518010, 32920, 19143); //@t
				var_0_object->AddReply(531560, -1, 32919); //@t
				return 0;
			}
			if(var_21_bool == 32920) {
				func_953(var_22_cvector, "Neutral");
				var_0_object->SetMessage(531561); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531562, -1, 32921); //@t
				var_0_object->AddReply(531563, -1, 32922); //@t
				return 0;
			}
			var_3_string = true;
			bool var_56_bool;
			func_1878(var_56_bool);
			if(var_56_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3d0";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1791();
			if(var_21_int == 42563) {
				func_1179(var_22_cvector, "Neutral");
				var_0_object->SetMessage(540554); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540555, -1, 42564); //@t
				var_0_object->AddReply(540794, -1, 42843); //@t
				return 0;
			}
			var_3_string = true;
			bool var_46_bool;
			func_1878(var_46_bool);
			if(var_46_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4b2";
	
	}

}


maintask task_9
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		var_21_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1250(var_20_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, int var_21_int)
	{
		if(var_21_int == 10) {
			func_1321();
			bool var_25_bool = false;
			bool var_26_bool;
			func_1535(var_26_bool);
			if(var_26_bool != 0) {
				bool var_29_bool;
				func_1290(var_29_bool);
				if(var_29_bool != 0)
					var_25_bool = true;
			}
			if(var_25_bool != 0) {
				bool var_46_bool;
				func_1270(var_46_bool);
				if(var_46_bool != 0) {
					bool var_65_bool; object var_66_object;
					object var_67_object;
					func_1798(var_67_object);
					var_67_object = var_66_object;
					func_1683(var_65_bool, var_66_object);
				}
			} else {
				func_1285(var_21_int);
				func_1312();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		func_1503();
		func_1321();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
		{
		@StopGroup0();
		func_1321();
		func_1763("Neutral");
		func_1312();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, bool var_21_bool)
	{
		if(var_21_bool != 0)
			func_1312();
		else
			func_1763("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, object var_21_object)
	{
		bool var_23_bool;
		@IsOverrideActive(var_23_bool);
		if(!var_23_bool) { //@nz
			disable OnUse;
			func_1503();
			bool var_25_bool; object var_26_object;
			var_21_object = var_26_object;
			func_1526(var_25_bool, var_26_object);
			enable OnUse;
			object var_39_object;
			var_21_object = var_39_object;
			func_2013(var_39_object);
			func_1763("Neutral");
			func_1321();
			func_1312();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_26_bool;
	func_1535(var_26_bool);
	if(!var_26_bool) goto Label_0; //@nz
}


void func_1540(bool var_148_bool, object var_149_object, float var_150_float)
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
	func_1804(var_175_cvector, (var_164_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1878(var_190_bool);
	if(var_190_bool != 0) {
	} else {
		@HasAnimationTrack(var_168_bool, "head");
		if(var_168_bool == 0) goto Label_1602;
		@LookAsyncCamera("head");
	}
Label_1602:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_148_bool = true;
	
}


void func_1285(object var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_98_float, var_99_float);
}


void func_1798(object var_55_object)
{
	object var_57_object;
	@self(var_57_object);
	var_57_object = var_55_object;
}
EMIT "Stack[-1] = 0";


void func_1929(void)
{
	object var_63_object;
	@CreateDiaryEntry(var_63_object, 611, 2, 531506);
	bool var_67_bool; object var_68_object;
	var_63_object = var_68_object;
	func_1968(var_67_bool, var_68_object, 598);
}
EMIT "Stack[-1] = 0";


void func_1290(bool var_29_bool)
{
	object var_32_object;
	@FindActor(var_32_object, "player");
	if(!var_32_object) { //@nz
		var_29_bool = false;
		return 4;
	}
	float var_36_float; object var_37_object;
	func_1508(var_36_float, var_37_object);
	if(var_36_float > 90000.0) {
		var_29_bool = false;
		return 4;
	}
	bool var_33_bool;
	@CanSee(var_33_bool, var_37_object);
	var_33_bool = var_29_bool;
}
EMIT "Stack[-2] = 0";


void func_1804(cvector var_175_cvector, cvector var_176_cvector)
{
	float var_179_float = sqrt(var_176_cvector | var_176_cvector);
	if(var_179_float < 0.000001)
		var_175_cvector = [0.0, 0.0, 0.0];
	var_175_cvector = var_176_cvector / var_179_float;
}


void func_13(object var_0_object, int var_259_int, object var_260_object)
{
	var_0_object = var_260_object;
	bool var_270_bool; object var_271_object;
	var_260_object = var_271_object;
	func_1540(var_270_bool, var_271_object, 70.0);
	if(!var_270_bool) { //@nz
		var_259_int = -2;
		return 8;
	}
	object var_266_object;
	@CreateDialog(var_266_object);
	int var_274_int;
	func_1872(var_274_int);
	var_266_object->SetNPCName(var_274_int);
	int var_275_int;
	func_1870(var_275_int);
	var_266_object->SetNPCDescription(var_275_int);
	string var_276_string;
	func_1874(var_276_string);
	var_266_object->SetPhoto(var_276_string);
	string var_277_string;
	func_1876(var_277_string);
	var_266_object->SetPhoto2(var_277_string);
	int var_278_int;
	func_1996(var_278_int);
	var_266_object->SetPlayerName(var_278_int);
	bool var_267_bool;
	@IsOverrideActive(var_267_bool);
	if(var_267_bool != 0) {
		var_259_int = -2;
		return 8;
	}
	@DoDialog(var_266_object);
	object var_280_object; object var_281_object;
	var_260_object = var_280_object;
	var_266_object = var_281_object;
	TaskCall(2);
	func_87(var_282_object, var_283_object, var_284_string, var_285_bool, var_280_object, var_281_object);
	TaskReturn();
	bool var_269_bool;
	var_266_object->IsDialogEnd(var_269_bool);
	
	for(;;) {
		var_326_bool = !var_269_bool; //@nz
		if(var_326_bool == 0) goto Label_76;
		@sync();
		var_266_object->IsDialogEnd(var_269_bool);
	}
	
Label_76:
	object var_327_object;
	var_260_object = var_327_object;
	func_1608();
	@StopDialog(var_266_object);
	var_266_object->GetReturnValue(-1);
	int var_268_int = var_259_int;
}
EMIT "Stack[-4] = 0";


void func_1040(object var_0_object, int var_392_int, object var_393_object)
{
	var_0_object = var_393_object;
	bool var_403_bool; object var_404_object;
	object var_405_object;
	func_1798(var_405_object);
	var_405_object = var_404_object;
	func_1625(var_403_bool, var_404_object);
	bool var_406_bool; object var_407_object;
	var_393_object = var_407_object;
	func_1540(var_406_bool, var_407_object, 70.0);
	if(!var_406_bool) { //@nz
		var_392_int = -2;
		return 8;
	}
	object var_399_object;
	@CreateDialog(var_399_object);
	int var_410_int;
	func_1872(var_410_int);
	var_399_object->SetNPCName(var_410_int);
	int var_411_int;
	func_1870(var_411_int);
	var_399_object->SetNPCDescription(var_411_int);
	string var_412_string;
	func_1874(var_412_string);
	var_399_object->SetPhoto(var_412_string);
	string var_413_string;
	func_1876(var_413_string);
	var_399_object->SetPhoto2(var_413_string);
	int var_414_int;
	func_1996(var_414_int);
	var_399_object->SetPlayerName(var_414_int);
	bool var_400_bool;
	@IsOverrideActive(var_400_bool);
	if(var_400_bool != 0) {
		var_392_int = -2;
		return 8;
	}
	@DoDialog(var_399_object);
	object var_416_object; object var_417_object;
	var_393_object = var_416_object;
	var_399_object = var_417_object;
	TaskCall(8);
	func_1121(var_418_object, var_419_object, var_420_string, var_421_bool, var_416_object, var_417_object);
	TaskReturn();
	bool var_402_bool;
	var_399_object->IsDialogEnd(var_402_bool);
	
	for(;;) {
		var_446_bool = !var_402_bool; //@nz
		if(var_446_bool == 0) goto Label_1110;
		@sync();
		var_399_object->IsDialogEnd(var_402_bool);
	}
	
Label_1110:
	object var_447_object;
	var_393_object = var_447_object;
	func_1608();
	@StopDialog(var_399_object);
	var_399_object->GetReturnValue(-1);
	int var_401_int = var_392_int;
}
EMIT "Stack[-4] = 0";


void func_1683(bool var_64_bool, object var_65_object)
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
		func_1776(var_87_bool, var_88_string);
		var_87_bool = var_64_bool;
		return 10;

	}
}


void func_1942(void)
{
	object var_32_object;
	@CreateDiaryEntry(var_32_object, 601, 2, 531152);
	bool var_36_bool; object var_37_object;
	var_32_object = var_37_object;
	func_1968(var_36_bool, var_37_object, 598);
}
EMIT "Stack[-1] = 0";


void func_1814(int var_289_int, string var_290_string)
{
	int var_292_int;
	@GetVariable(var_290_string, var_292_int);
	var_292_int = var_289_int;
}


void func_1432(void)
{
	bool var_48_bool; int var_49_int; int var_50_int; bool var_51_bool;
	@WaitForAnimEnd();
	bool var_52_bool;
	func_1535(var_52_bool);
	if(!var_52_bool) //@nz
		return 12;
	int var_54_int;
	func_1853(var_54_int);
	int var_46_int;
	var_54_int = var_46_int;
	int var_47_int = 0;
	
	for(;;) {
		bool var_67_bool = false;
		if(var_47_int < 5) {
			bool var_70_bool;
			func_1535(var_70_bool);
			if(var_70_bool != 0)
				var_67_bool = true;
		}
		if(var_67_bool != 0) {
			if(!var_46_int) { //@nz
				@Sleep(3, var_48_bool);
				if(!var_48_bool) { //@nz
				} else {
			} else {
			@irand(var_49_int, var_46_int);
			@irand(var_50_int, 5);
			if(var_50_int != 0)
				var_49_int = 0;
			string var_81_string; int var_82_int;
			var_49_int = var_82_int;
			func_1846(var_81_string, var_82_int);
			@PlayAnimation("all", var_81_string);
			@WaitForAnimEnd(var_51_bool);
			var_83_bool = !var_51_bool; //@nz
			if(var_83_bool == 0) goto Label_1487;
			goto Label_1498;
			}
				Label_1487:
					bool var_74_bool;
					func_1501(var_74_bool);
					var_75_bool = !var_74_bool; //@nz
					if(var_75_bool == 0) goto Label_1493;
			}
		}
	Label_1498:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1493:
		@ResetAAS();
		var_47_int += 1;
	}
	
}


void func_1819(bool var_70_bool, string var_71_string, string var_72_string)
{
	object var_74_object;
	@FindActor(var_74_object, var_71_string);
	if(var_74_object == null)
		var_70_bool = false;
	@Trigger(var_74_object, var_72_string);
	var_70_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1179(object var_2_object, string var_423_string)
{
	bool var_424_bool;
	func_1878(var_424_bool);
	if(!var_424_bool) //@nz
		return 0;
	if(var_423_string == var_2_object)
		return 0;
	string var_427_string; bool var_428_bool;
	var_423_string = var_427_string;
	if(var_423_string == "")
		var_428_bool = false;
	else
		var_428_bool = true;
	func_1770(var_427_string, var_428_bool);
	var_2_object = var_423_string;
	
}


void func_1312(void)
{
	float var_36_float;
	@rand(var_36_float, 8, 16);
	@SetTimer(10, var_36_float);
}


// @pe
void func_546(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_354_object, object var_355_object)
{
	var_0_object = var_355_object;
	var_3_string = false;
	if(1 != 0) {
		func_609(var_355_object, "Neutral");
		var_0_object->SetMessage(535268); //@t
		var_0_object->ClearReplies(); //@t
		bool var_370_bool;
		func_1917(var_354_object);
		if(var_370_bool != 0)
			var_0_object->AddReply(535269, 37004, 36944); //@t
		var_0_object->AddReply(535322, -1, 37003); //@t
		goto Label_579;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x226";
	}
Label_579:
	bool var_382_bool;
	func_1878(var_382_bool);
	if(var_382_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1763(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_608;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_608:
		return 0;

	}
	
}


void func_1955(object var_45_object)
{
	object var_47_object;
	@GetDiaryRoot(var_47_object);
	if(!var_47_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_45_object = false;
	}
	var_47_object = var_45_object;
}
EMIT "Stack[-1] = 0";


void func_1831(int var_108_int)
{
	float var_110_float;
	@GetGameTime(var_110_float);
	var_108_int = 1 + (var_110_float / 24);
}


void func_1321(void)
{
	@KillTimer(10);
}


// @pe
void func_170(object var_2_object, string var_295_string)
{
	bool var_296_bool;
	func_1878(var_296_bool);
	if(!var_296_bool) //@nz
		return 0;
	if(var_295_string == var_2_object)
		return 0;
	string var_299_string; bool var_300_bool;
	var_295_string = var_299_string;
	if(var_295_string == "")
		var_300_bool = false;
	else
		var_300_bool = true;
	func_1770(var_299_string, var_300_bool);
	var_2_object = var_295_string;
	
}


void func_1535(bool var_22_bool)
{
	bool var_24_bool;
	@IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
}


void func_814(object var_0_object, int var_42_int, object var_43_object)
{
	var_0_object = var_43_object;
	bool var_53_bool; object var_54_object;
	object var_55_object;
	func_1798(var_55_object);
	var_55_object = var_54_object;
	func_1625(var_53_bool, var_54_object);
	bool var_148_bool; object var_149_object;
	var_43_object = var_149_object;
	func_1540(var_148_bool, var_149_object, 70.0);
	if(!var_148_bool) { //@nz
		var_42_int = -2;
		return 8;
	}
	object var_49_object;
	@CreateDialog(var_49_object);
	int var_195_int;
	func_1872(var_195_int);
	var_49_object->SetNPCName(var_195_int);
	int var_196_int;
	func_1870(var_196_int);
	var_49_object->SetNPCDescription(var_196_int);
	string var_197_string;
	func_1874(var_197_string);
	var_49_object->SetPhoto(var_197_string);
	string var_198_string;
	func_1876(var_198_string);
	var_49_object->SetPhoto2(var_198_string);
	int var_199_int;
	func_1996(var_199_int);
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
	TaskCall(6);
	func_895(var_210_object, var_211_object, var_212_string, var_213_bool, var_208_object, var_209_object);
	TaskReturn();
	bool var_52_bool;
	var_49_object->IsDialogEnd(var_52_bool);
	
	for(;;) {
		var_247_bool = !var_52_bool; //@nz
		if(var_247_bool == 0) goto Label_884;
		@sync();
		var_49_object->IsDialogEnd(var_52_bool);
	}
	
Label_884:
	object var_248_object;
	var_43_object = var_248_object;
	func_1608();
	@StopDialog(var_49_object);
	var_49_object->GetReturnValue(-1);
	int var_51_int = var_42_int;
}
EMIT "Stack[-4] = 0";


void func_1968(bool var_36_bool, object var_37_object, int var_38_int)
{
	object var_45_object;
	func_1955(var_45_object);
	object var_42_object;
	var_45_object = var_42_object;
	object var_43_object;
	var_42_object->Find(var_38_int, var_43_object);
	if(!var_43_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_38_int);
		var_36_bool = false;
	}
	var_43_object->AddChild(var_37_object);
	@SendWorldWndMessage(7);
	int var_44_int;
	var_37_object->GetCategory(var_44_int);
	@SetDiarySection(var_44_int);
	var_36_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_1840(bool var_256_bool, int var_257_int)
{
	int var_258_int;
	func_1831(var_258_int);
	var_256_bool = var_258_int == var_257_int;
}


void func_1791(void)
{
	bool var_24_bool;
	func_1878(var_24_bool);
	if(var_24_bool != 0)
		@lshStopSpeech();
}


void func_1846(string var_60_string, int var_61_int)
{
	string var_63_string = "idle";
	if(var_61_int != 0)
		var_63_string += var_61_int;
	var_63_string = var_60_string;
}


void func_1720(bool var_95_bool, object var_96_object)
{
	bool var_104_bool; int var_105_int; string var_106_string;
	int var_108_int;
	func_1831(var_108_int);
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
		func_1776(var_127_bool, var_128_string);
		var_127_bool = var_95_bool;
		return 10;

	}
}


// @pe
void func_953(object var_2_object, string var_215_string)
{
	bool var_216_bool;
	func_1878(var_216_bool);
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
	func_1770(var_219_string, var_220_bool);
	var_2_object = var_215_string;
	
}


void func_1853(int var_54_int)
{
	int var_57_int; bool var_58_bool;
	var_57_int = 0;
	
	for(;;) {
		string var_60_string; int var_61_int;
		var_57_int = var_61_int;
		func_1846(var_60_string, var_61_int);
		@HasAnimation(var_58_bool, "all", var_60_string);
		if(!var_58_bool) //@nz
			break;
		var_57_int += 1;
	}
	var_57_int = var_54_int;
}


void func_1608(void)
{
	bool var_250_bool;
	@CameraSwitchToNormal();
	bool var_251_bool;
	func_1878(var_251_bool);
	if(var_251_bool != 0) {
	} else {
		@HasAnimationTrack(var_250_bool, "head");
		if(var_250_bool == 0) goto Label_1624;
		@UnlookAsync("head");
	}
Label_1624:
	
}


void func_1996(int var_199_int)
{
	int var_201_int;
	@GetVariable("branch", var_201_int);
	if(var_201_int == 0) {
		var_199_int = 1;
		return 2;
	EMIT "GOTO 0x7db";
	}
	if(var_201_int == 1) {
		var_199_int = 2;
		return 2;
	}
	var_199_int = 3;
}


void func_1870(int var_196_int)
{
	var_196_int = 515536;
}


void func_1872(int var_195_int)
{
	var_195_int = 502861;
}


void func_465(object var_0_object, int var_330_int, object var_331_object)
{
	var_0_object = var_331_object;
	bool var_341_bool; object var_342_object;
	object var_343_object;
	func_1798(var_343_object);
	var_343_object = var_342_object;
	func_1625(var_341_bool, var_342_object);
	bool var_344_bool; object var_345_object;
	var_331_object = var_345_object;
	func_1540(var_344_bool, var_345_object, 70.0);
	if(!var_344_bool) { //@nz
		var_330_int = -2;
		return 8;
	}
	object var_337_object;
	@CreateDialog(var_337_object);
	int var_348_int;
	func_1872(var_348_int);
	var_337_object->SetNPCName(var_348_int);
	int var_349_int;
	func_1870(var_349_int);
	var_337_object->SetNPCDescription(var_349_int);
	string var_350_string;
	func_1874(var_350_string);
	var_337_object->SetPhoto(var_350_string);
	string var_351_string;
	func_1876(var_351_string);
	var_337_object->SetPhoto2(var_351_string);
	int var_352_int;
	func_1996(var_352_int);
	var_337_object->SetPlayerName(var_352_int);
	bool var_338_bool;
	@IsOverrideActive(var_338_bool);
	if(var_338_bool != 0) {
		var_330_int = -2;
		return 8;
	}
	@DoDialog(var_337_object);
	object var_354_object; object var_355_object;
	var_331_object = var_354_object;
	var_337_object = var_355_object;
	TaskCall(4);
	func_546(var_356_object, var_357_object, var_358_string, var_359_bool, var_354_object, var_355_object);
	TaskReturn();
	bool var_340_bool;
	var_337_object->IsDialogEnd(var_340_bool);
	
	for(;;) {
		var_390_bool = !var_340_bool; //@nz
		if(var_390_bool == 0) goto Label_535;
		@sync();
		var_337_object->IsDialogEnd(var_340_bool);
	}
	
Label_535:
	object var_391_object;
	var_331_object = var_391_object;
	func_1608();
	@StopDialog(var_337_object);
	var_337_object->GetReturnValue(-1);
	int var_339_int = var_330_int;
}
EMIT "Stack[-4] = 0";


void func_1874(string var_197_string)
{
	var_197_string = "ui/NPC_Han.png";
}


void func_1876(string var_198_string)
{
	var_198_string = "ui/NPC_Han_b.png";
}


void func_1878(bool var_91_bool)
{
	var_91_bool = true;
}


// @pe
void func_87(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_280_object, object var_281_object)
{
	var_0_object = var_281_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_287_bool;
		func_1905(var_280_object);
		if(var_287_bool != 0) {
			func_170(var_281_object, "Neutral");
			var_0_object->SetMessage(531123); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(531124, 32443, 32442); //@t
			var_0_object->AddReply(531403, 32745, 32744); //@t
		} else {
					func_170(var_281_object, "Neutral");
					var_0_object->SetMessage(531127); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531128, -1, 32446); //@t
					var_0_object->AddReply(531398, -1, 32739); //@t
		}
	}
	for(;;) {
		bool var_310_bool;
		func_1878(var_310_bool);
		if(var_310_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1763(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_169;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_169:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x5b";


// @pe
void func_1880(void)
{
	@SetVariable("b11q02", 4);
	func_1942();
}


void func_1625(bool var_53_bool, object var_54_object)
{
	int var_60_int; int var_61_int;
	@GetVariable("voice_common", var_60_int);
	if(var_60_int != 0) {
		bool var_64_bool; object var_65_object;
		var_54_object = var_65_object;
		func_1683(var_64_bool, var_65_object);
		if(!var_64_bool) { //@nz
			bool var_95_bool; object var_96_object;
			var_54_object = var_96_object;
			func_1720(var_95_bool, var_96_object);
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
		func_1720(var_140_bool, var_141_object);
		if(!var_140_bool) { //@nz
			bool var_143_bool; object var_144_object;
			var_54_object = var_144_object;
			func_1683(var_143_bool, var_144_object);
			if(!var_143_bool) { //@nz
				var_53_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1681;
	
Label_1681:
	var_53_bool = true;
	
}


// @pe
void func_2013(object var_39_object)
{
	var_40_bool = GlobalVars[1];
	if(!var_40_bool) { //@nz
		int var_42_int; object var_43_object;
		var_39_object = var_43_object;
		TaskCall(5);
		func_814(var_44_object, var_42_int, var_43_object);
		TaskReturn();
		var_255_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_256_bool;
	func_1840(var_256_bool, 11);
	if(var_256_bool != 0) {
		int var_259_int; object var_260_object;
		var_39_object = var_260_object;
		TaskCall(1);
		func_13(var_261_object, var_259_int, var_260_object);
		TaskReturn();
		return 0;
	}
	bool var_328_bool;
	func_1840(var_328_bool, 12);
	if(var_328_bool != 0) {
		int var_330_int; object var_331_object;
		var_39_object = var_331_object;
		TaskCall(3);
		func_465(var_332_object, var_330_int, var_331_object);
		TaskReturn();
		return 0;
	}
	int var_392_int; object var_393_object;
	var_39_object = var_393_object;
	TaskCall(7);
	func_1040(var_394_object, var_392_int, var_393_object);
	TaskReturn();
}


void func_1501(bool var_74_bool)
{
	var_74_bool = true;
}


void func_1503(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1889(void)
{
	func_1929();
	bool var_70_bool;
	func_1819(var_70_bool, "quest_b11_02", "fail");
}


// @pe
void func_609(object var_2_object, string var_361_string)
{
	bool var_362_bool;
	func_1878(var_362_bool);
	if(!var_362_bool) //@nz
		return 0;
	if(var_361_string == var_2_object)
		return 0;
	string var_365_string; bool var_366_bool;
	var_361_string = var_365_string;
	if(var_361_string == "")
		var_366_bool = false;
	else
		var_366_bool = true;
	func_1770(var_365_string, var_366_bool);
	var_2_object = var_361_string;
	
}


void func_1763(string var_29_string)
{
	float var_32_float; float var_33_float;
	@lshGetAnimTimes(var_29_string, var_32_float, var_33_float);
	@lshPlayAnimation(var_32_float, var_33_float, false);
}


// @pe
void func_1121(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_416_object, object var_417_object)
{
	var_0_object = var_417_object;
	var_1_object = var_416_object;
	var_3_string = false;
	if(1 != 0) {
		func_1179(var_417_object, "Neutral");
		var_0_object->SetMessage(540554); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540555, -1, 42564); //@t
		var_0_object->AddReply(540794, -1, 42843); //@t
		goto Label_1149;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x465";
	}
Label_1149:
	bool var_438_bool;
	func_1878(var_438_bool);
	if(var_438_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1763(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1178;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1178:
		return 0;

	}
	
}


void func_1250(object var_0_object)
{
	bool var_22_bool;
	func_1535(var_22_bool);
	if(!var_22_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_1378();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1432();
	}
}
EMIT "Return(); Pop(0)";


void func_1508(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


void func_1770(string var_219_string, bool var_220_bool)
{
	float var_225_float; float var_226_float;
	@lshGetAnimTimes(var_219_string, var_225_float, var_226_float);
	@lshPlayAnimation(var_225_float, var_226_float, var_220_bool);
}


// @pe
void func_1899(void)
{
	@SetVariable("oob12Han1", 1);
}


void func_1516(bool var_29_bool, cvector var_30_cvector)
{
	cvector var_34_cvector;
	@GetPosition(var_34_cvector);
	cvector var_35_cvector = var_30_cvector - var_34_cvector;
	var_37_float = GetByIndex(var_35_cvector, 0);
	var_38_float = GetByIndex(var_35_cvector, 2);
	bool var_36_bool;
	@Rotate(var_37_float, var_38_float, var_36_bool);
	var_36_bool = var_29_bool;
}


void func_1776(bool var_87_bool, string var_88_string)
{
	bool var_90_bool;
	bool var_91_bool;
	func_1878(var_91_bool);
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
void func_1905(bool var_287_bool)
{
	int var_289_int;
	func_1814(var_289_int, "b11q02");
	if(var_289_int == 3)
		var_287_bool = true;
	var_287_bool = false;
}


void func_1526(bool var_25_bool, object var_26_object)
{
	cvector var_28_cvector;
	var_26_object->GetPosition(var_28_cvector);
	bool var_29_bool; cvector var_30_cvector;
	var_28_cvector = var_30_cvector;
	func_1516(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
}


void func_1270(bool var_46_bool)
{
	object var_48_object;
	@FindActor(var_48_object, "player");
	if(!var_48_object) //@nz
		var_46_bool = false;
	bool var_51_bool; object var_52_object;
	var_48_object = var_52_object;
	func_1526(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1917(bool var_370_bool)
{
	int var_372_int;
	func_1814(var_372_int, "oob12Han1");
	if(var_372_int == 0) {
		var_370_bool = true;
		return 0;
	}
	var_370_bool = false;
}


// @pe
void func_895(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_208_object, object var_209_object)
{
	var_0_object = var_209_object;
	var_1_object = var_208_object;
	var_3_string = false;
	if(1 != 0) {
		func_953(var_209_object, "Neutral");
		var_0_object->SetMessage(518009); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(518010, 32920, 19143); //@t
		var_0_object->AddReply(531560, -1, 32919); //@t
		goto Label_923;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x383";
	}
Label_923:
	bool var_234_bool;
	func_1878(var_234_bool);
	if(var_234_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1763(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_952;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_952:
		return 0;

	}
	
}



// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, cvector var_16_cvector, cvector var_17_cvector, bool var_18_bool)
	{
		if(1 != 0) {
			func_1936();
			if(var_18_bool == 10005) {
				object var_23_object; object var_24_object;
				var_23_object = var_1_object;
				var_24_object = var_0_object;
				func_2116();
			}
			if(var_18_bool == 10006) {
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_2116();
			}
			if(var_18_bool == 10009) {
				object var_60_object; object var_61_object;
				var_60_object = var_1_object;
				var_61_object = var_0_object;
				func_2116();
			}
			if(var_17_cvector == 10002) {
				func_127(var_18_bool, "Neutral");
				var_0_object->SetMessage(509122); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509123, 10004, 10003); //@t
				return 0;
			}
			if(var_17_cvector == 10004) {
				func_127(var_18_bool, "Neutral");
				var_0_object->SetMessage(509124); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509125, -1, 10005); //@t
				var_0_object->AddReply(509126, -1, 10006); //@t
				var_0_object->AddReply(509127, 10008, 10007); //@t
				return 0;
			}
			if(var_17_cvector == 10008) {
				func_127(var_18_bool, "Neutral");
				var_0_object->SetMessage(509128); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509129, -1, 10009); //@t
				return 0;
			}
			var_3_string = true;
			bool var_105_bool;
			func_2333(var_105_bool);
			if(var_105_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x96";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, int var_14_int, cvector var_15_cvector, cvector var_16_cvector, bool var_17_bool)
	{
		if(var_17_bool == 1) {
			func_2096(var_1_object);
		} else {
			int var_25_int;
			func_1146(var_16_cvector, var_25_int, var_25_int);
		}
	
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, cvector var_16_cvector, bool var_17_bool)
	{
		bool var_18_bool = false;
		if(var_1_object == var_17_bool) {
			if(!var_2_object) //@nz
				var_18_bool = true;
		}
		if(var_18_bool != 0) {
			var_2_object = true;
			object var_21_object;
			var_17_bool = var_21_object;
			func_1925(var_21_object);
		}
	}

	// @pe
	void OnStopSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, cvector var_16_cvector, bool var_17_bool)
	{
		bool var_18_bool = false;
		if(var_1_object == var_17_bool) {
			if(var_2_object != 0)
				var_18_bool = true;
		}
		if(var_18_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, cvector var_16_cvector, bool var_17_bool)
	{
		@RequestClearPath(var_17_bool);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, cvector var_16_cvector, bool var_17_bool)
	{
		func_1002(var_17_bool);
		object var_22_object;
		var_17_bool = var_22_object;
		func_2319();
	}

}


task task_4
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, cvector var_16_cvector, bool var_17_bool)
	{
		bool var_19_bool;
		@IsOverrideActive(var_19_bool);
		if(!var_19_bool) { //@nz
			object var_21_object;
			var_17_bool = var_21_object;
			func_2203(var_21_object);
		}
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, int var_15_int, float var_16_float, float var_17_float, cvector var_18_cvector, cvector var_19_cvector, bool var_20_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, string var_15_string, cvector var_16_cvector, cvector var_17_cvector, bool var_18_bool)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, cvector var_16_cvector, bool var_17_bool)
	{
	}

}


maintask task_5
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, cvector var_14_cvector, cvector var_15_cvector, bool var_16_bool)
	{
		var_2_object = true;
		func_1382(var_15_cvector, var_16_bool);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, cvector var_14_cvector, cvector var_15_cvector, bool var_16_bool, object var_17_object)
	{
		bool var_18_bool;
		func_1346(var_17_object, var_18_bool);
		if(var_18_bool != 0) {
			func_1466();
			object var_19_object;
			func_1348(var_19_object, var_19_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, cvector var_14_cvector, cvector var_15_cvector, bool var_16_bool, object var_17_object)
	{
		bool var_19_bool;
		@IsPlayerActor(var_17_object, var_19_bool);
		if(var_19_bool != 0) {
			TaskCall(2);
			func_256();
			TaskReturn();
		}
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, cvector var_14_cvector, cvector var_15_cvector, bool var_16_bool, object var_17_object, int var_18_int, float var_19_float, float var_20_float)
{
	object var_21_object;
	var_17_object = var_21_object;
	int var_22_int;
	var_18_int = var_22_int;
	float var_23_float;
	var_19_float = var_23_float;
	func_1714(var_21_object, var_22_int, var_23_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, cvector var_14_cvector, cvector var_15_cvector, bool var_16_bool, object var_17_object, int var_18_int, float var_19_float, float var_20_float, cvector var_21_cvector, cvector var_22_cvector)
{
	object var_23_object;
	var_17_object = var_23_object;
	int var_24_int;
	var_18_int = var_24_int;
	float var_25_float;
	var_19_float = var_25_float;
	cvector var_26_cvector;
	var_21_cvector = var_26_cvector;
	cvector var_27_cvector;
	var_22_cvector = var_27_cvector;
	func_1782(var_25_float, var_26_cvector, var_27_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, cvector var_14_cvector, cvector var_15_cvector, bool var_16_bool, object var_17_object, string var_18_string)
{
	float var_20_float;
	if(var_18_string == "health") {
		@GetProperty("health", var_20_float);
		if(var_20_float <= 0)
			@SignalDeath(var_17_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, cvector var_14_cvector, cvector var_15_cvector, bool var_16_bool, object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	func_2257(var_18_object);
}


void func_0(object var_0_object, int var_20_int, object var_21_object)
{
	var_0_object = var_21_object;
	bool var_31_bool; object var_32_object;
	var_21_object = var_32_object;
	func_1807(var_31_bool, var_32_object, 70.0);
	if(!var_31_bool) { //@nz
		var_20_int = -2;
		return 8;
	}
	object var_27_object;
	@CreateDialog(var_27_object);
	int var_79_int;
	func_2327(var_79_int);
	var_27_object->SetNPCName(var_79_int);
	int var_80_int;
	func_2325(var_80_int);
	var_27_object->SetNPCDescription(var_80_int);
	string var_81_string;
	func_2329(var_81_string);
	var_27_object->SetPhoto(var_81_string);
	string var_82_string;
	func_2331(var_82_string);
	var_27_object->SetPhoto2(var_82_string);
	int var_83_int;
	func_2180(var_83_int);
	var_27_object->SetPlayerName(var_83_int);
	bool var_28_bool;
	@IsOverrideActive(var_28_bool);
	if(var_28_bool != 0) {
		var_20_int = -2;
		return 8;
	}
	@DoDialog(var_27_object);
	object var_92_object; object var_93_object;
	var_21_object = var_92_object;
	var_27_object = var_93_object;
	TaskCall(1);
	func_74(var_94_object, var_95_object, var_96_string, var_97_bool, var_92_object, var_93_object);
	TaskReturn();
	bool var_30_bool;
	var_27_object->IsDialogEnd(var_30_bool);
	
	for(;;) {
		var_138_bool = !var_30_bool; //@nz
		if(var_138_bool == 0) goto Label_63;
		@sync();
		var_27_object->IsDialogEnd(var_30_bool);
	}
	
Label_63:
	object var_139_object;
	var_21_object = var_139_object;
	func_1876();
	@StopDialog(var_27_object);
	var_27_object->GetReturnValue(-1);
	int var_29_int = var_20_int;
}
EMIT "Stack[-4] = 0";


void func_256(void)
{
	object var_28_object;
	@FindActor(var_28_object, "player");
	if(!var_28_object) { //@nz
	}
	object var_31_object;
	object var_27_object;
	func_277(var_24_bool, var_25_float, var_26_int, var_27_object, var_31_object, var_31_object, true, 180.0);
}
EMIT "Stack[-1] = 0";


void func_1796(object var_237_object)
{
	cvector var_241_cvector;
	var_237_object->GetPosition(var_241_cvector);
	cvector var_242_cvector;
	@GetPosition(var_242_cvector);
	cvector var_243_cvector = var_241_cvector - var_242_cvector;
	var_244_float = GetByIndex(var_243_cvector, 0);
	var_245_float = GetByIndex(var_243_cvector, 2);
	@RotateAsync(var_244_float, var_245_float);
}


void func_2057(float var_459_float)
{
	object var_461_object;
	@CreateFloatVector(var_461_object);
	var_461_object->add(var_459_float);
	if(var_459_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_461_object);
}
EMIT "Stack[-1] = 0";


void func_1807(bool var_31_bool, object var_32_object, float var_33_float)
{
	cvector var_44_cvector; bool var_51_bool;
	var_32_object->GetPosition(var_44_cvector);
	float var_43_float;
	var_32_object->GetEyesHeight(var_43_float);
	var_52_float = GetByIndex(var_44_cvector, 1);
	SetByIndex(var_44_cvector, 1) = (var_52_float + var_43_float);
	cvector var_45_cvector;
	@GetPosition(var_45_cvector);
	@GetEyesHeight(var_43_float);
	var_53_float = GetByIndex(var_45_cvector, 1);
	SetByIndex(var_45_cvector, 1) = (var_53_float + var_43_float);
	cvector var_46_cvector = var_44_cvector - var_45_cvector;
	var_54_float = GetByIndex(var_46_cvector, 1);
	SetByIndex(var_46_cvector, 1) = (float)0;
	var_56_float = sqrt(var_46_cvector | var_46_cvector);
	var_46_cvector /= var_56_float;
	cvector var_47_cvector = -var_46_cvector;
	cvector var_58_cvector;
	func_1990(var_58_cvector, (var_47_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_48_cvector = ((var_46_cvector * var_33_float) + (var_58_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_50_bool;
	@IsOverrideActive(var_50_bool);
	if(var_50_bool != 0)
		var_31_bool = false;
	@StopWorld();
	@CameraTransit((var_45_cvector + var_48_cvector), var_47_cvector, true);
	var_72_float = GetByIndex(var_48_cvector, 0);
	var_73_float = GetByIndex(var_48_cvector, 2);
	@Rotate(var_72_float, var_73_float);
	bool var_74_bool;
	func_2333(var_74_bool);
	if(var_74_bool != 0) {
	} else {
		@HasAnimationTrack(var_51_bool, "head");
		if(var_51_bool == 0) goto Label_1870;
		@LookAsyncCamera("head");
	}
Label_1870:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_31_bool = true;
	
}


// @pe
void func_271(float var_400_float)
{
	var_400_float = 0.3;
}


// @pe
void func_274(int var_407_int)
{
	var_407_int = 0;
}


void func_787(object var_0_object, bool var_306_bool)
{
	cvector var_312_cvector; cvector var_313_cvector;
	bool var_317_bool;
	func_1646(var_317_bool, var_0_object);
	if(!var_317_bool) { //@nz
		var_306_bool = false;
		return 10;
	}
	bool var_320_bool;
	float var_316_float;
	func_876(var_316_float, var_320_bool);
	if(var_320_bool != 0) {
		var_0_object->GetPFPosition(var_312_cvector); //@t
		@GetPFPosition(var_313_cvector);
		var_0_object->GetAttackDistance(var_316_float); //@t
		var_306_bool = ((var_312_cvector - var_313_cvector) | (var_312_cvector - var_313_cvector)) <= ((var_316_float + 50) * (var_316_float + 50));
		return 10;
	}
	var_306_bool = false;
}


void func_1044(object var_0_object, object var_1_object, bool var_163_bool, object var_164_object, float var_165_float, float var_166_float, bool var_167_bool, bool var_168_bool)
{
	bool var_177_bool; object var_179_object; cvector var_180_cvector; cvector var_181_cvector; float var_183_float; object var_184_object;
	var_0_object = false;
	var_1_object = var_164_object;
	bool var_178_bool;
	var_168_bool = var_178_bool;
	
	for(;;) {
		bool var_185_bool; object var_186_object;
		var_164_object = var_186_object;
		func_1184(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			var_163_bool = false;
			return 16;
		}
		var_164_object->GetPosition(var_180_cvector);
		@GetPosition(var_181_cvector);
		var_183_float = (var_180_cvector - var_181_cvector) | (var_180_cvector - var_181_cvector);
		bool var_190_bool = false;
		if(var_166_float > 0) {
			if(var_183_float > (var_166_float * var_166_float))
				var_190_bool = true;
		}
		if(var_190_bool != 0) {
			@Stop();
			var_163_bool = false;
			return 16;
		}
		if(var_183_float > (var_165_float * var_165_float)) {
			var_164_object->GetPFPosition(var_180_cvector);
			@FindPathTo(var_184_object, var_180_cvector);
			if(var_184_object != null) {
				var_184_object = var_179_object;
				var_184_object = null;
			}
			if(var_179_object != null) {
				if(var_178_bool == 0) goto Label_1097;
				var_178_bool = false;
				@RotatePath(var_179_object, var_177_bool);
				if(!var_177_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_203_string;
						func_1191(var_203_string);
						string var_204_string;
						func_1193(var_204_string);
						@FollowPath(var_179_object, var_167_bool, var_177_bool, var_203_string, var_204_string);
						if(!var_177_bool) { //@nz
							if(var_0_object == 0) goto Label_1116;
							var_179_object = null;
						}
					EMIT "GOTO 0x45d";

					Label_1116:
						} else {
					var_179_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_177_bool);
					if(!var_177_bool) { //@nz
						if(var_0_object != 0) {
							var_179_object = null;
							goto Label_1144;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1144;
		}
			var_184_object = null;
			goto Label_1142;

		Label_1142:
			var_179_object = null;

		}
	Label_1144:
		for(;;) {
			var_163_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_2325(int var_80_int)
{
	var_80_int = 515572;
}


void func_277(object var_0_object, string var_3_string, object var_5_object, object var_31_object, bool var_32_bool, float var_33_float, bool var_140_bool, bool var_232_bool)
{
	float var_45_float; cvector var_46_cvector; cvector var_47_cvector; bool var_49_bool; float var_52_float; cvector var_53_cvector; bool var_54_bool; float var_55_float;
	func_506(var_53_cvector, var_54_bool, var_55_float);
	var_5_object = 0;
	var_80_bool = IsFuncExist(var_31_object, "@GetAttackDistance", 1);
	if(var_80_bool != 0) {
		var_31_object->GetAttackDistance(var_45_float);
		var_45_float += 50;
	} else {
						var_33_float = var_45_float;
	}
	if(var_45_float >= 150)
		var_45_float = 150;
	var_3_string = false;
	var_0_object = var_31_object;
	bool var_48_bool;
	@IsPlayerActor(var_0_object, var_48_bool);
	if(var_48_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_86_object;
		func_1984(var_86_object);
		@SendPlayerEnemy(var_31_object, var_86_object);
	}
	if(var_32_bool != 0)
		var_49_bool = false;
	else
		var_49_bool = true;

	
Label_317:
	for(;;) {
		bool var_91_bool = false;
		bool var_92_bool;
		func_1646(var_92_bool, var_0_object);
		if(var_92_bool != 0) {
			if(!var_3_string) //@nz
				var_91_bool = true;
		}
		if(var_91_bool != 0) {
			func_919(var_55_float);
			var_0_object->GetPFPosition(var_46_cvector); //@t
			@GetPFPosition(var_47_cvector);
			var_52_float = (var_46_cvector - var_47_cvector) | (var_46_cvector - var_47_cvector);
			if(var_52_float >= ((400.0 + var_45_float) * (400.0 + var_45_float))) {
				bool var_134_bool; float var_136_float;
				var_45_float = var_136_float;
				TaskCall(3);
				func_939(var_142_bool, var_134_bool, var_0_object, var_136_float, 10000.0, true, false);
				TaskReturn();
				if(!var_140_bool) { //@nz
				} else {
					var_49_bool = false;
			} else {
			if(var_52_float >= (var_33_float * var_33_float)) {
				var_0_object->GetPFPosition(var_53_cvector); //@t
				@CanReachByPF(var_54_bool, var_53_cvector);
				if(!var_54_bool) { //@nz
					bool var_226_bool; float var_228_float;
					var_45_float = var_228_float;
					TaskCall(3);
					func_939(var_234_bool, var_226_bool, var_0_object, var_228_float, 10000.0, true, false);
					TaskReturn();
					if(!var_232_bool) { //@nz
						goto Label_489;
					}
					var_49_bool = false;
					goto Label_317;
				}
				if(!var_49_bool) { //@nz
					func_1796(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_919(var_55_float);
					@StopAsync();
					var_49_bool = true;
					bool var_248_bool;
					func_1646(var_248_bool, var_0_object);
					if(!var_248_bool) { //@nz
						goto Label_489;
					}
				}
				@rand(var_55_float);
				bool var_251_bool;
				var_253_bool = var_55_float < 0.25;
				if(var_253_bool != 1) {
					bool var_254_bool;
					func_876(true, var_254_bool);
					if(var_254_bool != 1)
						var_251_bool = false;
				}
				if(var_251_bool != 0) {
					@Face(var_0_object);
					func_926();
					@PlayAnimation("all", "attack_stay");
					bool var_291_bool; float var_292_float;
					func_744(var_55_float, var_291_bool, var_292_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_919(var_55_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_513_bool;
					func_876(var_55_float, var_513_bool);
					var_514_bool = !var_513_bool; //@nz
					if(var_514_bool == 0) goto Label_479;
					bool var_515_bool;
					func_1646(var_515_bool, var_0_object);
					if(!var_515_bool) { //@nz
						goto Label_489;
					}
					var_0_object->GetPFPosition(var_46_cvector); //@t
					@GetPFPosition(var_47_cvector);
					if(!(((var_46_cvector - var_47_cvector) | (var_46_cvector - var_47_cvector)) < (var_292_float * var_292_float))) goto Label_479;
					bool var_520_bool; float var_521_float;
					var_33_float = var_521_float;
					func_580(var_54_bool, var_55_float, var_520_bool, var_521_float);
					var_522_bool = !var_520_bool; //@nz
					if(var_522_bool == 0) goto Label_479;
					goto Label_489;
			}
				bool var_523_bool; float var_524_float;
				var_33_float = var_524_float;
				func_580(var_54_bool, var_55_float, var_523_bool, var_524_float);
				if(!var_523_bool) { //@nz
					goto Label_489;
				}
				var_49_bool = true;

			}
		Label_479:
			goto Label_488;
			}
			Label_488:
			}
		}
	Label_489:
		@WaitForAnimEnd();
		if(var_3_string != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_48_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_2327(int var_79_int)
{
	var_79_int = 504031;
}


void func_2329(string var_81_string)
{
	var_81_string = "ui/NPC_Citizen2.png";
}


void func_2074(float var_58_float)
{
	object var_60_object;
	@CreateFloatVector(var_60_object);
	var_60_object->add(var_58_float);
	@SendWorldWndMessage(16, var_60_object);
}
EMIT "Stack[-1] = 0";


void func_2331(string var_82_string)
{
	var_82_string = "ui/NPC_Citizen2_b.png";
}


void func_541(object var_0_object, float var_389_float, int var_390_int)
{
	object var_394_object; float var_395_float; float var_396_float;
	@GetVictim((var_389_float * 0.9), var_394_object);
	@ReportAttack(var_0_object);
	if(var_394_object == var_0_object) {
		float var_400_float; object var_401_object; int var_402_int;
		var_394_object = var_401_object;
		var_390_int = var_402_int;
		func_271(var_402_int);
		var_400_float = var_395_float;
		float var_403_float; object var_404_object; float var_405_float; int var_406_int;
		var_394_object = var_404_object;
		int var_407_int; object var_408_object; int var_409_int;
		var_394_object = var_408_object;
		var_390_int = var_409_int;
		func_274(var_409_int);
		var_407_int = var_406_int;
		func_1532(var_403_float, var_404_object, var_405_float, var_406_int);
		var_403_float = var_396_float;
		int var_468_int;
		func_924(var_468_int);
		@ReportHit(var_0_object, var_468_int, var_396_float, var_405_float);
		object var_469_object; float var_470_float;
		var_394_object = var_469_object;
		var_396_float = var_470_float;
		func_931();
	}
}
EMIT "Stack[-3] = 0";


void func_2333(bool var_74_bool)
{
	var_74_bool = false;
}


// @pe
void func_1309(string var_112_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_113_string;
	var_112_string = var_113_string;
	func_1943(var_113_string);
	@PlayAnimation("all", var_112_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_112_string);
	@RemoveEnvelope();
}


void func_2084(bool var_48_bool, string var_49_string, string var_50_string)
{
	object var_52_object;
	@FindActor(var_52_object, var_49_string);
	if(var_52_object == null)
		var_48_bool = false;
	@Trigger(var_52_object, var_50_string);
	var_48_bool = true;
}
EMIT "Stack[-1] = 0";


void func_815(bool var_304_bool)
{
	bool var_305_bool = false;
	bool var_306_bool;
	func_787(var_305_bool, var_306_bool);
	if(var_306_bool != 0) {
		bool var_323_bool;
		func_831(var_304_bool, var_305_bool, var_323_bool);
		if(var_323_bool != 0)
			var_305_bool = true;
	}
	if(var_305_bool != 0) {
		var_304_bool = true;
		return 0;
	}
	var_304_bool = false;
}


void func_2096(object var_127_object)
{
	bool var_129_bool;
	@IsPlayerActor(var_127_object, var_129_bool);
	if(var_129_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_2105(void)
{
	object var_365_object;
	@GetScene(var_365_object);
	object var_367_object;
	func_1984(var_367_object);
	@BroadcastMessage("battle", var_367_object, var_365_object);
}
EMIT "Stack[-1] = 0";


void func_831(object var_0_object, bool var_4_bool, bool var_323_bool)
{
	object var_329_object; float var_331_float; cvector var_332_cvector; cvector var_333_cvector;
	@GetScene(var_329_object);
	bool var_330_bool = false;
	
	for(;;) {
		cvector var_334_cvector;
		func_1486(var_334_cvector, var_0_object);
		var_340_int = -var_334_cvector;
		@FindDirLength(var_331_float, var_340_int, var_4_bool);
		if(var_331_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_332_cvector); //@t
				@GetPFPosition(var_333_cvector);
				@WaitForAnimEnd();
				func_919(var_333_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_330_bool = true;
				bool var_345_bool;
				func_787(var_333_cvector, var_345_bool);
				var_346_bool = !var_345_bool; //@nz
				if(var_346_bool == 0) goto Label_872;
		}
		for(;;) {
			var_330_bool = var_323_bool;

		}

	Label_872:
	}
}
EMIT "Stack[-5] = 0";


void func_1346(object var_2_object, bool var_18_bool)
{
	var_18_bool = var_2_object;
}


// @pe
void func_2116(void)
{
	func_2126();
	bool var_48_bool;
	func_2084(var_48_bool, "quest_d3_01", "patrol_talk");
}


void func_580(object var_0_object, object var_1_object, bool var_352_bool, float var_353_float)
{
	string var_361_string;
	func_919(var_361_string);
	int var_358_int;
	@irand(var_358_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_2105();
	@PlayAnimation("all", ("attack_begin" + (var_358_int + 1)));
	@WaitForAnimEnd();
	int var_360_int;
	func_887(var_360_int, var_361_string);
	bool var_386_bool;
	func_1646(var_386_bool, var_0_object);
	if(!var_386_bool) { //@nz
		@StopAsync();
		var_352_bool = false;
		return 8;
	}
	float var_389_float; int var_390_int;
	var_353_float = var_389_float;
	var_358_int = var_390_int;
	func_541(var_361_string, var_389_float, var_390_int);
	bool var_359_bool;
	@HasAnimation(var_359_bool, "all", ("attack_middle" + var_358_int));
	if(var_359_bool != 0) {
		func_2105();
		@PlayAnimation("all", ("attack_middle" + var_358_int));
		@WaitForAnimEnd();
		func_919(var_361_string);
		bool var_478_bool;
		func_1646(var_478_bool, var_0_object);
		if(!var_478_bool) { //@nz
			@StopAsync();
			var_352_bool = false;
			return 8;
		}
		float var_481_float; int var_482_int;
		var_353_float = var_481_float;
		func_541(var_361_string, var_481_float, var_482_int);
		var_360_int = 1;

		for(;;) {
			var_361_string = (("attack_middle" + var_482_int) + "_") + var_360_int;
			@HasAnimation(var_359_bool, "all", var_361_string);
			if(!var_359_bool) { //@nz
			} else {
				func_2105();
				@PlayAnimation("all", var_361_string);
				@WaitForAnimEnd();
				func_919(var_361_string);
				bool var_504_bool;
				func_1646(var_504_bool, var_0_object);
				if(!var_504_bool) { //@nz
					@StopAsync();
					var_352_bool = false;
					return 8;
				}
				float var_507_float; int var_508_int;
				var_353_float = var_507_float;
				var_358_int = var_508_int;
				func_541(var_361_string, var_507_float, var_508_int);
				var_360_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_358_int));
		bool var_493_bool;
		func_933(var_493_bool);
		if(var_493_bool != 0) {
			bool var_494_bool;
			func_717(var_494_bool, 0.75);
			@StopAsync();
		}
		var_352_bool = true;
		return 8;

	}
}


void func_1605(bool var_107_bool, object var_108_object)
{
	bool var_110_bool;
	var_108_object->IsDead(var_110_bool);
	var_110_bool = var_107_bool;
}


// @pe
void func_1348(object var_2_object, object var_19_object)
{
	object var_21_object;
	var_19_object = var_21_object;
	TaskCall(0);
	int var_20_int;
	func_0(var_22_object, var_20_int, var_21_object);
	TaskReturn();
	var_2_object = false;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_92_object, object var_93_object)
{
	var_0_object = var_93_object;
	var_1_object = var_92_object;
	var_3_string = false;
	if(1 != 0) {
		func_127(var_93_object, "Neutral");
		var_0_object->SetMessage(509122); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(509123, 10004, 10003); //@t
		goto Label_97;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_97:
	bool var_120_bool;
	func_2333(var_120_bool);
	if(var_120_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1894(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_126;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_126:
		return 0;

	}
	
}


void func_1610(bool var_96_bool, object var_97_object)
{
	if(var_97_object == null) {
		var_96_bool = false;
		return 4;
	}
	bool var_103_bool = false;
	var_106_bool = IsFuncExist(var_97_object, "IsDead", 1);
	if(var_106_bool != 0) {
		bool var_107_bool; object var_108_object;
		var_97_object = var_108_object;
		func_1605(var_107_bool, var_108_object);
		if(var_107_bool != 0)
			var_103_bool = true;
	}
	if(var_103_bool != 0) {
		var_96_bool = false;
		return 4;
	}
	object var_100_object;
	@GetScene(var_100_object);
	if(var_100_object == null) {
		var_96_bool = false;
		return 4;
	}
	object var_101_object;
	var_97_object->GetScene(var_101_object);
	if(var_100_object != var_101_object) {
		var_96_bool = false;
		return 4;
	}
	var_96_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1357(void)
{
}


void func_2126(void)
{
	object var_26_object;
	@CreateDiaryEntry(var_26_object, 72, 1, 512154);
	bool var_30_bool; object var_31_object;
	var_26_object = var_31_object;
	func_2152(var_30_bool, var_31_object, 25);
}
EMIT "Stack[-1] = 0";


void func_1876(void)
{
	bool var_141_bool;
	@CameraSwitchToNormal(true);
	bool var_143_bool;
	func_2333(var_143_bool);
	if(var_143_bool != 0) {
	} else {
		@HasAnimationTrack(var_141_bool, "head");
		if(var_141_bool == 0) goto Label_1893;
		@UnlookAsync("head");
	}
Label_1893:
	
}


void func_2139(object var_39_object)
{
	object var_41_object;
	@GetDiaryRoot(var_41_object);
	if(!var_41_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_39_object = false;
	}
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


void func_1894(string var_122_string)
{
	bool var_126_bool; float var_127_float; float var_128_float;
	@lshHasAnimation(var_126_bool, var_122_string);
	if(var_126_bool != 0) {
		@lshGetAnimTimes(var_122_string, var_127_float, var_128_float);
		@lshPlayAnimation(var_127_float, var_128_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_122_string);
	}
	
}


void func_1382(object var_0_object, object var_1_object)
{
	int var_21_int; bool var_22_bool; cvector var_23_cvector; object var_24_object;
	@GetPFPosition(var_1_object);
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1471();
		@irand(var_21_int, 10);
		@Sleep((var_21_int + 5), var_22_bool);
		if(var_22_bool != 0) {
			func_1357();
		} else {
		for(;;) {
			func_1471();
			@GetPFPosition(var_23_cvector);
			float var_29_float; cvector var_31_cvector;
			var_23_cvector = var_31_cvector;
			func_2000(var_29_float, var_1_object, var_31_cvector);
			if(var_29_float > 40000) {
				@FindPathTo(var_24_object, var_1_object);
				if(var_24_object != null) {
					@RotatePath(var_24_object, var_22_bool);
					if(!var_22_bool) { //@nz
					} else {
					@FollowPath(var_24_object, false, var_22_bool);
					if(!var_22_bool) { //@nz
						goto Label_1463;
					}
					var_40_float = GetByIndex(var_0_object, 0);
					var_41_float = GetByIndex(var_0_object, 2);
					@Rotate(var_40_float, var_41_float, var_22_bool);
					if(!var_22_bool) { //@nz
						goto Label_1463;
					}
					@WaitForAnimEnd(var_22_bool);
					if(!var_22_bool) { //@nz
						goto Label_1463;
					}
					goto Label_1464;
				EMIT "GOTO 0x5a8";
				}
				@Sleep(1);
				var_24_object = null;
				goto Label_1463;
			}
			var_45_float = GetByIndex(var_0_object, 0);
			var_46_float = GetByIndex(var_0_object, 2);
			@Rotate(var_45_float, var_46_float, var_22_bool);
			if(!var_22_bool) { //@nz
				goto Label_1463;
			}
			@WaitForAnimEnd(var_22_bool);
			if(!var_22_bool) { //@nz
				goto Label_1463;
			}
			goto Label_1464;
			}
		Label_1463:
		}
		}
	Label_1464:
	}
	
}
EMIT "Return(); Pop(8)";


void func_2152(bool var_30_bool, object var_31_object, int var_32_int)
{
	object var_39_object;
	func_2139(var_39_object);
	object var_36_object;
	var_39_object = var_36_object;
	object var_37_object;
	var_36_object->Find(var_32_int, var_37_object);
	if(!var_37_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_32_int);
		var_30_bool = false;
	}
	var_37_object->AddChild(var_31_object);
	@SendWorldWndMessage(7);
	int var_38_int;
	var_31_object->GetCategory(var_38_int);
	@SetDiarySection(var_38_int);
	var_30_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_876(object var_0_object, bool var_254_bool)
{
	bool var_256_bool;
	var_259_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_259_bool != 0) {
		var_0_object->IsAttacking(var_256_bool); //@t
		var_256_bool = var_254_bool;
	}
	var_254_bool = false;
}


void func_1646(bool var_92_bool, object var_93_object)
{
	object var_97_object;
	var_93_object = var_97_object;
	bool var_96_bool;
	func_1610(var_96_bool, var_97_object);
	if(!var_96_bool) { //@nz
		var_92_bool = false;
		return 2;
	}
	bool var_114_bool; object var_115_object;
	func_1498(var_114_bool, var_115_object, "noaccess");
	if(!var_114_bool) { //@nz
		var_92_bool = true;
		return 2;
	}
	int var_95_int;
	var_115_object->GetProperty("noaccess", var_95_int);
	var_92_bool = var_95_int == 0;
}


void func_1910(string var_103_string, bool var_104_bool)
{
	bool var_110_bool; float var_111_float; float var_112_float;
	@lshHasAnimation(var_110_bool, var_103_string);
	if(var_110_bool != 0) {
		@lshGetAnimTimes(var_103_string, var_111_float, var_112_float);
		@lshPlayAnimation(var_111_float, var_112_float, var_104_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_103_string);
	}
	
}


void func_887(object var_2_object, object var_5_object)
{
	int var_374_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_object != 0) {
		if((var_5_object + -1) > 0)
			return 4;
	}
	float var_373_float;
	@rand(var_373_float);
	float var_380_float;
	func_937(var_380_float);
	if(var_373_float < var_380_float) {
		@irand(var_374_int, var_2_object);
		@Speak("attack" + (var_374_int + 1));
		int var_385_int;
		func_935(var_385_int);
		var_5_object = var_385_int;
	}
}


// @pe
void func_1146(object var_0_object, object var_1_object, int var_25_int)
{
	if(var_25_int != 0)
		return 0;
	bool var_28_bool;
	func_1184(var_28_bool, var_1_object);
	if(!var_28_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_127(object var_2_object, string var_99_string)
{
	bool var_100_bool;
	func_2333(var_100_bool);
	if(!var_100_bool) //@nz
		return 0;
	if(var_99_string == var_2_object)
		return 0;
	string var_103_string; bool var_104_bool;
	var_99_string = var_103_string;
	if(var_99_string == "")
		var_104_bool = false;
	else
		var_104_bool = true;
	func_1910(var_103_string, var_104_bool);
	var_2_object = var_99_string;
	
}


void func_2180(int var_83_int)
{
	int var_85_int;
	@GetVariable("branch", var_85_int);
	if(var_85_int == 0) {
		var_83_int = 1;
		return 2;
	EMIT "GOTO 0x893";
	}
	if(var_85_int == 1) {
		var_83_int = 2;
		return 2;
	}
	var_83_int = 3;
}


void func_1925(object var_151_object)
{
	float var_154_float;
	var_151_object->GetEyesHeight(var_154_float);
	cvector var_155_cvector = [0.0, 0.0, 0.0];
	var_156_float = GetByIndex(var_155_cvector, 1);
	var_154_float = var_156_float;
	SetByIndex(var_155_cvector, 1) = var_156_float;
	@LookAsync(var_151_object, "head", var_155_cvector);
}


void func_1670(object var_34_object)
{
	string var_48_string;
	if(var_34_object == null)
		return 14;
	bool var_42_bool;
	@IsDead(var_42_bool);
	if(var_42_bool != 0)
		return 14;
	int var_43_int;
	@GetSecondaryAnimationType(var_43_int);
	if(var_43_int < 0)
		return 14;
	cvector var_44_cvector;
	var_34_object->GetPosition(var_44_cvector);
	cvector var_45_cvector;
	@GetPosition(var_45_cvector);
	cvector var_46_cvector;
	@GetDirection(var_46_cvector);
	cvector var_47_cvector = var_45_cvector - var_44_cvector;
	var_53_float = GetByIndex(var_47_cvector, 0);
	var_54_float = GetByIndex(var_46_cvector, 0);
	var_56_float = GetByIndex(var_47_cvector, 2);
	var_57_float = GetByIndex(var_46_cvector, 2);
	if(((var_53_float * var_54_float) + (var_56_float * var_57_float)) >= 0)
		var_48_string = "fhit";
	else
		var_48_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_48_string + "1"), (var_48_string + "2"), -10);
	
}


void func_1168(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1936(void)
{
	bool var_20_bool;
	func_2333(var_20_bool);
	if(var_20_bool != 0)
		@lshStopSpeech();
}


void func_2197(int var_27_int)
{
	int var_29_int;
	@GetVariable("branch", var_29_int);
	var_29_int = var_27_int;
}


void func_1943(string var_113_string)
{
	bool var_122_bool; int var_123_int; bool var_124_bool; int var_125_int; bool var_126_bool; float var_127_float; cvector var_128_cvector; cvector var_129_cvector;
	@IsExisting3DSound(var_122_bool, var_113_string);
	if(!var_122_bool) { //@nz
		var_123_int = 0;

		for(;;) {
			@IsExisting3DSound(var_124_bool, (var_113_string + (var_123_int + 1)));
			if(!var_124_bool) { //@nz
				break;
			Label_1963:
				@irand(var_125_int, var_123_int);
				var_113_string += (var_125_int + 1);
	}
			@Is3DSoundLoaded(var_126_bool, var_113_string);
			if(var_126_bool != 0) {
				@GetEyesHeight(var_127_float);
				@GetDirection(var_128_cvector);
				var_129_cvector = var_128_cvector * 50;
				var_140_float = GetByIndex(var_129_cvector, 1);
				SetByIndex(var_129_cvector, 1) = (var_140_float + var_127_float);
				@PlayGlobalSound(var_113_string, var_129_cvector);
			}
		}
		var_123_int += 1;
	}
	var_135_bool = !var_123_int; //@nz
	if(var_135_bool == 0) goto Label_1963;
}


void func_919(object var_0_object)
{
	func_2096(var_0_object);
}


// @pe
void func_2203(object var_21_object)
{
	int var_22_int;
	func_2197(var_22_int);
	if(var_22_int == 1)
		@WorkWithCorpse(var_21_object);
	else
		@Barter(var_21_object);
	
}


void func_924(int var_468_int)
{
	var_468_int = 0;
}


void func_926(void)
{
	func_1943("attack_stay");
}


// @pe
void func_1184(bool var_185_bool, object var_186_object)
{
	object var_188_object;
	var_186_object = var_188_object;
	bool var_187_bool;
	func_1646(var_187_bool, var_188_object);
	var_187_bool = var_185_bool;
}


// @pe
void func_931(void)
{
}


void func_933(bool var_493_bool)
{
	var_493_bool = true;
}


void func_1191(string var_203_string)
{
	var_203_string = "walk";
}


void func_2216(string var_33_string)
{
	object var_37_object;
	@CreateInvItem(var_37_object);
	var_37_object->SetItemName(var_33_string);
	var_37_object->SetProperty("Organ", 1);
	int var_38_int;
	var_37_object->GetItemID(var_38_int);
	bool var_39_bool;
	@AddItem(var_39_bool, var_37_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_1193(string var_204_string)
{
	var_204_string = "run";
}


void func_935(int var_385_int)
{
	var_385_int = 1;
}


// @pe
void func_1195(object var_89_object)
{
	object var_90_object;
	var_89_object = var_90_object;
	func_1218(var_90_object);
	@SetRTEnvelope(50, 40);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_937(float var_380_float)
{
	var_380_float = 0.5;
}


void func_939(object var_2_object, bool var_134_bool, object var_135_object, float var_136_float, float var_137_float, bool var_138_bool, bool var_139_bool)
{
	object var_147_object;
	func_2096(var_147_object);
	@SetTimer(1, 5);
	bool var_145_bool;
	@CanSee(var_145_bool, var_147_object);
	if(var_145_bool != 0) {
		var_2_object = true;
		object var_151_object;
		var_135_object = var_151_object;
		func_1925(var_151_object);
	} else {
		var_2_object = false;
	}
	bool var_158_bool; object var_159_object;
	func_1493(var_158_bool, var_159_object);
	if(var_158_bool != 0) {
		object var_162_object;
		func_1984(var_162_object);
		@SendPlayerEnemy(var_159_object, var_162_object);
	}
	bool var_163_bool; object var_164_object; float var_165_float; float var_166_float; bool var_167_bool; bool var_168_bool;
	var_135_object = var_164_object;
	var_136_float = var_165_float;
	var_137_float = var_166_float;
	var_138_bool = var_167_bool;
	var_139_bool = var_168_bool;
	bool var_146_bool;
	func_1044(var_145_bool, var_146_bool, var_163_bool, var_164_object, var_165_float, var_166_float, var_167_bool, var_168_bool);
	var_163_bool = var_146_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_146_bool = var_134_bool;
	
}


void func_1714(object var_21_object, int var_22_int, float var_23_float)
{
	cvector var_33_cvector; object var_34_object; int var_35_int; bool var_36_bool; cvector var_37_cvector; cvector var_38_cvector;
	bool var_42_bool = false;
	bool var_43_bool = false;
	if(var_21_object != 0) {
		if(var_22_int != 4)
			var_43_bool = true;
	}
	if(var_43_bool != 0) {
		if(var_22_int != 5)
			var_42_bool = true;
	}
	if(var_42_bool != 0) {
		cvector var_49_cvector; cvector var_50_cvector;
		cvector var_51_cvector; object var_52_object;
		var_21_object = var_52_object;
		func_1486(var_51_cvector, var_52_object);
		var_51_cvector = var_50_cvector;
		func_1990(var_49_cvector, var_50_cvector);
		var_49_cvector = var_33_cvector;
		@CreateVectorVector(var_34_object);
		var_35_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_35_int), var_36_bool, var_37_cvector, var_38_cvector);
			if(!var_36_bool) { //@nz
				break;
			Label_1776:
				var_34_object = null;
	}
			object var_111_object;
			var_21_object = var_111_object;
			func_1670(var_111_object);
		}
		if((var_38_cvector | var_33_cvector) >= 0.70710677)
			var_34_object->add(var_37_cvector);
		var_35_int += 1;
	}
	int var_39_int;
	var_34_object->size(var_39_int);
	if(var_39_int == 0) goto Label_1776;
	int var_40_int;
	@irand(var_40_int, var_39_int);
	cvector var_41_cvector;
	var_34_object->get(var_41_cvector, var_40_int);
	object var_66_object; int var_67_int; float var_68_float; cvector var_69_cvector; cvector var_70_cvector;
	var_21_object = var_66_object;
	var_22_int = var_67_int;
	var_23_float = var_68_float;
	var_41_cvector = var_69_cvector;
	var_70_cvector = -var_33_cvector;
	func_1782(var_68_float, var_69_cvector, var_70_cvector);
}


void func_2233(void)
{
	int var_27_int;
	func_2197(var_27_int);
	if(var_27_int != 1) {
	}
	func_2216("liver");
	func_2216("kidney");
	func_2216("heart");
	func_2216("blood");
}


void func_1466(void)
{
	@StopGroup0();
	@Stop();
}


void func_1471(void)
{
}


void func_1984(object var_86_object)
{
	object var_88_object;
	@self(var_88_object);
	var_88_object = var_86_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1472(string var_431_string, int var_432_int)
{
	if(var_432_int == 2) {
		var_431_string = "fire";
		return 0;
	EMIT "GOTO 0x5cc";
	}
	if(var_432_int == 1) {
		var_431_string = "bullet";
		return 0;
	}
	var_431_string = "phys";
}


void func_1218(object var_90_object)
{
	cvector var_101_cvector; cvector var_102_cvector; cvector var_103_cvector; cvector var_104_cvector; string var_105_string; object var_106_object; bool var_107_bool; bool var_108_bool; float var_109_float; cvector var_110_cvector;
	if(var_90_object == null) {
		func_1309("fdie");
	} else {
		var_90_object->GetPosition(var_101_cvector);
		@GetPosition(var_102_cvector);
		@GetDirection(var_103_cvector);
		var_104_cvector = var_102_cvector - var_101_cvector;
		var_144_float = GetByIndex(var_104_cvector, 0);
		var_145_float = GetByIndex(var_103_cvector, 0);
		var_147_float = GetByIndex(var_104_cvector, 2);
		var_148_float = GetByIndex(var_103_cvector, 2);
		if(((var_144_float * var_145_float) + (var_147_float * var_148_float)) >= 0)
			var_105_string = "fdie";
		else
			var_105_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_90_object = var_106_object;
		var_155_bool = IsFuncExist(var_90_object, "GetScriptProperty", 2);
		if(var_155_bool != 0) {
			var_90_object->HasScriptProperty(var_107_bool, "Owner");
			if(var_107_bool != 0) {
				var_90_object->GetScriptProperty(var_106_object, "Owner");
				if(var_106_object == null)
					var_90_object = var_106_object;
			}
		}
		var_162_bool = IsFuncExist(var_106_object, "@GetEyesHeight", 1);
		if(var_162_bool != 0) {
			var_106_object->GetEyesHeight(var_109_float);
			var_110_cvector = [0.0, 0.0, 0.0];
			var_163_float = GetByIndex(var_110_cvector, 1);
			var_109_float = var_163_float;
			SetByIndex(var_110_cvector, 1) = var_163_float;
			@LookAsync(var_90_object, "head", var_110_cvector);
			var_108_bool = true;
		} else {
			var_108_bool = false;

		}
		string var_165_string;
		var_105_string = var_165_string;
		func_1943(var_165_string);
		@PlayAnimation("all", var_105_string);
		@WaitForAnimEnd();
		if(var_108_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_105_string);
		@RemoveEnvelope();
		var_106_object = null;
	}
	
}


void func_1990(cvector var_49_cvector, cvector var_50_cvector)
{
	float var_58_float = sqrt(var_50_cvector | var_50_cvector);
	if(var_58_float < 0.000001)
		var_49_cvector = [0.0, 0.0, 0.0];
	var_49_cvector = var_50_cvector / var_58_float;
}


void func_717(bool var_494_bool, float var_495_float)
{
	float var_498_float; bool var_499_bool;
	@rand(var_498_float);
	if(var_498_float < var_495_float) {

		for(;;) {
			@IsAnimationPlaying(var_499_bool);
			if(!var_499_bool) { //@nz
			} else {
				bool var_502_bool;
				func_815(var_502_bool);
				if(var_502_bool != 0) {
					var_494_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_494_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_919(var_499_bool);
}


void func_1486(cvector var_51_cvector, object var_52_object)
{
	cvector var_55_cvector;
	@GetPosition(var_55_cvector);
	cvector var_56_cvector;
	var_52_object->GetPosition(var_56_cvector);
	var_51_cvector = var_56_cvector - var_55_cvector;
}


void func_2000(float var_29_float, cvector var_30_cvector, cvector var_31_cvector)
{
	var_29_float = (var_31_cvector - var_30_cvector) | (var_31_cvector - var_30_cvector);
}


void func_2257(object var_18_object)
{
	bool var_20_bool;
	@AddItem(var_20_bool, "revolver_ammo", 0, 2);
	@AddItem(var_20_bool, "alpha_pills", 0, 2);
	func_2233();
	bool var_47_bool; object var_48_object;
	var_18_object = var_48_object;
	func_1493(var_47_bool, var_48_object);
	if(var_47_bool != 0) {
		bool var_51_bool; object var_52_object;
		var_18_object = var_52_object;
		func_2022(var_51_bool, var_52_object, -0.2);
	}
	object var_89_object;
	var_18_object = var_89_object;
	TaskCall(4);
	func_1195(var_89_object);
	TaskReturn();
}


// @pe
void func_2004(float var_441_float, float var_442_float, float var_443_float)
{
	if(var_442_float < var_443_float)
		var_442_float = var_441_float;
	else
		var_443_float = var_441_float;
	
}


void func_1493(bool var_47_bool, object var_48_object)
{
	bool var_50_bool;
	@IsPlayerActor(var_48_object, var_50_bool);
	var_50_bool = var_47_bool;
}


void func_1498(bool var_70_bool, object var_71_object, string var_72_string)
{
	var_77_bool = IsFuncExist(var_71_object, "HasProperty", 2);
	if(!var_77_bool) { //@nz
		var_70_bool = false;
		return 2;
	}
	bool var_74_bool;
	var_71_object->HasProperty(var_72_string, var_74_bool);
	var_74_bool = var_70_bool;
}


// @pe
void func_2011(float var_80_float, float var_81_float, float var_82_float, float var_83_float)
{
	if(var_81_float < var_82_float) {
		var_82_float = var_80_float;
		return 0;
	}
	if(var_81_float > var_83_float) {
		var_83_float = var_80_float;
		return 0;
	}
	var_81_float = var_80_float;
}


void func_1510(bool var_62_bool, object var_63_object, string var_64_string, float var_65_float, float var_66_float, float var_67_float)
{
	object var_71_object;
	var_63_object = var_71_object;
	string var_72_string;
	var_64_string = var_72_string;
	bool var_70_bool;
	func_1498(var_70_bool, var_71_object, var_72_string);
	if(!var_70_bool) //@nz
		var_62_bool = false;
	float var_69_float;
	var_63_object->GetProperty(var_64_string, var_69_float);
	float var_80_float; float var_82_float; float var_83_float;
	var_66_float = var_82_float;
	var_67_float = var_83_float;
	func_2011(var_80_float, (var_69_float + var_65_float), var_82_float, var_83_float);
	var_63_object->SetProperty(var_64_string, var_80_float);
	var_62_bool = true;
}


// @pe
void func_2022(bool var_51_bool, object var_52_object, float var_53_float)
{
	if(!var_52_object) { //@nz
		var_51_bool = false;
		return 0;
	}
	if(var_53_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_53_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_58_float;
		var_53_float = var_58_float;
		func_2074(var_58_float);
		bool var_62_bool; object var_63_object; float var_65_float;
		var_52_object = var_63_object;
		var_53_float = var_65_float;
		func_1510(var_62_bool, var_63_object, "reputation", var_65_float, (float)0, (float)1);
		var_51_bool = true;
		return 0;

	}
	
	var_51_bool = false;
}


void func_744(object var_0_object, bool var_291_bool, float var_292_float)
{
	bool var_298_bool; cvector var_299_cvector; cvector var_300_cvector; cvector var_301_cvector; float var_302_float;
	
	for(;;) {
		@IsAnimationPlaying(var_298_bool);
		if(!var_298_bool) //@nz
			break;
		bool var_304_bool;
		func_815(var_304_bool);
		if(var_304_bool != 0) {
			var_291_bool = true;
			return 10;
		}
		bool var_347_bool;
		func_1646(var_347_bool, var_0_object);
		if(!var_347_bool) { //@nz
			var_291_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_299_cvector); //@t
		@GetPFPosition(var_300_cvector);
		var_301_cvector = var_299_cvector - var_300_cvector;
		var_302_float = var_301_cvector | var_301_cvector;
		if(var_302_float < (var_292_float * var_292_float)) {
			bool var_352_bool; float var_353_float;
			var_292_float = var_353_float;
			func_580(var_301_cvector, var_302_float, var_352_bool, var_353_float);
			var_291_bool = true;
			return 10;
		}
		@sync();
	}
	func_919(var_302_float);
	var_291_bool = false;
}


void func_1002(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1168(var_17_bool);
}


void func_1782(object var_23_object, cvector var_26_cvector, cvector var_27_cvector)
{
	object var_30_object;
	@GetScene(var_30_object);
	object var_31_object;
	@AddActorByType(var_31_object, "scripted", var_30_object, var_26_cvector, var_27_cvector, "blood_dir.xml");
	object var_34_object;
	var_23_object = var_34_object;
	func_1670(var_34_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_506(object var_1_object, object var_2_object, bool var_4_bool)
{
	bool var_59_bool; bool var_60_bool; cvector var_61_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_59_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_59_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_60_bool, ("attack" + (var_2_object + 1)));
			if(!var_60_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_61_cvector, "all", "bjump");
		var_75_float = GetByIndex(var_61_cvector, 2);
		var_4_bool = -var_75_float;

	}
}


void func_1532(float var_403_float, object var_404_object, float var_405_float, int var_406_int)
{
	int var_416_int; int var_418_int;
	object var_423_object;
	var_404_object = var_423_object;
	bool var_422_bool;
	func_1498(var_422_bool, var_423_object, "health");
	if(!var_422_bool) //@nz
		var_403_float = 0.0;
	bool var_426_bool; object var_427_object;
	func_1498(var_426_bool, var_427_object, "armor");
	if(!var_426_bool) //@nz
		var_416_int = 0;
	else
		var_427_object->GetProperty("armor", var_416_int);
	string var_431_string; int var_432_int;
	var_406_int = var_432_int;
	func_1472(var_431_string, var_432_int);
	string var_417_string = "armor_" + var_431_string;
	bool var_437_bool; object var_438_object; string var_439_string;
	var_404_object = var_438_object;
	func_1498(var_437_bool, var_438_object, var_439_string);
	if(!var_437_bool) //@nz
		var_418_int = 0;
	else
		var_404_object->GetProperty(var_439_string, var_418_int);

	float var_441_float;
	func_2004(var_441_float, ((var_416_int + var_418_int) / 100.0), (float)1);
	float var_419_float;
	var_441_float = var_419_float;
	float var_420_float;
	var_404_object->GetProperty("health", var_420_float);
	float var_421_float = var_405_float * (1 - var_419_float);
	float var_451_float;
	func_2011(var_451_float, (var_420_float - var_421_float), (float)0, (float)1);
	var_404_object->SetProperty("health", var_451_float);
	bool var_457_bool; object var_458_object;
	var_404_object = var_458_object;
	func_1493(var_457_bool, var_458_object);
	if(var_457_bool != 0) {
		float var_459_float = -var_421_float;
		func_2057(var_459_float);
	}
	var_421_float = var_403_float;
	
}



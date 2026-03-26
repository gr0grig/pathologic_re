// @IMPORTS: GetProperty/2,SetTimer/2,PlayGlobalSound/2,PlayLoopedGlobalSound/3,Trace/1,SetDeathState/0,SetProperty/2,PlaceOnGround/0,GetPosition/1,EnableGeometry/2,FindGeometry/2,rand/2,CreateFire/3,CreateSmoke/3,Hold/0,KillTimer/1
// @STRINGS: W:fire|A:Fade|W:fire_begin|A:FadeIn|W:fire_loop|A:FadeOut|W:loading|W:disease|W:corpse|A:SetRotationY|W:corpse1|A:AddSource|A:Enable|W:smoke|A:SetOpacity
// @GLOBALS: 0:object:,1:object:,2:object:,3:bool:,4:bool:
// @RUN_OP: 0x4c
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_16: op=0x0 vars=object,string
// @EVENT_7: op=0xa9 vars=int
// @PE: 0xa9

task_0_event_16(var_0_object, var_1_string)
{
	var_2_float = 0; var_3_object = Obj(); var_4_float = 0; var_5_object = Obj();
	var_7_bool = var_1_string == "fire";
	if(var_7_bool != 0) {
		GetProperty("fire", var_4_float);
		var_10_bool = var_4_float > (float)0.0;
		if(var_10_bool != 0) {
			var_11_bool = GlobalVars[3];
			var_12_bool = var_11_bool == 0; //@nz
			if(var_12_bool != 0) {
				var_13_bool = GlobalVars[3];
				GlobalVars[3] = (bool)1;
				var_14_object = GlobalVars[0];
				@@var_14_object:Fade((bool)0);
				var_16_object = GlobalVars[1];
				@@var_16_object:Fade((bool)0);
				var_18_bool = GlobalVars[4];
				var_19_bool = var_18_bool == 0; //@nz
				if(var_19_bool != 0) {
					var_20_bool = GlobalVars[4];
					GlobalVars[4] = (bool)1;
					SetTimer((int)81, (int)3);
				}
				PlayGlobalSound("fire_begin", CVector(0.0, 10.0, 0.0));
				var_25_object = GlobalVars[2];
				var_26_bool = var_25_object != 0; //@nn
				if(var_26_bool != 0) {
					var_27_object = GlobalVars[2];
					@@var_27_object:FadeIn((float)1.5);
				} else {
					PlayLoopedGlobalSound(var_5_object, "fire_loop", CVector(0.0, 10.0, 0.0));
					var_31_object = GlobalVars[2];
					var_5_object = var_31_object;
					GlobalVars[2] = var_31_object;
					var_5_object = 0;
		}
				var_32_bool = GlobalVars[3];
				if(var_32_bool == 0) goto Label_75;
				var_33_bool = GlobalVars[3];
				GlobalVars[3] = (bool)0;
				var_34_object = GlobalVars[0];
				@@var_34_object:Fade((bool)1);
				var_36_object = GlobalVars[1];
				@@var_36_object:Fade((bool)1);
				var_38_object = GlobalVars[2];
				var_39_bool = var_38_object != 0; //@nn
				if(var_39_bool == 0) goto Label_75;
				var_40_object = GlobalVars[2];
				@@var_40_object:FadeOut((float)1.5);
			}
		}
		goto Label_75;
	}
Label_75:
	return 4;
	
}


task_0_event_7(var_0_int)
{
	var_1_int = 0;
	var_0_int = var_1_int;
	func_175(var_1_int);
	return 0;
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_cvector = CVector(0,0,0); var_4_cvector = CVector(0,0,0); var_5_cvector = CVector(0,0,0); var_6_float = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_float = 0;
	Trace("loading");
	var_15_bool = GlobalVars[3];
	GlobalVars[3] = (bool)0;
	var_16_bool = GlobalVars[4];
	GlobalVars[4] = (bool)0;
	SetDeathState();
	SetProperty("disease", (float)0.20000000298023224);
	PlaceOnGround();
	GetPosition(var_10_cvector);
	var_11_cvector = CVector(0.0, 1.0, 0.0);
	var_12_cvector = CVector(0.0, 0.0, 0.0);
	EnableGeometry("corpse", (bool)1);
	FindGeometry("corpse", var_9_object);
	rand(var_13_float, (float)6.2831854820251465);
	@@var_9_object:SetRotationY(var_13_float);
	FindGeometry("corpse1", var_9_object);
	@@var_9_object:SetRotationY(var_13_float);
	CreateFire(var_7_object, "fire", (int)50);
	@@var_7_object:AddSource(CVector(0.0, 0.0, 0.0), var_11_cvector);
	@@var_7_object:AddSource(CVector(0.0, 0.0, 50.0), var_11_cvector);
	@@var_7_object:AddSource(CVector(0.0, 0.0, -50.0), var_11_cvector);
	@@var_7_object:AddSource(CVector(50.0, 0.0, 0.0), var_11_cvector);
	@@var_7_object:AddSource(CVector(-50.0, 0.0, 0.0), var_11_cvector);
	@@var_7_object:Enable();
	@@var_7_object:Fade();
	CreateSmoke(var_8_object, "smoke", (int)20);
	@@var_8_object:AddSource(CVector(0.0, 0.0, 0.0), var_11_cvector);
	@@var_8_object:SetOpacity((float)0.699999988079071);
	@@var_8_object:Enable();
	@@var_8_object:Fade();
	var_35_object = GlobalVars[0];
	var_7_object = var_35_object;
	GlobalVars[0] = var_35_object;
	var_36_object = GlobalVars[1];
	var_8_object = var_36_object;
	GlobalVars[1] = var_36_object;
	SetTimer((int)80, (int)1);
	
Label_162:
	Hold();
	goto Label_162;
}
EMIT "Return(); Pop(14)";
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";
EMIT "Stack[-7] = 0";


func_175(var_1_int)
{
	var_2_float = 0; var_3_float = 0;
	var_5_bool = var_1_int == (int)80;
	if(var_5_bool != 0) {
		GetProperty("fire", var_3_float);
		var_8_bool = var_3_float <= (float)0.009999999776482582;
		if(var_8_bool != 0) {
		} else {
			(float)0 = (float)0 - (float)0.009999999776482582;
			var_12_bool = var_3_float < (int)0;
			if(var_12_bool == 0) goto Label_193;
			var_3_float = 0;
	}
		var_14_bool = var_1_int == (int)81;
		if(var_14_bool == 0) goto Label_211;
		KillTimer((int)81);
		EnableGeometry("corpse", (bool)0);
		EnableGeometry("corpse1", (bool)1);
	}
Label_193:
	SetProperty("fire", var_3_float);
	goto Label_211;
	
Label_211:
	return 2;
	
}



// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3698();
			if(var_37_cvector == 26042) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3913();
			}
			if(var_37_cvector == 26045) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_3919();
			}
			if(var_37_cvector == 44014) {
				object var_91_object; object var_92_object;
				var_91_object = var_1_object;
				var_92_object = var_0_object;
				func_3919();
			}
			if(var_37_cvector == 44013) {
				object var_95_object; object var_96_object;
				var_95_object = var_1_object;
				var_96_object = var_0_object;
				func_3919();
			}
			if(var_36_bool == 26041) {
				func_158(var_37_cvector, "Neutral");
				var_0_object->SetMessage(524702); //@t
				var_0_object->ClearReplies(); //@t
				bool var_117_bool = false;
				bool var_118_bool;
				func_4146(var_1_object);
				if(var_118_bool != 0) {
					bool var_126_bool;
					func_4158(var_1_object);
					if(var_126_bool != 0)
						var_117_bool = true;
				}
				if(var_117_bool != 0)
					var_0_object->AddReply(524703, 28087, 26042); //@t
				var_0_object->AddReply(524704, -1, 26043); //@t
				var_0_object->AddReply(541803, -1, 44015); //@t
				return 0;
			}
			if(var_36_bool == 28087) {
				func_158(var_37_cvector, "Doubt");
				var_0_object->SetMessage(526807); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526808, 28089, 28088); //@t
				var_0_object->AddReply(541797, 28092, 44007); //@t
				return 0;
			}
			if(var_36_bool == 28089) {
				func_158(var_37_cvector, "Doubt");
				var_0_object->SetMessage(526809); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526810, 26044, 28090); //@t
				var_0_object->AddReply(526811, 28092, 28091); //@t
				return 0;
			}
			if(var_36_bool == 28092) {
				func_158(var_37_cvector, "Agression");
				var_0_object->SetMessage(526812); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526813, 28095, 28093); //@t
				var_0_object->AddReply(526814, 28095, 28094); //@t
				return 0;
			}
			if(var_36_bool == 28095) {
				func_158(var_37_cvector, "Agression");
				var_0_object->SetMessage(526815); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526816, 26044, 28097); //@t
				return 0;
			}
			if(var_36_bool == 26044) {
				func_158(var_37_cvector, "Doubt");
				var_0_object->SetMessage(524705); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541798, 44010, 44009); //@t
				return 0;
			}
			if(var_36_bool == 44010) {
				func_158(var_37_cvector, "Agression");
				var_0_object->SetMessage(541799); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526817, 28100, 28099); //@t
				var_0_object->AddReply(541800, 28102, 44011); //@t
				return 0;
			}
			if(var_36_bool == 28100) {
				func_158(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526818); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526819, 28102, 28101); //@t
				var_0_object->AddReply(541801, -1, 44013); //@t
				return 0;
			}
			if(var_36_bool == 28102) {
				func_158(var_37_cvector, "Agression");
				var_0_object->SetMessage(526820); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524706, -1, 26045); //@t
				var_0_object->AddReply(541802, -1, 44014); //@t
				return 0;
			}
			var_3_string = true;
			bool var_215_bool;
			func_3888(var_215_bool);
			if(var_215_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb5";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3698();
			if(var_37_cvector == 26628) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3938();
			}
			if(var_36_bool == 26625) {
				func_591(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525257); //@t
				var_0_object->ClearReplies(); //@t
				bool var_89_bool;
				func_4182(var_1_object);
				if(var_89_bool != 0)
					var_0_object->AddReply(525258, 30607, 26626); //@t
				var_0_object->AddReply(525261, -1, 26629); //@t
				return 0;
			}
			if(var_36_bool == 30607) {
				func_591(var_37_cvector, "Doubt");
				var_0_object->SetMessage(529158); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529159, 30609, 30608); //@t
				var_0_object->AddReply(529161, 30611, 30610); //@t
				return 0;
			}
			if(var_36_bool == 30611) {
				func_591(var_37_cvector, "Sorrow");
				var_0_object->SetMessage(529162); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529163, 26627, 30612); //@t
				return 0;
			}
			if(var_36_bool == 30609) {
				func_591(var_37_cvector, "Smile");
				var_0_object->SetMessage(529160); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529164, 26627, 30613); //@t
				return 0;
			}
			if(var_36_bool == 26627) {
				func_591(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525259); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525260, -1, 26628); //@t
				var_0_object->AddReply(529166, -1, 30616); //@t
				return 0;
			}
			var_3_string = true;
			bool var_137_bool;
			func_3888(var_137_bool);
			if(var_137_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x266";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3698();
			if(var_36_bool == 26827) {
				func_889(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525471); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525472, 27550, 26828); //@t
				var_0_object->AddReply(526276, 28085, 27552); //@t
				return 0;
			}
			if(var_36_bool == 28085) {
				func_889(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526805); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526806, -1, 28086); //@t
				return 0;
			}
			if(var_36_bool == 27550) {
				func_889(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526274); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526275, -1, 27551); //@t
				return 0;
			}
			var_3_string = true;
			bool var_80_bool;
			func_3888(var_80_bool);
			if(var_80_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x390";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3698();
			if(var_37_cvector == 27656) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3998();
				object var_105_object; object var_106_object;
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_4081();
				object var_109_object = var_1_object;
				func_4035(var_0_object);
				object var_133_object = var_1_object;
				func_3890(var_0_object);
			}
			if(var_37_cvector == 27454) {
				object var_161_object; object var_162_object;
				var_161_object = var_1_object;
				var_162_object = var_0_object;
				func_3979();
			}
			if(var_37_cvector == 27456) {
				object var_167_object; object var_168_object;
				var_167_object = var_1_object;
				var_168_object = var_0_object;
				func_3947();
			}
			if(var_37_cvector == 27460) {
				object var_190_object = var_1_object;
				func_3985(var_0_object);
			}
			if(var_37_cvector == 27660) {
				object var_208_object; object var_209_object;
				var_208_object = var_1_object;
				var_209_object = var_0_object;
				func_3998();
				object var_210_object = var_1_object;
				func_4035(var_0_object);
				object var_212_object; object var_213_object;
				var_212_object = var_1_object;
				var_213_object = var_0_object;
				func_4081();
				object var_214_object = var_1_object;
				func_3890(var_0_object);
			}
			if(var_37_cvector == 27669) {
				object var_218_object; object var_219_object;
				var_218_object = var_1_object;
				var_219_object = var_0_object;
				func_4046();
				object var_231_object = var_1_object;
				func_4056(var_0_object);
				object var_249_object; object var_250_object;
				var_249_object = var_1_object;
				var_250_object = var_0_object;
				func_4075();
			}
			if(var_37_cvector == 44880) {
				object var_255_object; object var_256_object;
				var_255_object = var_1_object;
				var_256_object = var_0_object;
				func_4046();
			}
			if(var_36_bool == 27653) {
				bool var_259_bool;
				func_4241(var_1_object);
				if(var_259_bool != 0) {
					object var_265_object; object var_266_object;
					var_265_object = var_1_object;
					var_266_object = var_0_object;
					func_4029();
					func_1216(var_37_cvector, "Neutral");
					var_0_object->SetMessage(526373); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526374, 27655, 27654); //@t
					var_0_object->AddReply(528676, 27655, 30089); //@t
					return 0;
				}
				func_1216(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526173); //@t
				var_0_object->ClearReplies(); //@t
				bool var_295_bool = false;
				bool var_296_bool;
				func_4205(var_1_object);
				if(var_296_bool != 0) {
					bool var_302_bool;
					func_4217(var_1_object);
					if(var_302_bool != 0)
						var_295_bool = true;
				}
				if(var_295_bool != 0)
					var_0_object->AddReply(526174, 27455, 27454); //@t
				bool var_311_bool = false;
				bool var_312_bool;
				func_4205(var_1_object);
				if(var_312_bool != 0) {
					bool var_314_bool;
					func_4194(var_314_bool, var_1_object);
					if(var_314_bool != 0)
						var_311_bool = true;
				}
				if(var_311_bool != 0)
					var_0_object->AddReply(526178, 27459, 27458); //@t
				bool var_326_bool;
				func_4229(var_1_object);
				if(var_326_bool != 0)
					var_0_object->AddReply(526378, 27659, 27658); //@t
				bool var_335_bool;
				func_4253(var_1_object);
				if(var_335_bool != 0)
					var_0_object->AddReply(526387, 44876, 27667); //@t
				var_0_object->AddReply(526181, -1, 27461); //@t
				var_0_object->AddReply(528675, -1, 30088); //@t
				return 0;
			}
			if(var_36_bool == 44876) {
				func_1216(var_37_cvector, "Sorrow");
				var_0_object->SetMessage(542490); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542491, 27668, 44877); //@t
				var_0_object->AddReply(542492, 27668, 44878); //@t
				return 0;
			}
			if(var_36_bool == 27668) {
				func_1216(var_37_cvector, "Smile");
				var_0_object->SetMessage(526388); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526389, -1, 27669); //@t
				var_0_object->AddReply(542493, -1, 44880); //@t
				return 0;
			}
			if(var_36_bool == 27659) {
				func_1216(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526379); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526380, -1, 27660); //@t
				return 0;
			}
			if(var_36_bool == 27459) {
				func_1216(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526179); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528687, 30103, 30102); //@t
				return 0;
			}
			if(var_36_bool == 30103) {
				func_1216(var_37_cvector, "Doubt");
				var_0_object->SetMessage(528688); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528689, 30105, 30104); //@t
				return 0;
			}
			if(var_36_bool == 30105) {
				func_1216(var_37_cvector, "Sorrow");
				var_0_object->SetMessage(528690); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528691, 30107, 30106); //@t
				var_0_object->AddReply(528697, 30113, 30112); //@t
				return 0;
			}
			if(var_36_bool == 30113) {
				func_1216(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528698); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528699, 30107, 30114); //@t
				return 0;
			}
			if(var_36_bool == 30107) {
				func_1216(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528692); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528693, 30109, 30108); //@t
				return 0;
			}
			if(var_36_bool == 30109) {
				func_1216(var_37_cvector, "Doubt");
				var_0_object->SetMessage(528694); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528702, 30118, 30117); //@t
				var_0_object->AddReply(528700, 30116, 30115); //@t
				return 0;
			}
			if(var_36_bool == 30116) {
				func_1216(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528701); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528704, 30118, 30119); //@t
				return 0;
			}
			if(var_36_bool == 30118) {
				func_1216(var_37_cvector, "Doubt");
				var_0_object->SetMessage(528703); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528695, 30111, 30110); //@t
				return 0;
			}
			if(var_36_bool == 30111) {
				func_1216(var_37_cvector, "Doubt");
				var_0_object->SetMessage(528696); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526180, -1, 27460); //@t
				return 0;
			}
			if(var_36_bool == 27455) {
				func_1216(var_37_cvector, "Sorrow");
				var_0_object->SetMessage(526175); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528685, 30101, 30100); //@t
				return 0;
			}
			if(var_36_bool == 30101) {
				func_1216(var_37_cvector, "Sorrow");
				var_0_object->SetMessage(528686); //@t
				var_0_object->ClearReplies(); //@t
				bool var_457_bool;
				func_4194(var_457_bool, var_1_object);
				if(!var_457_bool) //@nz
					var_0_object->AddReply(526176, -1, 27456); //@t
				bool var_463_bool;
				func_4194(var_463_bool, var_1_object);
				if(var_463_bool != 0)
					var_0_object->AddReply(526177, 27459, 27457); //@t
				return 0;
			}
			if(var_36_bool == 27655) {
				func_1216(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526375); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528677, 30092, 30091); //@t
				return 0;
			}
			if(var_36_bool == 30092) {
				func_1216(var_37_cvector, "Doubt");
				var_0_object->SetMessage(528678); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528679, 30094, 30093); //@t
				var_0_object->AddReply(528681, 30094, 30095); //@t
				return 0;
			}
			if(var_36_bool == 30094) {
				func_1216(var_37_cvector, "Doubt");
				var_0_object->SetMessage(528680); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528682, 30098, 30097); //@t
				return 0;
			}
			if(var_36_bool == 30098) {
				func_1216(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528683); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526376, -1, 27656); //@t
				var_0_object->AddReply(526377, -1, 27657); //@t
				return 0;
			}
			var_3_string = true;
			bool var_502_bool;
			func_3888(var_502_bool);
			if(var_502_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4d7";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3698();
			if(var_37_cvector == 28885) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_4066();
				object var_69_object; object var_70_object;
				var_69_object = var_1_object;
				var_70_object = var_0_object;
				func_3906();
			}
			if(var_36_bool == 28512) {
				func_1983(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527204); //@t
				var_0_object->ClearReplies(); //@t
				bool var_101_bool;
				func_4265(var_1_object);
				if(var_101_bool != 0)
					var_0_object->AddReply(527205, 28514, 28513); //@t
				var_0_object->AddReply(527210, -1, 28518); //@t
				var_0_object->AddReply(527533, -1, 28871); //@t
				return 0;
			}
			if(var_36_bool == 28514) {
				func_1983(var_37_cvector, "Sorrow");
				var_0_object->SetMessage(527206); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527207, 28516, 28515); //@t
				return 0;
			}
			if(var_36_bool == 28516) {
				func_1983(var_37_cvector, "Doubt");
				var_0_object->SetMessage(527208); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527534, 28874, 28872); //@t
				var_0_object->AddReply(527535, 28874, 28873); //@t
				return 0;
			}
			if(var_36_bool == 28874) {
				func_1983(var_37_cvector, "Doubt");
				var_0_object->SetMessage(527536); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527537, 28876, 28875); //@t
				var_0_object->AddReply(527539, 28876, 28878); //@t
				return 0;
			}
			if(var_36_bool == 28876) {
				func_1983(var_37_cvector, "Doubt");
				var_0_object->SetMessage(527538); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527540, 28881, 28880); //@t
				return 0;
			}
			if(var_36_bool == 28881) {
				func_1983(var_37_cvector, "Sorrow");
				var_0_object->SetMessage(527541); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527542, 28883, 28882); //@t
				return 0;
			}
			if(var_36_bool == 28883) {
				func_1983(var_37_cvector, "Sorrow");
				var_0_object->SetMessage(527543); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527209, 28884, 28517); //@t
				var_0_object->AddReply(527546, 28884, 28886); //@t
				return 0;
			}
			if(var_36_bool == 28884) {
				func_1983(var_37_cvector, "Smile");
				var_0_object->SetMessage(527544); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527545, -1, 28885); //@t
				return 0;
			}
			var_3_string = true;
			bool var_176_bool;
			func_3888(var_176_bool);
			if(var_176_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x7d6";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3698();
			if(var_37_cvector == 41268) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_4102();
			}
			if(var_37_cvector == 41271) {
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_object;
				func_4093();
			}
			if(var_37_cvector == 41278) {
				object var_91_object; object var_92_object;
				var_91_object = var_1_object;
				var_92_object = var_0_object;
				func_4093();
			}
			if(var_36_bool == 41261) {
				bool var_95_bool = false;
				bool var_96_bool;
				func_4301(var_1_object);
				if(var_96_bool != 0) {
					bool var_102_bool;
					func_4134(var_1_object);
					if(!var_102_bool) //@nz
						var_95_bool = true;
				}
				if(var_95_bool != 0) {
					object var_109_object; object var_110_object;
					var_109_object = var_1_object;
					var_110_object = var_0_object;
					func_4087();
					object var_113_object; object var_114_object;
					var_113_object = var_1_object;
					var_114_object = var_0_object;
					func_4118();
					func_2425(var_37_cvector, "Neutral");
					var_0_object->SetMessage(539318); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(541446, 45384, 43602); //@t
					var_0_object->AddReply(542944, 45384, 45383); //@t
					return 0;
				}
				object var_141_object; object var_142_object;
				var_141_object = var_1_object;
				var_142_object = var_0_object;
				func_4118();
				func_2425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539331); //@t
				var_0_object->ClearReplies(); //@t
				bool var_145_bool = false;
				bool var_146_bool = false;
				bool var_147_bool;
				func_4124(var_147_bool, var_1_object);
				if(var_147_bool != 0) {
					bool var_196_bool;
					func_4289(var_1_object);
					if(!var_196_bool) //@nz
						var_146_bool = true;
				}
				if(var_146_bool != 0) {
					bool var_203_bool;
					func_4134(var_1_object);
					if(!var_203_bool) //@nz
						var_145_bool = true;
				}
				if(var_145_bool != 0)
					var_0_object->AddReply(539332, 41277, 41276); //@t
				var_0_object->AddReply(539335, -1, 41279); //@t
				return 0;
			}
			if(var_36_bool == 41277) {
				func_2425(var_37_cvector, "Doubt");
				var_0_object->SetMessage(539333); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539334, -1, 41278); //@t
				return 0;
			}
			if(var_36_bool == 45384) {
				func_2425(var_37_cvector, "Sorrow");
				var_0_object->SetMessage(542945); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542946, 45386, 45385); //@t
				return 0;
			}
			if(var_36_bool == 45386) {
				func_2425(var_37_cvector, "Smile");
				var_0_object->SetMessage(542947); //@t
				var_0_object->ClearReplies(); //@t
				bool var_230_bool;
				func_4170(var_1_object);
				if(var_230_bool != 0)
					var_0_object->AddReply(542955, 45398, 45395); //@t
				bool var_239_bool;
				func_4277(var_1_object);
				if(var_239_bool != 0)
					var_0_object->AddReply(542957, 45396, 45397); //@t
				var_0_object->AddReply(542951, 45402, 45391); //@t
				return 0;
			}
			if(var_36_bool == 45402) {
				func_2425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(542961); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542962, 43611, 45403); //@t
				var_0_object->AddReply(542963, -1, 45404); //@t
				return 0;
			}
			if(var_36_bool == 45396) {
				func_2425(var_37_cvector, "Doubt");
				var_0_object->SetMessage(542956); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542960, 45392, 45401); //@t
				return 0;
			}
			if(var_36_bool == 45392) {
				func_2425(var_37_cvector, "Doubt");
				var_0_object->SetMessage(542952); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542953, 45394, 45393); //@t
				return 0;
			}
			if(var_36_bool == 45394) {
				func_2425(var_37_cvector, "Sorrow");
				var_0_object->SetMessage(542954); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542948, 45388, 45387); //@t
				var_0_object->AddReply(542964, 45406, 45405); //@t
				return 0;
			}
			if(var_36_bool == 45388) {
				func_2425(var_37_cvector, "Sorrow");
				var_0_object->SetMessage(542949); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542950, 45406, 45389); //@t
				return 0;
			}
			if(var_36_bool == 45406) {
				func_2425(var_37_cvector, "Smile");
				var_0_object->SetMessage(542965); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542966, 43611, 45407); //@t
				var_0_object->AddReply(542967, 45410, 45408); //@t
				return 0;
			}
			if(var_36_bool == 45410) {
				func_2425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(542968); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542969, 45412, 45411); //@t
				return 0;
			}
			if(var_36_bool == 45412) {
				func_2425(var_37_cvector, "Sorrow");
				var_0_object->SetMessage(542970); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542971, 43611, 45413); //@t
				return 0;
			}
			if(var_36_bool == 43611) {
				func_2425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(541455); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541456, 41267, 43612); //@t
				return 0;
			}
			if(var_36_bool == 41267) {
				bool var_325_bool;
				func_4124(var_325_bool, var_1_object);
				if(!var_325_bool) { //@nz
					func_2425(var_37_cvector, "Neutral");
					var_0_object->SetMessage(539324); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(541458, 43615, 43614); //@t
					var_0_object->AddReply(541461, -1, 43617); //@t
					return 0;
				}
				bool var_336_bool;
				func_4124(var_336_bool, var_1_object);
				if(var_336_bool != 0) {
					func_2425(var_37_cvector, "Neutral");
					var_0_object->SetMessage(539327); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(539328, -1, 41271); //@t
					var_0_object->AddReply(539329, -1, 41272); //@t
					return 0;
				}
			}
			if(var_36_bool == 43615) {
				func_2425(var_37_cvector, "Neutral");
				var_0_object->SetMessage(541459); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539325, -1, 41268); //@t
				return 0;
			}
			if(var_36_bool == 45398) {
				func_2425(var_37_cvector, "Smile");
				var_0_object->SetMessage(542958); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542959, 45396, 45399); //@t
				return 0;
			}
			var_3_string = true;
			bool var_360_bool;
			func_3888(var_360_bool);
			if(var_360_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x990";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3698();
			if(var_36_int == 42554) {
				func_3068(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540546, -1, 42555); //@t
				var_0_object->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_string = true;
			bool var_66_bool;
			func_3888(var_66_bool);
			if(var_66_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc13";
	
	}

}


maintask task_14
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_3136(var_35_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, int var_36_int)
	{
		if(var_36_int == 10) {
			func_3201();
			bool var_40_bool = false;
			bool var_41_bool;
			func_3422(var_41_bool);
			if(var_41_bool != 0) {
				bool var_44_bool;
				func_3170(var_44_bool);
				if(var_44_bool != 0)
					var_40_bool = true;
			}
			if(var_40_bool != 0) {
				bool var_61_bool;
				func_3150(var_61_bool);
				if(var_61_bool != 0) {
					bool var_80_bool; object var_81_object;
					object var_82_object;
					func_3705(var_82_object);
					var_82_object = var_81_object;
					func_3572(var_80_bool, var_81_object);
				}
			} else {
				func_3165(var_36_int);
				func_3192();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_3383();
		func_3201();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		@StopGroup0();
		func_3201();
		func_3652("Neutral");
		func_3192();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, bool var_36_bool)
	{
		if(var_36_bool != 0)
			func_3192();
		else
			func_3652("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, object var_36_object)
	{
		bool var_38_bool;
		@IsOverrideActive(var_38_bool);
		if(!var_38_bool) { //@nz
			disable OnUse;
			func_3383();
			bool var_40_bool; object var_41_object;
			var_36_object = var_41_object;
			func_3413(var_40_bool, var_41_object);
			enable OnUse;
			object var_54_object;
			var_36_object = var_54_object;
			func_4635(var_54_object);
			func_3652("Neutral");
			func_3201();
			func_3192();
		}
	}

}


void func_0(object var_0_object, int var_289_int, object var_290_object)
{
	var_0_object = var_290_object;
	bool var_300_bool; object var_301_object;
	var_290_object = var_301_object;
	func_3427(var_300_bool, var_301_object, 70.0);
	if(!var_300_bool) { //@nz
		var_289_int = -2;
		return 8;
	}
	object var_296_object;
	@CreateDialog(var_296_object);
	int var_304_int;
	func_3882(var_304_int);
	var_296_object->SetNPCName(var_304_int);
	int var_305_int;
	func_3880(var_305_int);
	var_296_object->SetNPCDescription(var_305_int);
	string var_306_string;
	func_3884(var_306_string);
	var_296_object->SetPhoto(var_306_string);
	string var_307_string;
	func_3886(var_307_string);
	var_296_object->SetPhoto2(var_307_string);
	int var_308_int;
	func_4527(var_308_int);
	var_296_object->SetPlayerName(var_308_int);
	bool var_297_bool;
	@IsOverrideActive(var_297_bool);
	if(var_297_bool != 0) {
		var_289_int = -2;
		return 8;
	}
	@DoDialog(var_296_object);
	bool var_310_bool; object var_311_object;
	object var_312_object;
	func_3705(var_312_object);
	var_312_object = var_311_object;
	func_3514(var_310_bool, var_311_object);
	object var_313_object; object var_314_object;
	var_290_object = var_313_object;
	var_296_object = var_314_object;
	TaskCall(1);
	func_81(var_315_object, var_316_object, var_317_string, var_318_bool, var_313_object, var_314_object);
	TaskReturn();
	bool var_299_bool;
	var_296_object->IsDialogEnd(var_299_bool);
	
	for(;;) {
		var_361_bool = !var_299_bool; //@nz
		if(var_361_bool == 0) goto Label_70;
		@sync();
		var_296_object->IsDialogEnd(var_299_bool);
	}
	
Label_70:
	object var_362_object;
	var_290_object = var_362_object;
	func_3496();
	@StopDialog(var_296_object);
	var_296_object->GetReturnValue(-1);
	int var_298_int = var_289_int;
}
EMIT "Stack[-4] = 0";


void func_3841(int var_186_int)
{
	float var_188_float;
	@GetGameTime(var_188_float);
	var_186_int = 1 + (var_188_float / 24);
}


// @pe
void func_4102(void)
{
	int var_44_int;
	func_3721(var_44_int, "k12q01_Burah");
	if(var_44_int == 0) {
		@SetVariable("k12q01_Burah", 1);
		func_4345();
	}
}


void func_4358(void)
{
	object var_67_object;
	@CreateDiaryEntry(var_67_object, 777, 1, 541531);
	bool var_71_bool; object var_72_object;
	var_67_object = var_72_object;
	func_4449(var_71_bool, var_72_object, 318);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3850(bool var_286_bool, int var_287_int)
{
	int var_288_int;
	func_3841(var_288_int);
	var_286_bool = var_288_int == var_287_int;
}


// @pe
void func_528(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_389_object, object var_390_object)
{
	var_0_object = var_390_object;
	var_3_string = false;
	if(1 != 0) {
		func_591(var_390_object, "Neutral");
		var_0_object->SetMessage(525257); //@t
		var_0_object->ClearReplies(); //@t
		bool var_405_bool;
		func_4182(var_389_object);
		if(var_405_bool != 0)
			var_0_object->AddReply(525258, 30607, 26626); //@t
		var_0_object->AddReply(525261, -1, 26629); //@t
		goto Label_561;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x214";
	}
Label_561:
	bool var_417_bool;
	func_3888(var_417_bool);
	if(var_417_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3652(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_590;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_590:
		return 0;

	}
	
}


void func_3856(string var_60_string, int var_61_int)
{
	string var_63_string = "idle";
	if(var_61_int != 0)
		var_63_string += var_61_int;
	var_63_string = var_60_string;
}


void func_4371(void)
{
	object var_47_object;
	@CreateDiaryEntry(var_47_object, 466, 1, 527782);
	bool var_51_bool; object var_52_object;
	var_47_object = var_52_object;
	func_4449(var_51_bool, var_52_object, 461);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4118(void)
{
	@SetVariable("k12BurahVisit", 1);
}


void func_3863(int var_54_int)
{
	int var_57_int; bool var_58_bool;
	var_57_int = 0;
	
	for(;;) {
		string var_60_string; int var_61_int;
		var_57_int = var_61_int;
		func_3856(var_60_string, var_61_int);
		@HasAnimation(var_58_bool, "all", var_60_string);
		if(!var_58_bool) //@nz
			break;
		var_57_int += 1;
	}
	var_57_int = var_54_int;
}


void func_3609(bool var_173_bool, object var_174_object)
{
	bool var_182_bool; int var_183_int; string var_184_string;
	int var_186_int;
	func_3841(var_186_int);
	string var_180_string = ("d" + var_186_int) + "m";
	int var_181_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_174_object->HasProperty((var_180_string + (var_181_int + 1)), var_182_bool);
			if(!var_182_bool) { //@nz
			} else {
				var_181_int += 1;
			}
		}
		if(!var_181_int) { //@nz
			var_173_bool = false;
			return 10;
		}
		var_183_int = 0;
		if(var_181_int > 1)
			@irand(var_183_int, var_181_int);
		var_174_object->GetProperty((var_180_string + (var_183_int + 1)), var_184_string);
		bool var_205_bool; string var_206_string;
		var_184_string = var_206_string;
		func_3683(var_205_bool, var_206_string);
		var_205_bool = var_173_bool;
		return 10;

	}
}


void func_4635(object var_54_object)
{
	int var_56_int;
	@GetVariable("mt_burah", var_56_int);
	if(!var_56_int) { //@nz
		int var_59_int; object var_60_object;
		var_54_object = var_60_object;
		TaskCall(4);
		func_750(var_61_object, var_59_int, var_60_object);
		TaskReturn();
		@SetVariable("mt_burah", 1);
	}
	bool var_286_bool;
	func_3850(var_286_bool, 1);
	if(var_286_bool != 0) {
		int var_289_int; object var_290_object;
		var_54_object = var_290_object;
		TaskCall(0);
		func_0(var_291_object, var_289_int, var_290_object);
		TaskReturn();
		return 2;
	}
	bool var_363_bool;
	func_3850(var_363_bool, 2);
	if(var_363_bool != 0) {
		int var_365_int; object var_366_object;
		var_54_object = var_366_object;
		TaskCall(2);
		func_447(var_367_object, var_365_int, var_366_object);
		TaskReturn();
		return 2;
	}
	bool var_427_bool;
	func_3850(var_427_bool, 7);
	if(var_427_bool != 0) {
		int var_429_int; object var_430_object;
		var_54_object = var_430_object;
		TaskCall(6);
		func_989(var_431_object, var_429_int, var_430_object);
		TaskReturn();
		return 2;
	}
	bool var_552_bool;
	func_3850(var_552_bool, 11);
	if(var_552_bool != 0) {
		int var_554_int; object var_555_object;
		var_54_object = var_555_object;
		TaskCall(8);
		func_1834(var_556_object, var_554_int, var_555_object);
		TaskReturn();
		return 2;
	}
	bool var_619_bool;
	func_3850(var_619_bool, 12);
	if(var_619_bool != 0) {
		int var_621_int; object var_622_object;
		var_54_object = var_622_object;
		TaskCall(10);
		func_2211(var_623_object, var_621_int, var_622_object);
		TaskReturn();
		return 2;
	}
	int var_770_int; object var_771_object;
	var_54_object = var_771_object;
	TaskCall(12);
	func_2929(var_772_object, var_770_int, var_771_object);
	TaskReturn();
}


// @pe
void func_4124(bool var_703_bool, object var_704_object)
{
	object var_706_object;
	var_704_object = var_706_object;
	func_4313(var_706_object);
	bool var_705_bool;
	if(var_705_bool != 0) {
		var_703_bool = true;
		return 0;
	}
	var_703_bool = false;
}


void func_4384(void)
{
	object var_197_object;
	@CreateDiaryEntry(var_197_object, 422, 1, 526221);
	bool var_201_bool; object var_202_object;
	var_197_object = var_202_object;
	func_4449(var_201_bool, var_202_object, 416);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4134(bool var_659_bool)
{
	int var_661_int;
	func_3721(var_661_int, "game_final");
	if(var_661_int != 0) {
		var_659_bool = true;
		return 0;
	}
	var_659_bool = false;
}


void func_3880(int var_119_int)
{
	var_119_int = 515592;
}


void func_3882(int var_118_int)
{
	var_118_int = 511961;
}


void func_1834(object var_0_object, int var_554_int, object var_555_object)
{
	var_0_object = var_555_object;
	bool var_565_bool; object var_566_object;
	var_555_object = var_566_object;
	func_3427(var_565_bool, var_566_object, 70.0);
	if(!var_565_bool) { //@nz
		var_554_int = -2;
		return 8;
	}
	object var_561_object;
	@CreateDialog(var_561_object);
	int var_569_int;
	func_3882(var_569_int);
	var_561_object->SetNPCName(var_569_int);
	int var_570_int;
	func_3880(var_570_int);
	var_561_object->SetNPCDescription(var_570_int);
	string var_571_string;
	func_3884(var_571_string);
	var_561_object->SetPhoto(var_571_string);
	string var_572_string;
	func_3886(var_572_string);
	var_561_object->SetPhoto2(var_572_string);
	int var_573_int;
	func_4527(var_573_int);
	var_561_object->SetPlayerName(var_573_int);
	bool var_562_bool;
	@IsOverrideActive(var_562_bool);
	if(var_562_bool != 0) {
		var_554_int = -2;
		return 8;
	}
	@DoDialog(var_561_object);
	bool var_575_bool; object var_576_object;
	object var_577_object;
	func_3705(var_577_object);
	var_577_object = var_576_object;
	func_3514(var_575_bool, var_576_object);
	object var_578_object; object var_579_object;
	var_555_object = var_578_object;
	var_561_object = var_579_object;
	TaskCall(9);
	func_1915(var_580_object, var_581_object, var_582_string, var_583_bool, var_578_object, var_579_object);
	TaskReturn();
	bool var_564_bool;
	var_561_object->IsDialogEnd(var_564_bool);
	
	for(;;) {
		var_617_bool = !var_564_bool; //@nz
		if(var_617_bool == 0) goto Label_1904;
		@sync();
		var_561_object->IsDialogEnd(var_564_bool);
	}
	
Label_1904:
	object var_618_object;
	var_555_object = var_618_object;
	func_3496();
	@StopDialog(var_561_object);
	var_561_object->GetReturnValue(-1);
	int var_563_int = var_554_int;
}
EMIT "Stack[-4] = 0";


void func_3884(string var_120_string)
{
	var_120_string = "ui/NPC_Burah.png";
}


void func_4397(void)
{
	object var_61_object;
	@CreateDiaryEntry(var_61_object, 434, 2, 526390);
	bool var_65_bool; object var_66_object;
	var_61_object = var_66_object;
	func_4449(var_65_bool, var_66_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1070(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_453_object, object var_454_object)
{
	var_0_object = var_454_object;
	var_1_object = var_453_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_460_bool;
		func_4241(var_1_object);
		if(var_460_bool != 0) {
			object var_466_object; object var_467_object;
			var_466_object = var_1_object;
			var_467_object = var_0_object;
			func_4029();
			func_1216(var_454_object, "Neutral");
			var_0_object->SetMessage(526373); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526374, 27655, 27654); //@t
			var_0_object->AddReply(528676, 27655, 30089); //@t
		} else {
					func_1216(var_454_object, "Neutral");
					var_0_object->SetMessage(526173); //@t
					var_0_object->ClearReplies(); //@t
					bool var_495_bool = false;
					bool var_496_bool;
					func_4205(var_1_object);
					if(var_496_bool != 0) {
						bool var_502_bool;
						func_4217(var_1_object);
						if(var_502_bool != 0)
							var_495_bool = true;
					}
					if(var_495_bool != 0)
						var_0_object->AddReply(526174, 27455, 27454); //@t
					bool var_511_bool = false;
					bool var_512_bool;
					func_4205(var_1_object);
					if(var_512_bool != 0) {
						bool var_514_bool;
						func_4194(var_514_bool, var_1_object);
						if(var_514_bool != 0)
							var_511_bool = true;
					}
					if(var_511_bool != 0)
						var_0_object->AddReply(526178, 27459, 27458); //@t
					bool var_526_bool;
					func_4229(var_1_object);
					if(var_526_bool != 0)
						var_0_object->AddReply(526378, 27659, 27658); //@t
					bool var_535_bool;
					func_4253(var_1_object);
					if(var_535_bool != 0)
						var_0_object->AddReply(526387, 44876, 27667); //@t
					var_0_object->AddReply(526181, -1, 27461); //@t
					var_0_object->AddReply(528675, -1, 30088); //@t
		}
	}
	for(;;) {
		bool var_485_bool;
		func_3888(var_485_bool);
		if(var_485_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3652(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1215;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1215:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x432";


void func_3886(string var_121_string)
{
	var_121_string = "ui/NPC_Burah_b.png";
}


void func_3888(bool var_113_bool)
{
	var_113_bool = true;
}


// @pe
void func_4146(bool var_330_bool)
{
	int var_332_int;
	func_3721(var_332_int, "k1q01LaskaGotoBurah");
	if(var_332_int != 0) {
		var_330_bool = true;
		return 0;
	}
	var_330_bool = false;
}


// @pe
void func_3890(object var_134_object)
{
	object var_138_object;
	func_4477(var_138_object);
	object var_135_object;
	var_138_object = var_135_object;
	func_4494(var_135_object, "pt_map_burah_home", (float)2);
	object var_158_object;
	func_4477(var_158_object);
	var_134_object->ShowMap(var_158_object);
}


void func_3381(bool var_74_bool)
{
	var_74_bool = true;
}


void func_3383(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_4410(void)
{
	object var_84_object;
	@CreateDiaryEntry(var_84_object, 435, 2, 526391);
	bool var_88_bool; object var_89_object;
	var_84_object = var_89_object;
	func_4449(var_88_bool, var_89_object, 434);
}
EMIT "Stack[-1] = 0";


void func_3388(float var_51_float, object var_52_object)
{
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	cvector var_57_cvector;
	var_52_object->GetPosition(var_57_cvector);
	var_51_float = (var_57_cvector - var_56_cvector) | (var_57_cvector - var_56_cvector);
}


// @pe
void func_4158(bool var_338_bool)
{
	int var_340_int;
	func_3721(var_340_int, "ook1Burah1");
	if(var_340_int == 0) {
		var_338_bool = true;
		return 0;
	}
	var_338_bool = false;
}


// @pe
void func_831(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_226_object, object var_227_object)
{
	var_0_object = var_227_object;
	var_1_object = var_226_object;
	var_3_string = false;
	if(1 != 0) {
		func_889(var_227_object, "Neutral");
		var_0_object->SetMessage(525471); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525472, 27550, 26828); //@t
		var_0_object->AddReply(526276, 28085, 27552); //@t
		goto Label_859;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x343";
	}
Label_859:
	bool var_257_bool;
	func_3888(var_257_bool);
	if(var_257_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3652(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_888;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_888:
		return 0;

	}
	
}


void func_3136(object var_0_object)
{
	bool var_36_bool;
	func_3422(var_36_bool);
	if(!var_36_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_3312();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_3906(void)
{
	func_3737("boiny@door1", false);
}


void func_3652(string var_259_string)
{
	bool var_263_bool; float var_264_float; float var_265_float;
	@lshHasAnimation(var_263_bool, var_259_string);
	if(var_263_bool != 0) {
		@lshGetAnimTimes(var_259_string, var_264_float, var_265_float);
		@lshPlayAnimation(var_264_float, var_265_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_259_string);
	}
	
}


void func_3396(object var_238_object, string var_239_string, int var_240_int)
{
	int var_242_int;
	var_238_object->GetProperty(var_239_string, var_242_int);
	var_238_object->SetProperty(var_239_string, (var_242_int + var_240_int));
}


void func_4423(void)
{
	object var_221_object;
	@CreateDiaryEntry(var_221_object, 437, 2, 526393);
	bool var_225_bool; object var_226_object;
	var_221_object = var_226_object;
	func_4449(var_225_bool, var_226_object, 434);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3913(void)
{
	@SetVariable("ook1Burah1", 1);
}


// @pe
void func_4170(bool var_230_bool)
{
	int var_232_int;
	func_3721(var_232_int, "k12DankoVisit");
	if(var_232_int != 0) {
		var_230_bool = true;
		return 0;
	}
	var_230_bool = false;
}


void func_3403(bool var_44_bool, cvector var_45_cvector)
{
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	cvector var_50_cvector = var_45_cvector - var_49_cvector;
	var_52_float = GetByIndex(var_50_cvector, 0);
	var_53_float = GetByIndex(var_50_cvector, 2);
	bool var_51_bool;
	@Rotate(var_52_float, var_53_float, var_51_bool);
	var_51_bool = var_44_bool;
}


// @pe
void func_3068(object var_2_object, string var_801_string)
{
	bool var_802_bool;
	func_3888(var_802_bool);
	if(!var_802_bool) //@nz
		return 0;
	if(var_801_string == var_2_object)
		return 0;
	string var_805_string; bool var_806_bool;
	var_801_string = var_805_string;
	if(var_801_string == "")
		var_806_bool = false;
	else
		var_806_bool = true;
	func_3668(var_805_string, var_806_bool);
	var_2_object = var_801_string;
	
}


void func_3150(bool var_61_bool)
{
	object var_63_object;
	@FindActor(var_63_object, "player");
	if(!var_63_object) //@nz
		var_61_bool = false;
	bool var_66_bool; object var_67_object;
	var_63_object = var_67_object;
	func_3413(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_591(object var_2_object, string var_396_string)
{
	bool var_397_bool;
	func_3888(var_397_bool);
	if(!var_397_bool) //@nz
		return 0;
	if(var_396_string == var_2_object)
		return 0;
	string var_400_string; bool var_401_bool;
	var_396_string = var_400_string;
	if(var_396_string == "")
		var_401_bool = false;
	else
		var_401_bool = true;
	func_3668(var_400_string, var_401_bool);
	var_2_object = var_396_string;
	
}


void func_3919(void)
{
	object var_52_object;
	func_4477(var_52_object);
	object var_51_object;
	var_52_object = var_51_object;
	float var_63_float;
	func_3836(var_63_float);
	var_51_object->AddMark("k1q01BurahGotoAnna", "pt_map_anna", 1, 524732, var_63_float);
	func_4358();
}
EMIT "Stack[-1] = 0";


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_313_object, object var_314_object)
{
	var_0_object = var_314_object;
	var_1_object = var_313_object;
	var_3_string = false;
	if(1 != 0) {
		func_158(var_314_object, "Neutral");
		var_0_object->SetMessage(524702); //@t
		var_0_object->ClearReplies(); //@t
		bool var_329_bool = false;
		bool var_330_bool;
		func_4146(var_1_object);
		if(var_330_bool != 0) {
			bool var_338_bool;
			func_4158(var_1_object);
			if(var_338_bool != 0)
				var_329_bool = true;
		}
		if(var_329_bool != 0)
			var_0_object->AddReply(524703, 28087, 26042); //@t
		var_0_object->AddReply(524704, -1, 26043); //@t
		var_0_object->AddReply(541803, -1, 44015); //@t
		goto Label_128;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_128:
	bool var_353_bool;
	func_3888(var_353_bool);
	if(var_353_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3652(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_157;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_157:
		return 0;

	}
	
}


void func_3668(string var_237_string, bool var_238_bool)
{
	bool var_244_bool; float var_245_float; float var_246_float;
	@lshHasAnimation(var_244_bool, var_237_string);
	if(var_244_bool != 0) {
		@lshGetAnimTimes(var_237_string, var_245_float, var_246_float);
		@lshPlayAnimation(var_245_float, var_246_float, var_238_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_237_string);
	}
	
}


void func_4436(object var_66_object)
{
	object var_68_object;
	@GetDiaryRoot(var_68_object);
	if(!var_68_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_66_object = false;
	}
	var_68_object = var_66_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4182(bool var_405_bool)
{
	int var_407_int;
	func_3721(var_407_int, "k2q01");
	if(var_407_int == 4)
		var_405_bool = true;
	var_405_bool = false;
}


void func_3413(bool var_40_bool, object var_41_object)
{
	cvector var_43_cvector;
	var_41_object->GetPosition(var_43_cvector);
	bool var_44_bool; cvector var_45_cvector;
	var_43_cvector = var_45_cvector;
	func_3403(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
}


void func_3165(object var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_113_float, var_114_float);
}


void func_3422(bool var_36_bool)
{
	bool var_38_bool;
	@IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
}


void func_4449(bool var_57_bool, object var_58_object, int var_59_int)
{
	object var_66_object;
	func_4436(var_66_object);
	object var_63_object;
	var_66_object = var_63_object;
	object var_64_object;
	var_63_object->Find(var_59_int, var_64_object);
	if(!var_64_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_59_int);
		var_57_bool = false;
	}
	var_64_object->AddChild(var_58_object);
	@SendWorldWndMessage(7);
	int var_65_int;
	var_58_object->GetCategory(var_65_int);
	@SetDiarySection(var_65_int);
	var_57_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_4194(bool var_514_bool, object var_515_object)
{
	object var_517_object;
	var_515_object = var_517_object;
	bool var_516_bool;
	func_3817(var_516_bool, var_517_object, "bird_balahon");
	if(var_516_bool != 0) {
		var_514_bool = true;
		return 0;
	}
	var_514_bool = false;
}


void func_3170(bool var_44_bool)
{
	object var_47_object;
	@FindActor(var_47_object, "player");
	if(!var_47_object) { //@nz
		var_44_bool = false;
		return 4;
	}
	float var_51_float; object var_52_object;
	func_3388(var_51_float, var_52_object);
	if(var_51_float > 90000.0) {
		var_44_bool = false;
		return 4;
	}
	bool var_48_bool;
	@CanSee(var_48_bool, var_52_object);
	var_48_bool = var_44_bool;
}
EMIT "Stack[-2] = 0";


void func_3683(bool var_165_bool, string var_166_string)
{
	bool var_168_bool;
	bool var_169_bool;
	func_3888(var_169_bool);
	if(var_169_bool != 0) {
		@lshHasSpeech(var_168_bool, var_166_string);
		if(var_168_bool != 0) {
			@lshPlaySpeech(var_166_string);
			var_165_bool = true;
		}
	}
	var_165_bool = false;
}


// @pe
void func_3938(void)
{
	@SetVariable("k2q01", 5);
	func_4371();
}


void func_3427(bool var_70_bool, object var_71_object, float var_72_float)
{
	cvector var_83_cvector; bool var_90_bool;
	var_71_object->GetPosition(var_83_cvector);
	float var_82_float;
	var_71_object->GetEyesHeight(var_82_float);
	var_91_float = GetByIndex(var_83_cvector, 1);
	SetByIndex(var_83_cvector, 1) = (var_91_float + var_82_float);
	cvector var_84_cvector;
	@GetPosition(var_84_cvector);
	@GetEyesHeight(var_82_float);
	var_92_float = GetByIndex(var_84_cvector, 1);
	SetByIndex(var_84_cvector, 1) = (var_92_float + var_82_float);
	cvector var_85_cvector = var_83_cvector - var_84_cvector;
	var_93_float = GetByIndex(var_85_cvector, 1);
	SetByIndex(var_85_cvector, 1) = (float)0;
	var_95_float = sqrt(var_85_cvector | var_85_cvector);
	var_85_cvector /= var_95_float;
	cvector var_86_cvector = -var_85_cvector;
	cvector var_97_cvector;
	func_3711(var_97_cvector, (var_86_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_87_cvector = ((var_85_cvector * var_72_float) + (var_97_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_89_bool;
	@IsOverrideActive(var_89_bool);
	if(var_89_bool != 0)
		var_70_bool = false;
	@StopWorld();
	@CameraTransit((var_84_cvector + var_87_cvector), var_86_cvector, true);
	var_111_float = GetByIndex(var_87_cvector, 0);
	var_112_float = GetByIndex(var_87_cvector, 2);
	@Rotate(var_111_float, var_112_float);
	bool var_113_bool;
	func_3888(var_113_bool);
	if(var_113_bool != 0) {
	} else {
		@HasAnimationTrack(var_90_bool, "head");
		if(var_90_bool == 0) goto Label_3490;
		@LookAsyncCamera("head");
	}
Label_3490:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_70_bool = true;
	
}


void func_3947(void)
{
	object var_170_object;
	int var_171_int;
	func_3721(var_171_int, "k7q01CorpseMark");
	if(var_171_int == 0) {
		@SetVariable("k7q01CorpseMark", 1);
		object var_179_object;
		func_4477(var_179_object);
		var_179_object = var_170_object;
		float var_184_float;
		func_3836(var_184_float);
		var_170_object->AddMark("k7q01BirdmaskGotoCorpse", "pt_d7q02_corpse", 3, 526214, var_184_float);
		bool var_185_bool;
		func_3824(var_185_bool, "quest_k7_01", "place_corpse");
		var_170_object = null;
	}
}


// @pe
void func_4205(bool var_496_bool)
{
	int var_498_int;
	func_3721(var_498_int, "k7q01");
	if(var_498_int == 3)
		var_496_bool = true;
	var_496_bool = false;
}


void func_2929(object var_0_object, int var_770_int, object var_771_object)
{
	var_0_object = var_771_object;
	bool var_781_bool; object var_782_object;
	var_771_object = var_782_object;
	func_3427(var_781_bool, var_782_object, 70.0);
	if(!var_781_bool) { //@nz
		var_770_int = -2;
		return 8;
	}
	object var_777_object;
	@CreateDialog(var_777_object);
	int var_785_int;
	func_3882(var_785_int);
	var_777_object->SetNPCName(var_785_int);
	int var_786_int;
	func_3880(var_786_int);
	var_777_object->SetNPCDescription(var_786_int);
	string var_787_string;
	func_3884(var_787_string);
	var_777_object->SetPhoto(var_787_string);
	string var_788_string;
	func_3886(var_788_string);
	var_777_object->SetPhoto2(var_788_string);
	int var_789_int;
	func_4527(var_789_int);
	var_777_object->SetPlayerName(var_789_int);
	bool var_778_bool;
	@IsOverrideActive(var_778_bool);
	if(var_778_bool != 0) {
		var_770_int = -2;
		return 8;
	}
	@DoDialog(var_777_object);
	bool var_791_bool; object var_792_object;
	object var_793_object;
	func_3705(var_793_object);
	var_793_object = var_792_object;
	func_3514(var_791_bool, var_792_object);
	object var_794_object; object var_795_object;
	var_771_object = var_794_object;
	var_777_object = var_795_object;
	TaskCall(13);
	func_3010(var_796_object, var_797_object, var_798_string, var_799_bool, var_794_object, var_795_object);
	TaskReturn();
	bool var_780_bool;
	var_777_object->IsDialogEnd(var_780_bool);
	
	for(;;) {
		var_824_bool = !var_780_bool; //@nz
		if(var_824_bool == 0) goto Label_2999;
		@sync();
		var_777_object->IsDialogEnd(var_780_bool);
	}
	
Label_2999:
	object var_825_object;
	var_771_object = var_825_object;
	func_3496();
	@StopDialog(var_777_object);
	var_777_object->GetReturnValue(-1);
	int var_779_int = var_770_int;
}
EMIT "Stack[-4] = 0";


void func_3698(void)
{
	bool var_39_bool;
	func_3888(var_39_bool);
	if(var_39_bool != 0)
		@lshStopSpeech();
}


void func_3192(void)
{
	float var_829_float;
	@rand(var_829_float, 8, 16);
	@SetTimer(10, var_829_float);
}


void func_3705(object var_133_object)
{
	object var_135_object;
	@self(var_135_object);
	var_135_object = var_133_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4217(bool var_502_bool)
{
	int var_504_int;
	func_3721(var_504_int, "ook7Burah1");
	if(var_504_int == 0) {
		var_502_bool = true;
		return 0;
	}
	var_502_bool = false;
}


// @pe
void func_2425(object var_2_object, string var_674_string)
{
	bool var_675_bool;
	func_3888(var_675_bool);
	if(!var_675_bool) //@nz
		return 0;
	if(var_674_string == var_2_object)
		return 0;
	string var_678_string; bool var_679_bool;
	var_674_string = var_678_string;
	if(var_674_string == "")
		var_679_bool = false;
	else
		var_679_bool = true;
	func_3668(var_678_string, var_679_bool);
	var_2_object = var_674_string;
	
}


// @pe
void func_889(object var_2_object, string var_233_string)
{
	bool var_234_bool;
	func_3888(var_234_bool);
	if(!var_234_bool) //@nz
		return 0;
	if(var_233_string == var_2_object)
		return 0;
	string var_237_string; bool var_238_bool;
	var_233_string = var_237_string;
	if(var_233_string == "")
		var_238_bool = false;
	else
		var_238_bool = true;
	func_3668(var_237_string, var_238_bool);
	var_2_object = var_233_string;
	
}


// @pe
void func_1915(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_578_object, object var_579_object)
{
	var_0_object = var_579_object;
	var_3_string = false;
	if(1 != 0) {
		func_1983(var_579_object, "Neutral");
		var_0_object->SetMessage(527204); //@t
		var_0_object->ClearReplies(); //@t
		bool var_594_bool;
		func_4265(var_578_object);
		if(var_594_bool != 0)
			var_0_object->AddReply(527205, 28514, 28513); //@t
		var_0_object->AddReply(527210, -1, 28518); //@t
		var_0_object->AddReply(527533, -1, 28871); //@t
		goto Label_1953;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x77f";
	}
Label_1953:
	bool var_609_bool;
	func_3888(var_609_bool);
	if(var_609_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3652(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1982;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1982:
		return 0;

	}
	
}


void func_4477(object var_46_object)
{
	object var_49_object; object var_50_object;
	@GetMainOutdoorScene(var_49_object);
	if(var_49_object == null) {
		@Trace("Can't find main outdoor scene");
		var_50_object = null;
		var_50_object = var_46_object;
	}
	var_49_object->GetMap(var_50_object);
	var_50_object = var_46_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_3711(cvector var_97_cvector, cvector var_98_cvector)
{
	float var_101_float = sqrt(var_98_cvector | var_98_cvector);
	if(var_101_float < 0.000001)
		var_97_cvector = [0.0, 0.0, 0.0];
	var_97_cvector = var_98_cvector / var_101_float;
}


void func_3201(void)
{
	@KillTimer(10);
}


// @pe
void func_4229(bool var_526_bool)
{
	int var_528_int;
	func_3721(var_528_int, "k7q03");
	if(var_528_int == 0) {
		var_526_bool = true;
		return 0;
	}
	var_526_bool = false;
}


void func_3721(int var_332_int, string var_333_string)
{
	int var_335_int;
	@GetVariable(var_333_string, var_335_int);
	var_335_int = var_332_int;
}


// @pe
void func_3979(void)
{
	@SetVariable("ook7Burah1", 1);
}


void func_3726(object var_91_object, string var_92_string)
{
	object var_95_object;
	@GetMainOutdoorScene(var_95_object);
	object var_96_object;
	@AddBlankActor(var_96_object, var_95_object, var_92_string, (var_92_string + ".bin"));
	var_96_object = var_91_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_4494(object var_135_object, string var_136_string, float var_137_float)
{
	object var_145_object;
	@GetMainOutdoorScene(var_145_object);
	if(var_145_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_143_cvector;
	cvector var_144_cvector;
	bool var_146_bool;
	var_145_object->GetLocator(var_136_string, var_146_bool, var_143_cvector, var_144_cvector);
	if(!var_146_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_136_string) + " doesnt exist");
	var_145_object->GetMap(var_135_object);
	if(var_135_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_156_float = GetByIndex(var_143_cvector, 0);
	var_157_float = GetByIndex(var_143_cvector, 2);
	var_135_object->SetMapParams(var_156_float, var_157_float, var_137_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_4241(bool var_460_bool)
{
	int var_462_int;
	func_3721(var_462_int, "ook7Burah2");
	if(var_462_int == 0) {
		var_460_bool = true;
		return 0;
	}
	var_460_bool = false;
}


void func_3985(object var_190_object)
{
	@SetVariable("k7q01", 4);
	func_4384();
	int var_193_int;
	var_190_object->RemoveItemByType(var_193_int, "bird_balahon", 1);
}


void func_3737(string var_71_string, bool var_72_bool)
{
	object var_74_object;
	@FindActor(var_74_object, var_71_string);
	if(!var_74_object) //@nz
		@Trace(("Door " + var_71_string) + " not found");
	else
		var_74_object->SetProperty("locked", var_72_bool);
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_4253(bool var_535_bool)
{
	int var_537_int;
	func_3721(var_537_int, "k7q03");
	if(var_537_int == 2)
		var_535_bool = true;
	var_535_bool = false;
}


// @pe
void func_158(object var_2_object, string var_320_string)
{
	bool var_321_bool;
	func_3888(var_321_bool);
	if(!var_321_bool) //@nz
		return 0;
	if(var_320_string == var_2_object)
		return 0;
	string var_324_string; bool var_325_bool;
	var_320_string = var_324_string;
	if(var_320_string == "")
		var_325_bool = false;
	else
		var_325_bool = true;
	func_3668(var_324_string, var_325_bool);
	var_2_object = var_320_string;
	
}


void func_3998(void)
{
	object var_46_object;
	func_4477(var_46_object);
	object var_45_object;
	var_46_object = var_45_object;
	float var_57_float;
	func_3836(var_57_float);
	var_45_object->AddMark("k7q03BurahGotoFather", "pt_map_burah_home", 0, 526394, var_57_float);
	func_4397();
	func_4410();
	object var_91_object;
	func_3726(var_91_object, "quest_k7_03");
	bool var_99_bool;
	func_3824(var_99_bool, "quest_k7_03", "place_family");
}
EMIT "Stack[-1] = 0";


void func_2211(object var_0_object, int var_621_int, object var_622_object)
{
	var_0_object = var_622_object;
	bool var_632_bool; object var_633_object;
	var_622_object = var_633_object;
	func_3427(var_632_bool, var_633_object, 70.0);
	if(!var_632_bool) { //@nz
		var_621_int = -2;
		return 8;
	}
	object var_628_object;
	@CreateDialog(var_628_object);
	int var_636_int;
	func_3882(var_636_int);
	var_628_object->SetNPCName(var_636_int);
	int var_637_int;
	func_3880(var_637_int);
	var_628_object->SetNPCDescription(var_637_int);
	string var_638_string;
	func_3884(var_638_string);
	var_628_object->SetPhoto(var_638_string);
	string var_639_string;
	func_3886(var_639_string);
	var_628_object->SetPhoto2(var_639_string);
	int var_640_int;
	func_4527(var_640_int);
	var_628_object->SetPlayerName(var_640_int);
	bool var_629_bool;
	@IsOverrideActive(var_629_bool);
	if(var_629_bool != 0) {
		var_621_int = -2;
		return 8;
	}
	@DoDialog(var_628_object);
	bool var_642_bool; object var_643_object;
	object var_644_object;
	func_3705(var_644_object);
	var_644_object = var_643_object;
	func_3514(var_642_bool, var_643_object);
	object var_645_object; object var_646_object;
	var_622_object = var_645_object;
	var_628_object = var_646_object;
	TaskCall(11);
	func_2292(var_647_object, var_648_object, var_649_string, var_650_bool, var_645_object, var_646_object);
	TaskReturn();
	bool var_631_bool;
	var_628_object->IsDialogEnd(var_631_bool);
	
	for(;;) {
		var_768_bool = !var_631_bool; //@nz
		if(var_768_bool == 0) goto Label_2281;
		@sync();
		var_628_object->IsDialogEnd(var_631_bool);
	}
	
Label_2281:
	object var_769_object;
	var_622_object = var_769_object;
	func_3496();
	@StopDialog(var_628_object);
	var_628_object->GetReturnValue(-1);
	int var_630_int = var_621_int;
}
EMIT "Stack[-4] = 0";


void func_3496(void)
{
	bool var_278_bool;
	@CameraSwitchToNormal(true);
	bool var_280_bool;
	func_3888(var_280_bool);
	if(var_280_bool != 0) {
	} else {
		@HasAnimationTrack(var_278_bool, "head");
		if(var_278_bool == 0) goto Label_3513;
		@UnlookAsync("head");
	}
Label_3513:
	
}


// @pe
void func_4265(bool var_594_bool)
{
	int var_596_int;
	func_3721(var_596_int, "k11q01");
	if(var_596_int == 4)
		var_594_bool = true;
	var_594_bool = false;
}


void func_3754(int var_128_int, int var_129_int)
{
	object var_131_object;
	@CreateIntVector(var_131_object);
	var_131_object->add(var_128_int);
	var_131_object->add(var_129_int);
	@SendWorldWndMessage(3, var_131_object);
}
EMIT "Stack[-1] = 0";


void func_4527(int var_122_int)
{
	int var_124_int;
	@GetVariable("branch", var_124_int);
	if(var_124_int == 0) {
		var_122_int = 1;
		return 2;
	EMIT "GOTO 0x11be";
	}
	if(var_124_int == 1) {
		var_122_int = 2;
		return 2;
	}
	var_122_int = 3;
}


// @pe
void func_4277(bool var_239_bool)
{
	int var_241_int;
	func_3721(var_241_int, "k12q01ChildsAreVisited");
	if(var_241_int != 0) {
		var_239_bool = true;
		return 0;
	}
	var_239_bool = false;
}


void func_3766(object var_234_object, int var_235_int)
{
	int var_237_int;
	object var_238_object;
	var_234_object = var_238_object;
	int var_240_int;
	func_3396(var_238_object, "money", var_240_int);
	if(var_240_int > 0) {
		@GetInvItemByName(var_237_int, "Money");
		int var_247_int; int var_248_int;
		var_237_int = var_247_int;
		var_235_int = var_248_int;
		func_3754(var_247_int, var_248_int);
	}
}


void func_3514(bool var_131_bool, object var_132_object)
{
	int var_138_int; int var_139_int;
	@GetVariable("voice_common", var_138_int);
	if(var_138_int != 0) {
		bool var_142_bool; object var_143_object;
		var_132_object = var_143_object;
		func_3572(var_142_bool, var_143_object);
		if(!var_142_bool) { //@nz
			bool var_173_bool; object var_174_object;
			var_132_object = var_174_object;
			func_3609(var_173_bool, var_174_object);
			if(!var_173_bool) { //@nz
				var_131_bool = false;
				return 4;
			}
		}
		@irand(var_139_int, 2);
		if(var_139_int != 0)
			@SetVariable("voice_common", ((var_138_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_218_bool; object var_219_object;
		var_132_object = var_219_object;
		func_3609(var_218_bool, var_219_object);
		if(!var_218_bool) { //@nz
			bool var_221_bool; object var_222_object;
			var_132_object = var_222_object;
			func_3572(var_221_bool, var_222_object);
			if(!var_221_bool) { //@nz
				var_131_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_3570;
	
Label_3570:
	var_131_bool = true;
	
}


// @pe
void func_4029(void)
{
	@SetVariable("ook7Burah2", 1);
}


// @pe
void func_1983(object var_2_object, string var_585_string)
{
	bool var_586_bool;
	func_3888(var_586_bool);
	if(!var_586_bool) //@nz
		return 0;
	if(var_585_string == var_2_object)
		return 0;
	string var_589_string; bool var_590_bool;
	var_585_string = var_589_string;
	if(var_585_string == "")
		var_590_bool = false;
	else
		var_590_bool = true;
	func_3668(var_589_string, var_590_bool);
	var_2_object = var_585_string;
	
}


// @pe
void func_1216(object var_2_object, string var_470_string)
{
	bool var_471_bool;
	func_3888(var_471_bool);
	if(!var_471_bool) //@nz
		return 0;
	if(var_470_string == var_2_object)
		return 0;
	string var_474_string; bool var_475_bool;
	var_470_string = var_474_string;
	if(var_470_string == "")
		var_475_bool = false;
	else
		var_475_bool = true;
	func_3668(var_474_string, var_475_bool);
	var_2_object = var_470_string;
	
}


// @pe
void func_4289(bool var_752_bool)
{
	int var_754_int;
	func_3721(var_754_int, "k12q01BurahInSobor");
	if(var_754_int != 0) {
		var_752_bool = true;
		return 0;
	}
	var_752_bool = false;
}


// @pe
void func_4544(object var_716_object, bool var_717_bool, int var_718_int)
{
	var_716_object->add(18);
	var_716_object->add(24);
	var_716_object->add(20);
	var_716_object->add(14);
	if(var_717_bool == false) {
		var_716_object->add(10);
		var_716_object->add(17);
		var_716_object->add(8);
	} else if(var_718_int != 1) {
		var_716_object->add(10);
	}
	
}


void func_447(object var_0_object, int var_365_int, object var_366_object)
{
	var_0_object = var_366_object;
	bool var_376_bool; object var_377_object;
	var_366_object = var_377_object;
	func_3427(var_376_bool, var_377_object, 70.0);
	if(!var_376_bool) { //@nz
		var_365_int = -2;
		return 8;
	}
	object var_372_object;
	@CreateDialog(var_372_object);
	int var_380_int;
	func_3882(var_380_int);
	var_372_object->SetNPCName(var_380_int);
	int var_381_int;
	func_3880(var_381_int);
	var_372_object->SetNPCDescription(var_381_int);
	string var_382_string;
	func_3884(var_382_string);
	var_372_object->SetPhoto(var_382_string);
	string var_383_string;
	func_3886(var_383_string);
	var_372_object->SetPhoto2(var_383_string);
	int var_384_int;
	func_4527(var_384_int);
	var_372_object->SetPlayerName(var_384_int);
	bool var_373_bool;
	@IsOverrideActive(var_373_bool);
	if(var_373_bool != 0) {
		var_365_int = -2;
		return 8;
	}
	@DoDialog(var_372_object);
	bool var_386_bool; object var_387_object;
	object var_388_object;
	func_3705(var_388_object);
	var_388_object = var_387_object;
	func_3514(var_386_bool, var_387_object);
	object var_389_object; object var_390_object;
	var_366_object = var_389_object;
	var_372_object = var_390_object;
	TaskCall(3);
	func_528(var_391_object, var_392_object, var_393_string, var_394_bool, var_389_object, var_390_object);
	TaskReturn();
	bool var_375_bool;
	var_372_object->IsDialogEnd(var_375_bool);
	
	for(;;) {
		var_425_bool = !var_375_bool; //@nz
		if(var_425_bool == 0) goto Label_517;
		@sync();
		var_372_object->IsDialogEnd(var_375_bool);
	}
	
Label_517:
	object var_426_object;
	var_366_object = var_426_object;
	func_3496();
	@StopDialog(var_372_object);
	var_372_object->GetReturnValue(-1);
	int var_374_int = var_365_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3010(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_794_object, object var_795_object)
{
	var_0_object = var_795_object;
	var_1_object = var_794_object;
	var_3_string = false;
	if(1 != 0) {
		func_3068(var_795_object, "Neutral");
		var_0_object->SetMessage(540545); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540546, -1, 42555); //@t
		var_0_object->AddReply(540798, -1, 42847); //@t
		goto Label_3038;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xbc6";
	}
Label_3038:
	bool var_816_bool;
	func_3888(var_816_bool);
	if(var_816_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3652(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3067;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3067:
		return 0;

	}
	
}


// @pe
void func_4035(object var_109_object)
{
	@Trace("tvirin 5 is given");
	object var_112_object;
	var_109_object = var_112_object;
	func_3804(var_112_object, "tvirin", 5);
}


void func_3785(object var_117_object, object var_118_object, int var_119_int)
{
	int var_123_int;
	var_118_object->GetItemID(var_123_int);
	int var_124_int;
	@GetInvItemProperty(var_124_int, var_123_int, "Category");
	bool var_125_bool;
	var_117_object->AddItem(var_125_bool, var_118_object, var_124_int, var_119_int);
	if(!var_125_bool) { //@nz
		var_117_object->DropItems(var_118_object, var_119_int);
	} else {
		int var_128_int; int var_129_int;
		var_123_int = var_128_int;
		var_119_int = var_129_int;
		func_3754(var_128_int, var_129_int);
	}
	
}


// @pe
void func_4301(bool var_653_bool)
{
	int var_655_int;
	func_3721(var_655_int, "ook12BurahFactory1");
	if(var_655_int == 0) {
		var_653_bool = true;
		return 0;
	}
	var_653_bool = false;
}


// @pe
void func_4046(void)
{
	func_4423();
	bool var_228_bool;
	func_3824(var_228_bool, "quest_k7_03", "completed");
}


// @pe
void func_4056(object var_231_object)
{
	@Trace("money2000 is given");
	object var_234_object;
	var_231_object = var_234_object;
	func_3766(var_234_object, 2000);
}


// @pe
void func_4313(bool var_705_bool)
{
	bool var_707_bool;
	func_4597(var_707_bool);
	var_707_bool = var_705_bool;
}


void func_3804(object var_112_object, string var_113_string, int var_114_int)
{
	object var_116_object;
	@CreateInvItem(var_116_object);
	var_116_object->SetItemName(var_113_string);
	object var_117_object; object var_118_object; int var_119_int;
	var_112_object = var_117_object;
	var_116_object = var_118_object;
	var_114_int = var_119_int;
	func_3785(var_117_object, var_118_object, var_119_int);
}
EMIT "Stack[-1] = 0";


void func_989(object var_0_object, int var_429_int, object var_430_object)
{
	var_0_object = var_430_object;
	bool var_440_bool; object var_441_object;
	var_430_object = var_441_object;
	func_3427(var_440_bool, var_441_object, 70.0);
	if(!var_440_bool) { //@nz
		var_429_int = -2;
		return 8;
	}
	object var_436_object;
	@CreateDialog(var_436_object);
	int var_444_int;
	func_3882(var_444_int);
	var_436_object->SetNPCName(var_444_int);
	int var_445_int;
	func_3880(var_445_int);
	var_436_object->SetNPCDescription(var_445_int);
	string var_446_string;
	func_3884(var_446_string);
	var_436_object->SetPhoto(var_446_string);
	string var_447_string;
	func_3886(var_447_string);
	var_436_object->SetPhoto2(var_447_string);
	int var_448_int;
	func_4527(var_448_int);
	var_436_object->SetPlayerName(var_448_int);
	bool var_437_bool;
	@IsOverrideActive(var_437_bool);
	if(var_437_bool != 0) {
		var_429_int = -2;
		return 8;
	}
	@DoDialog(var_436_object);
	bool var_450_bool; object var_451_object;
	object var_452_object;
	func_3705(var_452_object);
	var_452_object = var_451_object;
	func_3514(var_450_bool, var_451_object);
	object var_453_object; object var_454_object;
	var_430_object = var_453_object;
	var_436_object = var_454_object;
	TaskCall(7);
	func_1070(var_455_object, var_456_object, var_457_string, var_458_bool, var_453_object, var_454_object);
	TaskReturn();
	bool var_439_bool;
	var_436_object->IsDialogEnd(var_439_bool);
	
	for(;;) {
		var_550_bool = !var_439_bool; //@nz
		if(var_550_bool == 0) goto Label_1059;
		@sync();
		var_436_object->IsDialogEnd(var_439_bool);
	}
	
Label_1059:
	object var_551_object;
	var_430_object = var_551_object;
	func_3496();
	@StopDialog(var_436_object);
	var_436_object->GetReturnValue(-1);
	int var_438_int = var_429_int;
}
EMIT "Stack[-4] = 0";


void func_4319(void)
{
	object var_47_object;
	@CreateDiaryEntry(var_47_object, 488, 1, 528055);
	bool var_51_bool; object var_52_object;
	var_47_object = var_52_object;
	func_4449(var_51_bool, var_52_object, 480);
}
EMIT "Stack[-1] = 0";


void func_4577(bool var_742_bool, int var_743_int)
{
	int var_745_int;
	@GetVariable(("vol_" + var_743_int), var_745_int);
	var_742_bool = (var_745_int & 4) != 0;
}


// @pe
void func_4066(void)
{
	@SetVariable("k11q01", 5);
	func_4319();
}


void func_3817(bool var_516_bool, object var_517_object, string var_518_string)
{
	int var_521_int;
	@GetInvItemByName(var_521_int, var_518_string);
	bool var_522_bool;
	var_517_object->HasItem(var_521_int, var_522_bool);
	var_522_bool = var_516_bool;
}


// @pe
void func_4075(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_4332(void)
{
	object var_82_object;
	@CreateDiaryEntry(var_82_object, 731, 1, 539361);
	bool var_86_bool; object var_87_object;
	var_82_object = var_87_object;
	func_4449(var_86_bool, var_87_object, 729);
}
EMIT "Stack[-1] = 0";


void func_4587(bool var_733_bool, int var_734_int)
{
	int var_736_int;
	@GetVariable(("vol_" + var_734_int), var_736_int);
	var_733_bool = (var_736_int & 16) != 0;
}


void func_750(object var_0_object, int var_59_int, object var_60_object)
{
	var_0_object = var_60_object;
	bool var_70_bool; object var_71_object;
	var_60_object = var_71_object;
	func_3427(var_70_bool, var_71_object, 70.0);
	if(!var_70_bool) { //@nz
		var_59_int = -2;
		return 8;
	}
	object var_66_object;
	@CreateDialog(var_66_object);
	int var_118_int;
	func_3882(var_118_int);
	var_66_object->SetNPCName(var_118_int);
	int var_119_int;
	func_3880(var_119_int);
	var_66_object->SetNPCDescription(var_119_int);
	string var_120_string;
	func_3884(var_120_string);
	var_66_object->SetPhoto(var_120_string);
	string var_121_string;
	func_3886(var_121_string);
	var_66_object->SetPhoto2(var_121_string);
	int var_122_int;
	func_4527(var_122_int);
	var_66_object->SetPlayerName(var_122_int);
	bool var_67_bool;
	@IsOverrideActive(var_67_bool);
	if(var_67_bool != 0) {
		var_59_int = -2;
		return 8;
	}
	@DoDialog(var_66_object);
	bool var_131_bool; object var_132_object;
	object var_133_object;
	func_3705(var_133_object);
	var_133_object = var_132_object;
	func_3514(var_131_bool, var_132_object);
	object var_226_object; object var_227_object;
	var_60_object = var_226_object;
	var_66_object = var_227_object;
	TaskCall(5);
	func_831(var_228_object, var_229_object, var_230_string, var_231_bool, var_226_object, var_227_object);
	TaskReturn();
	bool var_69_bool;
	var_66_object->IsDialogEnd(var_69_bool);
	
	for(;;) {
		var_275_bool = !var_69_bool; //@nz
		if(var_275_bool == 0) goto Label_820;
		@sync();
		var_66_object->IsDialogEnd(var_69_bool);
	}
	
Label_820:
	object var_276_object;
	var_60_object = var_276_object;
	func_3496();
	@StopDialog(var_66_object);
	var_66_object->GetReturnValue(-1);
	int var_68_int = var_59_int;
}
EMIT "Stack[-4] = 0";


void func_3312(void)
{
	bool var_48_bool; int var_49_int; int var_50_int; bool var_51_bool;
	@WaitForAnimEnd();
	bool var_52_bool;
	func_3422(var_52_bool);
	if(!var_52_bool) //@nz
		return 12;
	int var_54_int;
	func_3863(var_54_int);
	int var_46_int;
	var_54_int = var_46_int;
	int var_47_int = 0;
	
	for(;;) {
		bool var_67_bool = false;
		if(var_47_int < 5) {
			bool var_70_bool;
			func_3422(var_70_bool);
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
			func_3856(var_81_string, var_82_int);
			@PlayAnimation("all", var_81_string);
			@WaitForAnimEnd(var_51_bool);
			var_83_bool = !var_51_bool; //@nz
			if(var_83_bool == 0) goto Label_3367;
			goto Label_3378;
			}
				Label_3367:
					bool var_74_bool;
					func_3381(var_74_bool);
					var_75_bool = !var_74_bool; //@nz
					if(var_75_bool == 0) goto Label_3373;
			}
		}
	Label_3378:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_3373:
		@ResetAAS();
		var_47_int += 1;
	}
	
}


void func_3824(bool var_99_bool, string var_100_string, string var_101_string)
{
	object var_103_object;
	@FindActor(var_103_object, var_100_string);
	if(var_103_object == null)
		var_99_bool = false;
	@Trigger(var_103_object, var_101_string);
	var_99_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4081(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_2292(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_645_object, object var_646_object)
{
	var_0_object = var_646_object;
	var_1_object = var_645_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_652_bool = false;
		bool var_653_bool;
		func_4301(var_1_object);
		if(var_653_bool != 0) {
			bool var_659_bool;
			func_4134(var_1_object);
			if(!var_659_bool) //@nz
				var_652_bool = true;
		}
		if(var_652_bool != 0) {
			object var_666_object; object var_667_object;
			var_666_object = var_1_object;
			var_667_object = var_0_object;
			func_4087();
			object var_670_object; object var_671_object;
			var_670_object = var_1_object;
			var_671_object = var_0_object;
			func_4118();
			func_2425(var_646_object, "Neutral");
			var_0_object->SetMessage(539318); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(541446, 45384, 43602); //@t
			var_0_object->AddReply(542944, 45384, 45383); //@t
		} else {
					object var_697_object; object var_698_object;
					var_697_object = var_1_object;
					var_698_object = var_0_object;
					func_4118();
					func_2425(var_646_object, "Neutral");
					var_0_object->SetMessage(539331); //@t
					var_0_object->ClearReplies(); //@t
					bool var_701_bool = false;
					bool var_702_bool = false;
					bool var_703_bool;
					func_4124(var_703_bool, var_1_object);
					if(var_703_bool != 0) {
						bool var_752_bool;
						func_4289(var_1_object);
						if(!var_752_bool) //@nz
							var_702_bool = true;
					}
					if(var_702_bool != 0) {
						bool var_759_bool;
						func_4134(var_1_object);
						if(!var_759_bool) //@nz
							var_701_bool = true;
					}
					if(var_701_bool != 0)
						var_0_object->AddReply(539332, 41277, 41276); //@t
					var_0_object->AddReply(539335, -1, 41279); //@t
		}
	}
	for(;;) {
		bool var_689_bool;
		func_3888(var_689_bool);
		if(var_689_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3652(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_2424;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2424:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x8f8";


void func_3572(bool var_142_bool, object var_143_object)
{
	string var_149_string; bool var_151_bool; int var_152_int; string var_153_string;
	var_149_string = "c";
	int var_150_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_143_object->HasProperty((var_149_string + (var_150_int + 1)), var_151_bool);
			if(!var_151_bool) { //@nz
			} else {
				var_150_int += 1;
			}
		}
		if(!var_150_int) { //@nz
			var_142_bool = false;
			return 10;
		}
		var_152_int = 0;
		if(var_150_int > 1)
			@irand(var_152_int, var_150_int);
		var_143_object->GetProperty((var_149_string + (var_152_int + 1)), var_153_string);
		bool var_165_bool; string var_166_string;
		var_153_string = var_166_string;
		func_3683(var_165_bool, var_166_string);
		var_165_bool = var_142_bool;
		return 10;

	}
}


void func_4597(bool var_707_bool)
{
	object var_712_object; int var_715_int;
	@CreateIntVector(var_712_object);
	object var_716_object;
	var_712_object = var_716_object;
	func_4544(var_716_object, false, -1);
	int var_713_int;
	var_712_object->size(var_713_int);
	int var_714_int = 0;
	
	while(var_714_int < var_713_int) {
		var_712_object->get(var_715_int, var_714_int);
		bool var_732_bool = true;
		bool var_733_bool; int var_734_int;
		var_715_int = var_734_int;
		func_4587(var_733_bool, var_734_int);
		if(var_733_bool != 1) {
			bool var_742_bool; int var_743_int;
			var_715_int = var_743_int;
			func_4577(var_742_bool, var_743_int);
			if(var_742_bool != 1)
				var_732_bool = false;
		}
		if(var_732_bool != 0)
			var_707_bool = false;
		var_714_int += 1;
	}
	
	var_707_bool = true;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4087(void)
{
	@SetVariable("ook12BurahFactory1", 1);
}


void func_4345(void)
{
	object var_53_object;
	@CreateDiaryEntry(var_53_object, 738, 1, 539368);
	bool var_57_bool; object var_58_object;
	var_53_object = var_58_object;
	func_4449(var_57_bool, var_58_object, 729);
}
EMIT "Stack[-1] = 0";


void func_3836(float var_57_float)
{
	float var_59_float;
	@GetGameTime(var_59_float);
	var_59_float = var_57_float;
}


// @pe
void func_4093(void)
{
	@SetVariable("k12q01BurahInSobor", 1);
	func_4332();
}



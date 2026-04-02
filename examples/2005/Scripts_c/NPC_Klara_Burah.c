// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3347();
			if(var_37_cvector == 26628) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3584();
			}
			if(var_36_bool == 26625) {
				func_157(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525257); //@t
				var_0_object->ClearReplies(); //@t
				bool var_84_bool;
				func_3835(var_1_object);
				if(var_84_bool != 0)
					var_0_object->AddReply(525258, 30607, 26626); //@t
				var_0_object->AddReply(525261, -1, 26629); //@t
				return 0;
			}
			if(var_36_bool == 30607) {
				func_157(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529158); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529159, 30609, 30608); //@t
				var_0_object->AddReply(529161, 30611, 30610); //@t
				return 0;
			}
			if(var_36_bool == 30611) {
				func_157(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529162); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529163, 26627, 30612); //@t
				return 0;
			}
			if(var_36_bool == 30609) {
				func_157(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529160); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529164, 26627, 30613); //@t
				return 0;
			}
			if(var_36_bool == 26627) {
				func_157(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525259); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525260, -1, 26628); //@t
				var_0_object->AddReply(529166, -1, 30616); //@t
				return 0;
			}
			var_3_string = true;
			bool var_132_bool;
			func_3537(var_132_bool);
			if(var_132_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3347();
			if(var_36_bool == 26827) {
				func_455(var_37_cvector, "Neutral");
				var_0_object->SetMessage(525471); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525472, 27550, 26828); //@t
				var_0_object->AddReply(526276, 28085, 27552); //@t
				return 0;
			}
			if(var_36_bool == 28085) {
				func_455(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526805); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526806, -1, 28086); //@t
				return 0;
			}
			if(var_36_bool == 27550) {
				func_455(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526274); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526275, -1, 27551); //@t
				return 0;
			}
			var_3_string = true;
			bool var_75_bool;
			func_3537(var_75_bool);
			if(var_75_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1de";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3347();
			if(var_37_cvector == 27656) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3644();
				object var_105_object; object var_106_object;
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_3736();
				object var_109_object = var_1_object;
				func_3681(var_0_object);
				object var_133_object = var_1_object;
				func_3539(var_0_object);
			}
			if(var_37_cvector == 27454) {
				object var_161_object; object var_162_object;
				var_161_object = var_1_object;
				var_162_object = var_0_object;
				func_3625();
			}
			if(var_37_cvector == 27456) {
				object var_167_object; object var_168_object;
				var_167_object = var_1_object;
				var_168_object = var_0_object;
				func_3593();
			}
			if(var_37_cvector == 27460) {
				object var_190_object = var_1_object;
				func_3631(var_0_object);
			}
			if(var_37_cvector == 27660) {
				object var_208_object; object var_209_object;
				var_208_object = var_1_object;
				var_209_object = var_0_object;
				func_3644();
				object var_210_object = var_1_object;
				func_3681(var_0_object);
				object var_212_object; object var_213_object;
				var_212_object = var_1_object;
				var_213_object = var_0_object;
				func_3736();
				object var_214_object = var_1_object;
				func_3539(var_0_object);
			}
			if(var_37_cvector == 27669) {
				object var_218_object; object var_219_object;
				var_218_object = var_1_object;
				var_219_object = var_0_object;
				func_3692();
				object var_231_object = var_1_object;
				func_3702(var_0_object);
				object var_249_object; object var_250_object;
				var_249_object = var_1_object;
				var_250_object = var_0_object;
				func_3730();
			}
			if(var_36_bool == 27653) {
				bool var_255_bool;
				func_3894(var_1_object);
				if(var_255_bool != 0) {
					object var_261_object; object var_262_object;
					var_261_object = var_1_object;
					var_262_object = var_0_object;
					func_3675();
					func_782(var_37_cvector, "Neutral");
					var_0_object->SetMessage(526373); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526374, 27655, 27654); //@t
					var_0_object->AddReply(528676, 27655, 30089); //@t
					return 0;
				}
				func_782(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526173); //@t
				var_0_object->ClearReplies(); //@t
				bool var_286_bool = false;
				bool var_287_bool;
				func_3858(var_1_object);
				if(var_287_bool != 0) {
					bool var_293_bool;
					func_3870(var_1_object);
					if(var_293_bool != 0)
						var_286_bool = true;
				}
				if(var_286_bool != 0)
					var_0_object->AddReply(526174, 27455, 27454); //@t
				bool var_302_bool = false;
				bool var_303_bool;
				func_3858(var_1_object);
				if(var_303_bool != 0) {
					bool var_305_bool;
					func_3847(var_305_bool, var_1_object);
					if(var_305_bool != 0)
						var_302_bool = true;
				}
				if(var_302_bool != 0)
					var_0_object->AddReply(526178, 27459, 27458); //@t
				bool var_317_bool;
				func_3882(var_1_object);
				if(var_317_bool != 0)
					var_0_object->AddReply(526378, 27659, 27658); //@t
				bool var_326_bool;
				func_3906(var_1_object);
				if(var_326_bool != 0)
					var_0_object->AddReply(526387, 27668, 27667); //@t
				var_0_object->AddReply(526181, -1, 27461); //@t
				var_0_object->AddReply(528675, -1, 30088); //@t
				return 0;
			}
			if(var_36_bool == 27668) {
				func_782(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526388); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526389, -1, 27669); //@t
				return 0;
			}
			if(var_36_bool == 27659) {
				func_782(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526379); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526380, -1, 27660); //@t
				return 0;
			}
			if(var_36_bool == 27459) {
				func_782(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526179); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528687, 30103, 30102); //@t
				return 0;
			}
			if(var_36_bool == 30103) {
				func_782(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528688); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528689, 30105, 30104); //@t
				return 0;
			}
			if(var_36_bool == 30105) {
				func_782(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528690); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528691, 30107, 30106); //@t
				var_0_object->AddReply(528697, 30113, 30112); //@t
				return 0;
			}
			if(var_36_bool == 30113) {
				func_782(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528698); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528699, 30107, 30114); //@t
				return 0;
			}
			if(var_36_bool == 30107) {
				func_782(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528692); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528693, 30109, 30108); //@t
				return 0;
			}
			if(var_36_bool == 30109) {
				func_782(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528694); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528702, 30118, 30117); //@t
				var_0_object->AddReply(528700, 30116, 30115); //@t
				return 0;
			}
			if(var_36_bool == 30116) {
				func_782(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528701); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528704, 30118, 30119); //@t
				return 0;
			}
			if(var_36_bool == 30118) {
				func_782(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528703); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528695, 30111, 30110); //@t
				return 0;
			}
			if(var_36_bool == 30111) {
				func_782(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528696); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526180, -1, 27460); //@t
				return 0;
			}
			if(var_36_bool == 27455) {
				func_782(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526175); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528685, 30101, 30100); //@t
				return 0;
			}
			if(var_36_bool == 30101) {
				func_782(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528686); //@t
				var_0_object->ClearReplies(); //@t
				bool var_435_bool;
				func_3847(var_435_bool, var_1_object);
				if(!var_435_bool) //@nz
					var_0_object->AddReply(526176, -1, 27456); //@t
				bool var_441_bool;
				func_3847(var_441_bool, var_1_object);
				if(var_441_bool != 0)
					var_0_object->AddReply(526177, 27459, 27457); //@t
				return 0;
			}
			if(var_36_bool == 27655) {
				func_782(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526375); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528677, 30092, 30091); //@t
				return 0;
			}
			if(var_36_bool == 30092) {
				func_782(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528678); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528679, 30094, 30093); //@t
				var_0_object->AddReply(528681, 30094, 30095); //@t
				return 0;
			}
			if(var_36_bool == 30094) {
				func_782(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528680); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528682, 30098, 30097); //@t
				return 0;
			}
			if(var_36_bool == 30098) {
				func_782(var_37_cvector, "Neutral");
				var_0_object->SetMessage(528683); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526376, -1, 27656); //@t
				var_0_object->AddReply(526377, -1, 27657); //@t
				return 0;
			}
			var_3_string = true;
			bool var_480_bool;
			func_3537(var_480_bool);
			if(var_480_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x325";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3347();
			if(var_37_cvector == 28513) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3712();
			}
			if(var_37_cvector == 28885) {
				object var_71_object; object var_72_object;
				var_71_object = var_1_object;
				var_72_object = var_0_object;
				func_3721();
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_object;
				func_3555();
			}
			if(var_36_bool == 28512) {
				func_1508(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527204); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527205, 28514, 28513); //@t
				var_0_object->AddReply(527210, -1, 28518); //@t
				var_0_object->AddReply(527533, -1, 28871); //@t
				return 0;
			}
			if(var_36_bool == 28514) {
				func_1508(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527206); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527207, 28516, 28515); //@t
				return 0;
			}
			if(var_36_bool == 28516) {
				func_1508(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527208); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527534, 28874, 28872); //@t
				var_0_object->AddReply(527535, 28874, 28873); //@t
				return 0;
			}
			if(var_36_bool == 28874) {
				func_1508(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527536); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527537, 28876, 28875); //@t
				var_0_object->AddReply(527539, 28876, 28878); //@t
				return 0;
			}
			if(var_36_bool == 28876) {
				func_1508(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527538); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527540, 28881, 28880); //@t
				return 0;
			}
			if(var_36_bool == 28881) {
				func_1508(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527541); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527542, 28883, 28882); //@t
				return 0;
			}
			if(var_36_bool == 28883) {
				func_1508(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527543); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527209, 28884, 28517); //@t
				var_0_object->AddReply(527546, 28884, 28886); //@t
				return 0;
			}
			if(var_36_bool == 28884) {
				func_1508(var_37_cvector, "Neutral");
				var_0_object->SetMessage(527544); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527545, -1, 28885); //@t
				return 0;
			}
			var_3_string = true;
			bool var_177_bool;
			func_3537(var_177_bool);
			if(var_177_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x5fb";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3347();
			if(var_37_cvector == 26042) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3562();
			}
			if(var_37_cvector == 26045) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_3568();
				object var_66_object = var_1_object;
				func_3773(var_0_object);
			}
			if(var_36_bool == 26041) {
				func_1892(var_37_cvector, "Neutral");
				var_0_object->SetMessage(524702); //@t
				var_0_object->ClearReplies(); //@t
				bool var_107_bool = false;
				bool var_108_bool;
				func_3811(var_1_object);
				if(var_108_bool != 0) {
					bool var_116_bool;
					func_3823(var_1_object);
					if(var_116_bool != 0)
						var_107_bool = true;
				}
				if(var_107_bool != 0)
					var_0_object->AddReply(524703, 28087, 26042); //@t
				var_0_object->AddReply(524704, -1, 26043); //@t
				return 0;
			}
			if(var_36_bool == 28087) {
				func_1892(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526807); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526808, 28089, 28088); //@t
				return 0;
			}
			if(var_36_bool == 28089) {
				func_1892(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526809); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526810, 26044, 28090); //@t
				var_0_object->AddReply(526811, 28092, 28091); //@t
				return 0;
			}
			if(var_36_bool == 28092) {
				func_1892(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526812); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526813, 28095, 28093); //@t
				var_0_object->AddReply(526814, 28095, 28094); //@t
				return 0;
			}
			if(var_36_bool == 28095) {
				func_1892(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526815); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526816, 26044, 28097); //@t
				return 0;
			}
			if(var_36_bool == 26044) {
				func_1892(var_37_cvector, "Neutral");
				var_0_object->SetMessage(524705); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526817, 28100, 28099); //@t
				return 0;
			}
			if(var_36_bool == 28100) {
				func_1892(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526818); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526819, 28102, 28101); //@t
				return 0;
			}
			if(var_36_bool == 28102) {
				func_1892(var_37_cvector, "Neutral");
				var_0_object->SetMessage(526820); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524706, -1, 26045); //@t
				return 0;
			}
			var_3_string = true;
			bool var_183_bool;
			func_3537(var_183_bool);
			if(var_183_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x77b";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3347();
			if(var_37_cvector == 41268) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3757();
			}
			if(var_37_cvector == 41271) {
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_object;
				func_3748();
			}
			if(var_37_cvector == 41278) {
				object var_91_object; object var_92_object;
				var_91_object = var_1_object;
				var_92_object = var_0_object;
				func_3748();
			}
			if(var_36_bool == 41261) {
				bool var_95_bool = false;
				bool var_96_bool;
				func_3930(var_1_object);
				if(var_96_bool != 0) {
					bool var_102_bool;
					func_3799(var_1_object);
					if(!var_102_bool) //@nz
						var_95_bool = true;
				}
				if(var_95_bool != 0) {
					object var_109_object; object var_110_object;
					var_109_object = var_1_object;
					var_110_object = var_0_object;
					func_3742();
					func_2331(var_37_cvector, "Neutral");
					var_0_object->SetMessage(539318); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(539319, 41263, 41262); //@t
					var_0_object->AddReply(539330, 41265, 41273); //@t
					return 0;
				}
				func_2331(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539331); //@t
				var_0_object->ClearReplies(); //@t
				bool var_134_bool = false;
				bool var_135_bool = false;
				bool var_136_bool;
				func_3789(var_136_bool, var_1_object);
				if(var_136_bool != 0) {
					bool var_185_bool;
					func_3918(var_1_object);
					if(!var_185_bool) //@nz
						var_135_bool = true;
				}
				if(var_135_bool != 0) {
					bool var_192_bool;
					func_3799(var_1_object);
					if(!var_192_bool) //@nz
						var_134_bool = true;
				}
				if(var_134_bool != 0)
					var_0_object->AddReply(539332, 41277, 41276); //@t
				var_0_object->AddReply(539335, -1, 41279); //@t
				return 0;
			}
			if(var_36_bool == 41277) {
				func_2331(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539333); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539334, -1, 41278); //@t
				return 0;
			}
			if(var_36_bool == 41263) {
				func_2331(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539320); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539321, 41265, 41264); //@t
				return 0;
			}
			if(var_36_bool == 41265) {
				func_2331(var_37_cvector, "Neutral");
				var_0_object->SetMessage(539322); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539323, 41267, 41266); //@t
				return 0;
			}
			if(var_36_bool == 41267) {
				bool var_224_bool;
				func_3789(var_224_bool, var_1_object);
				if(!var_224_bool) { //@nz
					func_2331(var_37_cvector, "Neutral");
					var_0_object->SetMessage(539324); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(539325, -1, 41268); //@t
					var_0_object->AddReply(539326, -1, 41269); //@t
					return 0;
				}
				bool var_235_bool;
				func_3789(var_235_bool, var_1_object);
				if(var_235_bool != 0) {
					func_2331(var_37_cvector, "Neutral");
					var_0_object->SetMessage(539327); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(539328, -1, 41271); //@t
					var_0_object->AddReply(539329, -1, 41272); //@t
					return 0;
				}
			}
			var_3_string = true;
			bool var_245_bool;
			func_3537(var_245_bool);
			if(var_245_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x932";
	
	}

}


task task_13
{
}


task task_14
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3347();
			if(var_36_int == 42554) {
				func_2731(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540546, -1, 42555); //@t
				var_0_object->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_3537(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xac2";
	
	}

}


maintask task_15
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_2799(var_35_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, int var_36_int)
	{
		if(var_36_int == 10) {
			func_2870();
			bool var_40_bool = false;
			bool var_41_bool;
			func_3091(var_41_bool);
			if(var_41_bool != 0) {
				bool var_44_bool;
				func_2839(var_44_bool);
				if(var_44_bool != 0)
					var_40_bool = true;
			}
			if(var_40_bool != 0) {
				bool var_61_bool;
				func_2819(var_61_bool);
				if(var_61_bool != 0) {
					bool var_80_bool; object var_81_object;
					object var_82_object;
					func_3354(var_82_object);
					var_82_object = var_81_object;
					func_3239(var_80_bool, var_81_object);
				}
			} else {
				func_2834(var_36_int);
				func_2861();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_3052();
		func_2870();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
		{
		@StopGroup0();
		func_2870();
		func_3319("Neutral");
		func_2861();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, bool var_36_bool)
	{
		if(var_36_bool != 0)
			func_2861();
		else
			func_3319("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, object var_36_object)
	{
		bool var_38_bool;
		@IsOverrideActive(var_38_bool);
		if(!var_38_bool) { //@nz
			disable OnUse;
			func_3052();
			bool var_40_bool; object var_41_object;
			var_36_object = var_41_object;
			func_3082(var_40_bool, var_41_object);
			enable OnUse;
			object var_54_object;
			var_36_object = var_54_object;
			func_4264(var_54_object);
			func_3319("Neutral");
			func_2870();
			func_2861();
		}
	}

}


// @pe
void func_3584(void)
{
	@SetVariable("k2q01", 5);
	func_4000();
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_40_bool;
	func_3091(var_40_bool);
	if(!var_40_bool) goto Label_0; //@nz
}


void func_3072(bool var_44_bool, cvector var_45_cvector)
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


void func_2819(bool var_61_bool)
{
	object var_63_object;
	@FindActor(var_63_object, "player");
	if(!var_63_object) //@nz
		var_61_bool = false;
	bool var_66_bool; object var_67_object;
	var_63_object = var_67_object;
	func_3082(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
}
EMIT "Stack[-1] = 0";


void func_3332(bool var_104_bool, string var_105_string)
{
	bool var_107_bool;
	bool var_108_bool;
	func_3537(var_108_bool);
	if(var_108_bool != 0) {
		@lshHasSpeech(var_107_bool, var_105_string);
		if(var_107_bool != 0) {
			@lshPlaySpeech(var_105_string);
			var_104_bool = true;
		}
	}
	var_104_bool = false;
}


// @pe
void func_3847(bool var_499_bool, object var_500_object)
{
	object var_502_object;
	var_500_object = var_502_object;
	bool var_501_bool;
	func_3466(var_501_bool, var_502_object, "bird_balahon");
	if(var_501_bool != 0) {
		var_499_bool = true;
		return 0;
	}
	var_499_bool = false;
}


void func_3593(void)
{
	object var_170_object;
	int var_171_int;
	func_3370(var_171_int, "k7q01CorpseMark");
	if(var_171_int == 0) {
		@SetVariable("k7q01CorpseMark", 1);
		object var_179_object;
		func_4106(var_179_object);
		var_179_object = var_170_object;
		float var_184_float;
		func_3485(var_184_float);
		var_170_object->AddMark("k7q01BirdmaskGotoCorpse", "pt_d7q02_corpse", 3, 526214, var_184_float);
		bool var_185_bool;
		func_3473(var_185_bool, "quest_k7_01", "place_corpse");
		var_170_object = null;
	}
}


void func_3082(bool var_40_bool, object var_41_object)
{
	cvector var_43_cvector;
	var_41_object->GetPosition(var_43_cvector);
	bool var_44_bool; cvector var_45_cvector;
	var_43_cvector = var_45_cvector;
	func_3072(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
}


void func_4106(object var_52_object)
{
	object var_55_object; object var_56_object;
	@GetMainOutdoorScene(var_55_object);
	if(var_55_object == null) {
		@Trace("Can't find main outdoor scene");
		var_56_object = null;
		var_56_object = var_52_object;
	}
	var_55_object->GetMap(var_56_object);
	var_56_object = var_52_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_13(object var_0_object, int var_350_int, object var_351_object)
{
	var_0_object = var_351_object;
	bool var_361_bool; object var_362_object;
	object var_363_object;
	func_3354(var_363_object);
	var_363_object = var_362_object;
	func_3181(var_361_bool, var_362_object);
	bool var_364_bool; object var_365_object;
	var_351_object = var_365_object;
	func_3096(var_364_bool, var_365_object, 70.0);
	if(!var_364_bool) { //@nz
		var_350_int = -2;
		return 8;
	}
	object var_357_object;
	@CreateDialog(var_357_object);
	int var_368_int;
	func_3531(var_368_int);
	var_357_object->SetNPCName(var_368_int);
	int var_369_int;
	func_3529(var_369_int);
	var_357_object->SetNPCDescription(var_369_int);
	string var_370_string;
	func_3533(var_370_string);
	var_357_object->SetPhoto(var_370_string);
	string var_371_string;
	func_3535(var_371_string);
	var_357_object->SetPhoto2(var_371_string);
	int var_372_int;
	func_4156(var_372_int);
	var_357_object->SetPlayerName(var_372_int);
	bool var_358_bool;
	@IsOverrideActive(var_358_bool);
	if(var_358_bool != 0) {
		var_350_int = -2;
		return 8;
	}
	@DoDialog(var_357_object);
	object var_374_object; object var_375_object;
	var_351_object = var_374_object;
	var_357_object = var_375_object;
	TaskCall(2);
	func_94(var_376_object, var_377_object, var_378_string, var_379_bool, var_374_object, var_375_object);
	TaskReturn();
	bool var_360_bool;
	var_357_object->IsDialogEnd(var_360_bool);
	
	for(;;) {
		var_410_bool = !var_360_bool; //@nz
		if(var_410_bool == 0) goto Label_83;
		@sync();
		var_357_object->IsDialogEnd(var_360_bool);
	}
	
Label_83:
	object var_411_object;
	var_351_object = var_411_object;
	func_3164();
	@StopDialog(var_357_object);
	var_357_object->GetReturnValue(-1);
	int var_359_int = var_350_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_782(object var_2_object, string var_455_string)
{
	bool var_456_bool;
	func_3537(var_456_bool);
	if(!var_456_bool) //@nz
		return 0;
	if(var_455_string == var_2_object)
		return 0;
	string var_459_string; bool var_460_bool;
	var_455_string = var_459_string;
	if(var_455_string == "")
		var_460_bool = false;
	else
		var_460_bool = true;
	func_3326(var_459_string, var_460_bool);
	var_2_object = var_455_string;
	
}


// @pe
void func_3858(bool var_481_bool)
{
	int var_483_int;
	func_3370(var_483_int, "k7q01");
	if(var_483_int == 3)
		var_481_bool = true;
	var_481_bool = false;
}


void func_3091(bool var_36_bool)
{
	bool var_38_bool;
	@IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
}


void func_3347(void)
{
	bool var_39_bool;
	func_3537(var_39_bool);
	if(var_39_bool != 0)
		@lshStopSpeech();
}


void func_2834(object var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_113_float, var_114_float);
}


void func_2839(bool var_44_bool)
{
	object var_47_object;
	@FindActor(var_47_object, "player");
	if(!var_47_object) { //@nz
		var_44_bool = false;
		return 4;
	}
	float var_51_float; object var_52_object;
	func_3057(var_51_float, var_52_object);
	if(var_51_float > 90000.0) {
		var_44_bool = false;
		return 4;
	}
	bool var_48_bool;
	@CanSee(var_48_bool, var_52_object);
	var_48_bool = var_44_bool;
}
EMIT "Stack[-2] = 0";


void func_3096(bool var_165_bool, object var_166_object, float var_167_float)
{
	cvector var_178_cvector; bool var_185_bool;
	var_166_object->GetPosition(var_178_cvector);
	float var_177_float;
	var_166_object->GetEyesHeight(var_177_float);
	var_186_float = GetByIndex(var_178_cvector, 1);
	SetByIndex(var_178_cvector, 1) = (var_186_float + var_177_float);
	cvector var_179_cvector;
	@GetPosition(var_179_cvector);
	@GetEyesHeight(var_177_float);
	var_187_float = GetByIndex(var_179_cvector, 1);
	SetByIndex(var_179_cvector, 1) = (var_187_float + var_177_float);
	cvector var_180_cvector = var_178_cvector - var_179_cvector;
	var_188_float = GetByIndex(var_180_cvector, 1);
	SetByIndex(var_180_cvector, 1) = (float)0;
	var_190_float = sqrt(var_180_cvector | var_180_cvector);
	var_180_cvector /= var_190_float;
	cvector var_181_cvector = -var_180_cvector;
	cvector var_192_cvector;
	func_3360(var_192_cvector, (var_181_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_182_cvector = ((var_180_cvector * var_167_float) + (var_192_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_184_bool;
	@IsOverrideActive(var_184_bool);
	if(var_184_bool != 0)
		var_165_bool = false;
	@StopWorld();
	@CameraTransit((var_179_cvector + var_182_cvector), var_181_cvector);
	var_205_float = GetByIndex(var_182_cvector, 0);
	var_206_float = GetByIndex(var_182_cvector, 2);
	@Rotate(var_205_float, var_206_float);
	bool var_207_bool;
	func_3537(var_207_bool);
	if(var_207_bool != 0) {
	} else {
		@HasAnimationTrack(var_185_bool, "head");
		if(var_185_bool == 0) goto Label_3158;
		@LookAsyncCamera("head");
	}
Label_3158:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_165_bool = true;
	
}


void func_3354(object var_72_object)
{
	object var_74_object;
	@self(var_74_object);
	var_74_object = var_72_object;
}
EMIT "Stack[-1] = 0";


void func_4123(object var_68_object, string var_69_string, float var_70_float)
{
	object var_78_object;
	@GetMainOutdoorScene(var_78_object);
	if(var_78_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_76_cvector;
	cvector var_77_cvector;
	bool var_79_bool;
	var_78_object->GetLocator(var_69_string, var_79_bool, var_76_cvector, var_77_cvector);
	if(!var_79_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_69_string) + " doesnt exist");
	var_78_object->GetMap(var_68_object);
	if(var_68_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_89_float = GetByIndex(var_76_cvector, 0);
	var_90_float = GetByIndex(var_76_cvector, 2);
	var_68_object->SetMapParams(var_89_float, var_90_float, var_70_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_2331(object var_2_object, string var_649_string)
{
	bool var_650_bool;
	func_3537(var_650_bool);
	if(!var_650_bool) //@nz
		return 0;
	if(var_649_string == var_2_object)
		return 0;
	string var_653_string; bool var_654_bool;
	var_649_string = var_653_string;
	if(var_649_string == "")
		var_654_bool = false;
	else
		var_654_bool = true;
	func_3326(var_653_string, var_654_bool);
	var_2_object = var_649_string;
	
}


// @pe
void func_1820(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_301_object, object var_302_object)
{
	var_0_object = var_302_object;
	var_1_object = var_301_object;
	var_3_string = false;
	if(1 != 0) {
		func_1892(var_302_object, "Neutral");
		var_0_object->SetMessage(524702); //@t
		var_0_object->ClearReplies(); //@t
		bool var_317_bool = false;
		bool var_318_bool;
		func_3811(var_1_object);
		if(var_318_bool != 0) {
			bool var_326_bool;
			func_3823(var_1_object);
			if(var_326_bool != 0)
				var_317_bool = true;
		}
		if(var_317_bool != 0)
			var_0_object->AddReply(524703, 28087, 26042); //@t
		var_0_object->AddReply(524704, -1, 26043); //@t
		goto Label_1862;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x720";
	}
Label_1862:
	bool var_338_bool;
	func_3537(var_338_bool);
	if(var_338_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3319(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1891;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1891:
		return 0;

	}
	
}


// @pe
void func_3870(bool var_487_bool)
{
	int var_489_int;
	func_3370(var_489_int, "ook7Burah1");
	if(var_489_int == 0) {
		var_487_bool = true;
		return 0;
	}
	var_487_bool = false;
}


void func_2592(object var_0_object, int var_743_int, object var_744_object)
{
	var_0_object = var_744_object;
	bool var_754_bool; object var_755_object;
	object var_756_object;
	func_3354(var_756_object);
	var_756_object = var_755_object;
	func_3181(var_754_bool, var_755_object);
	bool var_757_bool; object var_758_object;
	var_744_object = var_758_object;
	func_3096(var_757_bool, var_758_object, 70.0);
	if(!var_757_bool) { //@nz
		var_743_int = -2;
		return 8;
	}
	object var_750_object;
	@CreateDialog(var_750_object);
	int var_761_int;
	func_3531(var_761_int);
	var_750_object->SetNPCName(var_761_int);
	int var_762_int;
	func_3529(var_762_int);
	var_750_object->SetNPCDescription(var_762_int);
	string var_763_string;
	func_3533(var_763_string);
	var_750_object->SetPhoto(var_763_string);
	string var_764_string;
	func_3535(var_764_string);
	var_750_object->SetPhoto2(var_764_string);
	int var_765_int;
	func_4156(var_765_int);
	var_750_object->SetPlayerName(var_765_int);
	bool var_751_bool;
	@IsOverrideActive(var_751_bool);
	if(var_751_bool != 0) {
		var_743_int = -2;
		return 8;
	}
	@DoDialog(var_750_object);
	object var_767_object; object var_768_object;
	var_744_object = var_767_object;
	var_750_object = var_768_object;
	TaskCall(14);
	func_2673(var_769_object, var_770_object, var_771_string, var_772_bool, var_767_object, var_768_object);
	TaskReturn();
	bool var_753_bool;
	var_750_object->IsDialogEnd(var_753_bool);
	
	for(;;) {
		var_797_bool = !var_753_bool; //@nz
		if(var_797_bool == 0) goto Label_2662;
		@sync();
		var_750_object->IsDialogEnd(var_753_bool);
	}
	
Label_2662:
	object var_798_object;
	var_744_object = var_798_object;
	func_3164();
	@StopDialog(var_750_object);
	var_750_object->GetReturnValue(-1);
	int var_752_int = var_743_int;
}
EMIT "Stack[-4] = 0";


void func_3360(cvector var_192_cvector, cvector var_193_cvector)
{
	float var_196_float = sqrt(var_193_cvector | var_193_cvector);
	if(var_196_float < 0.000001)
		var_192_cvector = [0.0, 0.0, 0.0];
	var_192_cvector = var_193_cvector / var_196_float;
}


// @pe
void func_3625(void)
{
	@SetVariable("ook7Burah1", 1);
}


// @pe
void func_3882(bool var_511_bool)
{
	int var_513_int;
	func_3370(var_513_int, "k7q03");
	if(var_513_int == 0) {
		var_511_bool = true;
		return 0;
	}
	var_511_bool = false;
}


void func_555(object var_0_object, int var_414_int, object var_415_object)
{
	var_0_object = var_415_object;
	bool var_425_bool; object var_426_object;
	object var_427_object;
	func_3354(var_427_object);
	var_427_object = var_426_object;
	func_3181(var_425_bool, var_426_object);
	bool var_428_bool; object var_429_object;
	var_415_object = var_429_object;
	func_3096(var_428_bool, var_429_object, 70.0);
	if(!var_428_bool) { //@nz
		var_414_int = -2;
		return 8;
	}
	object var_421_object;
	@CreateDialog(var_421_object);
	int var_432_int;
	func_3531(var_432_int);
	var_421_object->SetNPCName(var_432_int);
	int var_433_int;
	func_3529(var_433_int);
	var_421_object->SetNPCDescription(var_433_int);
	string var_434_string;
	func_3533(var_434_string);
	var_421_object->SetPhoto(var_434_string);
	string var_435_string;
	func_3535(var_435_string);
	var_421_object->SetPhoto2(var_435_string);
	int var_436_int;
	func_4156(var_436_int);
	var_421_object->SetPlayerName(var_436_int);
	bool var_422_bool;
	@IsOverrideActive(var_422_bool);
	if(var_422_bool != 0) {
		var_414_int = -2;
		return 8;
	}
	@DoDialog(var_421_object);
	object var_438_object; object var_439_object;
	var_415_object = var_438_object;
	var_421_object = var_439_object;
	TaskCall(6);
	func_636(var_440_object, var_441_object, var_442_string, var_443_bool, var_438_object, var_439_object);
	TaskReturn();
	bool var_424_bool;
	var_421_object->IsDialogEnd(var_424_bool);
	
	for(;;) {
		var_535_bool = !var_424_bool; //@nz
		if(var_535_bool == 0) goto Label_625;
		@sync();
		var_421_object->IsDialogEnd(var_424_bool);
	}
	
Label_625:
	object var_536_object;
	var_415_object = var_536_object;
	func_3164();
	@StopDialog(var_421_object);
	var_421_object->GetReturnValue(-1);
	int var_423_int = var_414_int;
}
EMIT "Stack[-4] = 0";


void func_3370(int var_320_int, string var_321_string)
{
	int var_323_int;
	@GetVariable(var_321_string, var_323_int);
	var_323_int = var_320_int;
}


void func_2861(void)
{
	float var_50_float;
	@rand(var_50_float, 8, 16);
	@SetTimer(10, var_50_float);
}


void func_3631(object var_190_object)
{
	@SetVariable("k7q01", 4);
	func_4013();
	int var_193_int;
	var_190_object->RemoveItemByType(var_193_int, "bird_balahon", 1);
}


void func_3375(object var_91_object, string var_92_string)
{
	object var_95_object;
	@GetMainOutdoorScene(var_95_object);
	object var_96_object;
	@AddBlankActor(var_96_object, var_95_object, var_92_string, (var_92_string + ".bin"));
	var_96_object = var_91_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_3894(bool var_445_bool)
{
	int var_447_int;
	func_3370(var_447_int, "ook7Burah2");
	if(var_447_int == 0) {
		var_445_bool = true;
		return 0;
	}
	var_445_bool = false;
}


void func_2870(void)
{
	@KillTimer(10);
}


void func_3386(string var_85_string, bool var_86_bool)
{
	object var_88_object;
	@FindActor(var_88_object, var_85_string);
	if(!var_88_object) //@nz
		@Trace(("Door " + var_85_string) + " not found");
	else
		var_88_object->SetProperty("locked", var_86_bool);
	
}
EMIT "Stack[-1] = 0";


void func_4156(int var_216_int)
{
	int var_218_int;
	@GetVariable("branch", var_218_int);
	if(var_218_int == 0) {
		var_216_int = 1;
		return 2;
	EMIT "GOTO 0x104b";
	}
	if(var_218_int == 1) {
		var_216_int = 2;
		return 2;
	}
	var_216_int = 3;
}


void func_3644(void)
{
	object var_46_object;
	func_4106(var_46_object);
	object var_45_object;
	var_46_object = var_45_object;
	float var_57_float;
	func_3485(var_57_float);
	var_45_object->AddMark("k7q03BurahGotoFather", "pt_map_burah_home", 0, 526394, var_57_float);
	func_4026();
	func_4039();
	object var_91_object;
	func_3375(var_91_object, "quest_k7_03");
	bool var_99_bool;
	func_3473(var_99_bool, "quest_k7_03", "place_family");
}
EMIT "Stack[-1] = 0";


void func_316(object var_0_object, int var_59_int, object var_60_object)
{
	var_0_object = var_60_object;
	bool var_70_bool; object var_71_object;
	object var_72_object;
	func_3354(var_72_object);
	var_72_object = var_71_object;
	func_3181(var_70_bool, var_71_object);
	bool var_165_bool; object var_166_object;
	var_60_object = var_166_object;
	func_3096(var_165_bool, var_166_object, 70.0);
	if(!var_165_bool) { //@nz
		var_59_int = -2;
		return 8;
	}
	object var_66_object;
	@CreateDialog(var_66_object);
	int var_212_int;
	func_3531(var_212_int);
	var_66_object->SetNPCName(var_212_int);
	int var_213_int;
	func_3529(var_213_int);
	var_66_object->SetNPCDescription(var_213_int);
	string var_214_string;
	func_3533(var_214_string);
	var_66_object->SetPhoto(var_214_string);
	string var_215_string;
	func_3535(var_215_string);
	var_66_object->SetPhoto2(var_215_string);
	int var_216_int;
	func_4156(var_216_int);
	var_66_object->SetPlayerName(var_216_int);
	bool var_67_bool;
	@IsOverrideActive(var_67_bool);
	if(var_67_bool != 0) {
		var_59_int = -2;
		return 8;
	}
	@DoDialog(var_66_object);
	object var_225_object; object var_226_object;
	var_60_object = var_225_object;
	var_66_object = var_226_object;
	TaskCall(4);
	func_397(var_227_object, var_228_object, var_229_string, var_230_bool, var_225_object, var_226_object);
	TaskReturn();
	bool var_69_bool;
	var_66_object->IsDialogEnd(var_69_bool);
	
	for(;;) {
		var_264_bool = !var_69_bool; //@nz
		if(var_264_bool == 0) goto Label_386;
		@sync();
		var_66_object->IsDialogEnd(var_69_bool);
	}
	
Label_386:
	object var_265_object;
	var_60_object = var_265_object;
	func_3164();
	@StopDialog(var_66_object);
	var_66_object->GetReturnValue(-1);
	int var_68_int = var_59_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3906(bool var_520_bool)
{
	int var_522_int;
	func_3370(var_522_int, "k7q03");
	if(var_522_int == 2)
		var_520_bool = true;
	var_520_bool = false;
}


void func_3403(int var_128_int, int var_129_int)
{
	object var_131_object;
	@CreateIntVector(var_131_object);
	var_131_object->add(var_128_int);
	var_131_object->add(var_129_int);
	@SendWorldWndMessage(3, var_131_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4173(object var_689_object, bool var_690_bool, int var_691_int)
{
	var_689_object->add(18);
	var_689_object->add(24);
	var_689_object->add(20);
	var_689_object->add(14);
	if(var_690_bool == false) {
		var_689_object->add(10);
		var_689_object->add(17);
		var_689_object->add(8);
	} else if(var_691_int != 1) {
		var_689_object->add(10);
	}
	
}


// @pe
void func_3918(bool var_725_bool)
{
	int var_727_int;
	func_3370(var_727_int, "k12q01BurahInSobor");
	if(var_727_int != 0) {
		var_725_bool = true;
		return 0;
	}
	var_725_bool = false;
}


void func_2127(object var_0_object, int var_600_int, object var_601_object)
{
	var_0_object = var_601_object;
	bool var_611_bool; object var_612_object;
	object var_613_object;
	func_3354(var_613_object);
	var_613_object = var_612_object;
	func_3181(var_611_bool, var_612_object);
	bool var_614_bool; object var_615_object;
	var_601_object = var_615_object;
	func_3096(var_614_bool, var_615_object, 70.0);
	if(!var_614_bool) { //@nz
		var_600_int = -2;
		return 8;
	}
	object var_607_object;
	@CreateDialog(var_607_object);
	int var_618_int;
	func_3531(var_618_int);
	var_607_object->SetNPCName(var_618_int);
	int var_619_int;
	func_3529(var_619_int);
	var_607_object->SetNPCDescription(var_619_int);
	string var_620_string;
	func_3533(var_620_string);
	var_607_object->SetPhoto(var_620_string);
	string var_621_string;
	func_3535(var_621_string);
	var_607_object->SetPhoto2(var_621_string);
	int var_622_int;
	func_4156(var_622_int);
	var_607_object->SetPlayerName(var_622_int);
	bool var_608_bool;
	@IsOverrideActive(var_608_bool);
	if(var_608_bool != 0) {
		var_600_int = -2;
		return 8;
	}
	@DoDialog(var_607_object);
	object var_624_object; object var_625_object;
	var_601_object = var_624_object;
	var_607_object = var_625_object;
	TaskCall(12);
	func_2208(var_626_object, var_627_object, var_628_string, var_629_bool, var_624_object, var_625_object);
	TaskReturn();
	bool var_610_bool;
	var_607_object->IsDialogEnd(var_610_bool);
	
	for(;;) {
		var_741_bool = !var_610_bool; //@nz
		if(var_741_bool == 0) goto Label_2197;
		@sync();
		var_607_object->IsDialogEnd(var_610_bool);
	}
	
Label_2197:
	object var_742_object;
	var_601_object = var_742_object;
	func_3164();
	@StopDialog(var_607_object);
	var_607_object->GetReturnValue(-1);
	int var_609_int = var_600_int;
}
EMIT "Stack[-4] = 0";


void func_1364(object var_0_object, int var_539_int, object var_540_object)
{
	var_0_object = var_540_object;
	bool var_550_bool; object var_551_object;
	object var_552_object;
	func_3354(var_552_object);
	var_552_object = var_551_object;
	func_3181(var_550_bool, var_551_object);
	bool var_553_bool; object var_554_object;
	var_540_object = var_554_object;
	func_3096(var_553_bool, var_554_object, 70.0);
	if(!var_553_bool) { //@nz
		var_539_int = -2;
		return 8;
	}
	object var_546_object;
	@CreateDialog(var_546_object);
	int var_557_int;
	func_3531(var_557_int);
	var_546_object->SetNPCName(var_557_int);
	int var_558_int;
	func_3529(var_558_int);
	var_546_object->SetNPCDescription(var_558_int);
	string var_559_string;
	func_3533(var_559_string);
	var_546_object->SetPhoto(var_559_string);
	string var_560_string;
	func_3535(var_560_string);
	var_546_object->SetPhoto2(var_560_string);
	int var_561_int;
	func_4156(var_561_int);
	var_546_object->SetPlayerName(var_561_int);
	bool var_547_bool;
	@IsOverrideActive(var_547_bool);
	if(var_547_bool != 0) {
		var_539_int = -2;
		return 8;
	}
	@DoDialog(var_546_object);
	object var_563_object; object var_564_object;
	var_540_object = var_563_object;
	var_546_object = var_564_object;
	TaskCall(8);
	func_1445(var_565_object, var_566_object, var_567_string, var_568_bool, var_563_object, var_564_object);
	TaskReturn();
	bool var_549_bool;
	var_546_object->IsDialogEnd(var_549_bool);
	
	for(;;) {
		var_596_bool = !var_549_bool; //@nz
		if(var_596_bool == 0) goto Label_1434;
		@sync();
		var_546_object->IsDialogEnd(var_549_bool);
	}
	
Label_1434:
	object var_597_object;
	var_540_object = var_597_object;
	func_3164();
	@StopDialog(var_546_object);
	var_546_object->GetReturnValue(-1);
	int var_548_int = var_539_int;
}
EMIT "Stack[-4] = 0";


void func_3415(object var_234_object, int var_235_int)
{
	int var_237_int;
	object var_238_object;
	var_234_object = var_238_object;
	int var_240_int;
	func_3065(var_238_object, "money", var_240_int);
	if(var_240_int > 0) {
		@GetInvItemByName(var_237_int, "Money");
		int var_247_int; int var_248_int;
		var_237_int = var_247_int;
		var_235_int = var_248_int;
		func_3403(var_247_int, var_248_int);
	}
}


// @pe
void func_3930(bool var_632_bool)
{
	int var_634_int;
	func_3370(var_634_int, "ook12BurahFactory1");
	if(var_634_int == 0) {
		var_632_bool = true;
		return 0;
	}
	var_632_bool = false;
}


// @pe
void func_3675(void)
{
	@SetVariable("ook7Burah2", 1);
}


void func_3164(void)
{
	bool var_267_bool;
	@CameraSwitchToNormal();
	bool var_268_bool;
	func_3537(var_268_bool);
	if(var_268_bool != 0) {
	} else {
		@HasAnimationTrack(var_267_bool, "head");
		if(var_267_bool == 0) goto Label_3180;
		@UnlookAsync("head");
	}
Label_3180:
	
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_374_object, object var_375_object)
{
	var_0_object = var_375_object;
	var_3_string = false;
	if(1 != 0) {
		func_157(var_375_object, "Neutral");
		var_0_object->SetMessage(525257); //@t
		var_0_object->ClearReplies(); //@t
		bool var_390_bool;
		func_3835(var_374_object);
		if(var_390_bool != 0)
			var_0_object->AddReply(525258, 30607, 26626); //@t
		var_0_object->AddReply(525261, -1, 26629); //@t
		goto Label_127;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_127:
	bool var_402_bool;
	func_3537(var_402_bool);
	if(var_402_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3319(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_156;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_156:
		return 0;

	}
	
}


// @pe
void func_3681(object var_109_object)
{
	@Trace("tvirin 5 is given");
	object var_112_object;
	var_109_object = var_112_object;
	func_3453(var_112_object, "tvirin", 5);
}


// @pe
void func_1892(object var_2_object, string var_308_string)
{
	bool var_309_bool;
	func_3537(var_309_bool);
	if(!var_309_bool) //@nz
		return 0;
	if(var_308_string == var_2_object)
		return 0;
	string var_312_string; bool var_313_bool;
	var_308_string = var_312_string;
	if(var_308_string == "")
		var_313_bool = false;
	else
		var_313_bool = true;
	func_3326(var_312_string, var_313_bool);
	var_2_object = var_308_string;
	
}


// @pe
void func_3942(bool var_678_bool)
{
	bool var_680_bool;
	func_4226(var_680_bool);
	var_680_bool = var_678_bool;
}


void func_3434(object var_117_object, object var_118_object, int var_119_int)
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
		func_3403(var_128_int, var_129_int);
	}
	
}


// @pe
void func_3692(void)
{
	func_4052();
	bool var_228_bool;
	func_3473(var_228_bool, "quest_k7_03", "completed");
}


void func_3181(bool var_70_bool, object var_71_object)
{
	int var_77_int; int var_78_int;
	@GetVariable("voice_common", var_77_int);
	if(var_77_int != 0) {
		bool var_81_bool; object var_82_object;
		var_71_object = var_82_object;
		func_3239(var_81_bool, var_82_object);
		if(!var_81_bool) { //@nz
			bool var_112_bool; object var_113_object;
			var_71_object = var_113_object;
			func_3276(var_112_bool, var_113_object);
			if(!var_112_bool) { //@nz
				var_70_bool = false;
				return 4;
			}
		}
		@irand(var_78_int, 2);
		if(var_78_int != 0)
			@SetVariable("voice_common", ((var_77_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_157_bool; object var_158_object;
		var_71_object = var_158_object;
		func_3276(var_157_bool, var_158_object);
		if(!var_157_bool) { //@nz
			bool var_160_bool; object var_161_object;
			var_71_object = var_161_object;
			func_3239(var_160_bool, var_161_object);
			if(!var_160_bool) { //@nz
				var_70_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_3237;
	
Label_3237:
	var_70_bool = true;
	
}


void func_4206(bool var_715_bool, int var_716_int)
{
	int var_718_int;
	@GetVariable(("vol_" + var_716_int), var_718_int);
	var_715_bool = (var_718_int & 4) != 0;
}


void func_3948(void)
{
	object var_76_object;
	@CreateDiaryEntry(var_76_object, 488, 1, 528055);
	bool var_80_bool; object var_81_object;
	var_76_object = var_81_object;
	func_4078(var_80_bool, var_81_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2673(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_767_object, object var_768_object)
{
	var_0_object = var_768_object;
	var_1_object = var_767_object;
	var_3_string = false;
	if(1 != 0) {
		func_2731(var_768_object, "Neutral");
		var_0_object->SetMessage(540545); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540546, -1, 42555); //@t
		var_0_object->AddReply(540798, -1, 42847); //@t
		goto Label_2701;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa75";
	}
Label_2701:
	bool var_789_bool;
	func_3537(var_789_bool);
	if(var_789_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3319(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2730;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2730:
		return 0;

	}
	
}


// @pe
void func_3702(object var_231_object)
{
	@Trace("money2000 is given");
	object var_234_object;
	var_231_object = var_234_object;
	func_3415(var_234_object, 2000);
}


void func_4216(bool var_706_bool, int var_707_int)
{
	int var_709_int;
	@GetVariable(("vol_" + var_707_int), var_709_int);
	var_706_bool = (var_709_int & 16) != 0;
}


void func_3961(void)
{
	object var_47_object;
	@CreateDiaryEntry(var_47_object, 487, 1, 528054);
	bool var_51_bool; object var_52_object;
	var_47_object = var_52_object;
	func_4078(var_51_bool, var_52_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_636(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_438_object, object var_439_object)
{
	var_0_object = var_439_object;
	var_1_object = var_438_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_445_bool;
		func_3894(var_1_object);
		if(var_445_bool != 0) {
			object var_451_object; object var_452_object;
			var_451_object = var_1_object;
			var_452_object = var_0_object;
			func_3675();
			func_782(var_439_object, "Neutral");
			var_0_object->SetMessage(526373); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526374, 27655, 27654); //@t
			var_0_object->AddReply(528676, 27655, 30089); //@t
		} else {
					func_782(var_439_object, "Neutral");
					var_0_object->SetMessage(526173); //@t
					var_0_object->ClearReplies(); //@t
					bool var_480_bool = false;
					bool var_481_bool;
					func_3858(var_1_object);
					if(var_481_bool != 0) {
						bool var_487_bool;
						func_3870(var_1_object);
						if(var_487_bool != 0)
							var_480_bool = true;
					}
					if(var_480_bool != 0)
						var_0_object->AddReply(526174, 27455, 27454); //@t
					bool var_496_bool = false;
					bool var_497_bool;
					func_3858(var_1_object);
					if(var_497_bool != 0) {
						bool var_499_bool;
						func_3847(var_499_bool, var_1_object);
						if(var_499_bool != 0)
							var_496_bool = true;
					}
					if(var_496_bool != 0)
						var_0_object->AddReply(526178, 27459, 27458); //@t
					bool var_511_bool;
					func_3882(var_1_object);
					if(var_511_bool != 0)
						var_0_object->AddReply(526378, 27659, 27658); //@t
					bool var_520_bool;
					func_3906(var_1_object);
					if(var_520_bool != 0)
						var_0_object->AddReply(526387, 27668, 27667); //@t
					var_0_object->AddReply(526181, -1, 27461); //@t
					var_0_object->AddReply(528675, -1, 30088); //@t
		}
	}
	for(;;) {
		bool var_470_bool;
		func_3537(var_470_bool);
		if(var_470_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3319(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_781;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_781:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x280";


void func_3453(object var_112_object, string var_113_string, int var_114_int)
{
	object var_116_object;
	@CreateInvItem(var_116_object);
	var_116_object->SetItemName(var_113_string);
	object var_117_object; object var_118_object; int var_119_int;
	var_112_object = var_117_object;
	var_116_object = var_118_object;
	var_114_int = var_119_int;
	func_3434(var_117_object, var_118_object, var_119_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3712(void)
{
	@SetVariable("k11q01", 4);
	func_3961();
}


void func_4226(bool var_680_bool)
{
	object var_685_object; int var_688_int;
	@CreateIntVector(var_685_object);
	object var_689_object;
	var_685_object = var_689_object;
	func_4173(var_689_object, false, -1);
	int var_686_int;
	var_685_object->size(var_686_int);
	int var_687_int = 0;
	
	while(var_687_int < var_686_int) {
		var_685_object->get(var_688_int, var_687_int);
		bool var_705_bool = true;
		bool var_706_bool; int var_707_int;
		var_688_int = var_707_int;
		func_4216(var_706_bool, var_707_int);
		if(var_706_bool != 1) {
			bool var_715_bool; int var_716_int;
			var_688_int = var_716_int;
			func_4206(var_715_bool, var_716_int);
			if(var_715_bool != 1)
				var_705_bool = false;
		}
		if(var_705_bool != 0)
			var_680_bool = false;
		var_687_int += 1;
	}
	
	var_680_bool = true;
}
EMIT "Stack[-4] = 0";


void func_3974(void)
{
	object var_82_object;
	@CreateDiaryEntry(var_82_object, 731, 1, 539361);
	bool var_86_bool; object var_87_object;
	var_82_object = var_87_object;
	func_4078(var_86_bool, var_87_object, 729);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3721(void)
{
	@SetVariable("k11q01", 5);
	func_3948();
}


void func_3466(bool var_501_bool, object var_502_object, string var_503_string)
{
	int var_506_int;
	@GetInvItemByName(var_506_int, var_503_string);
	bool var_507_bool;
	var_502_object->HasItem(var_506_int, var_507_bool);
	var_507_bool = var_501_bool;
}


// @pe
void func_397(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_225_object, object var_226_object)
{
	var_0_object = var_226_object;
	var_1_object = var_225_object;
	var_3_string = false;
	if(1 != 0) {
		func_455(var_226_object, "Neutral");
		var_0_object->SetMessage(525471); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525472, 27550, 26828); //@t
		var_0_object->AddReply(526276, 28085, 27552); //@t
		goto Label_425;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x191";
	}
Label_425:
	bool var_251_bool;
	func_3537(var_251_bool);
	if(var_251_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3319(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_454;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_454:
		return 0;

	}
	
}


void func_3473(bool var_99_bool, string var_100_string, string var_101_string)
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
void func_3730(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_3987(void)
{
	object var_53_object;
	@CreateDiaryEntry(var_53_object, 738, 1, 539368);
	bool var_57_bool; object var_58_object;
	var_53_object = var_58_object;
	func_4078(var_57_bool, var_58_object, 729);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3736(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_157(object var_2_object, string var_381_string)
{
	bool var_382_bool;
	func_3537(var_382_bool);
	if(!var_382_bool) //@nz
		return 0;
	if(var_381_string == var_2_object)
		return 0;
	string var_385_string; bool var_386_bool;
	var_381_string = var_385_string;
	if(var_381_string == "")
		var_386_bool = false;
	else
		var_386_bool = true;
	func_3326(var_385_string, var_386_bool);
	var_2_object = var_381_string;
	
}


// @pe
void func_3742(void)
{
	@SetVariable("ook12BurahFactory1", 1);
}


void func_3485(float var_63_float)
{
	float var_65_float;
	@GetGameTime(var_65_float);
	var_65_float = var_63_float;
}


// @pe
void func_2208(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_624_object, object var_625_object)
{
	var_0_object = var_625_object;
	var_1_object = var_624_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_631_bool = false;
		bool var_632_bool;
		func_3930(var_1_object);
		if(var_632_bool != 0) {
			bool var_638_bool;
			func_3799(var_1_object);
			if(!var_638_bool) //@nz
				var_631_bool = true;
		}
		if(var_631_bool != 0) {
			object var_645_object; object var_646_object;
			var_645_object = var_1_object;
			var_646_object = var_0_object;
			func_3742();
			func_2331(var_625_object, "Neutral");
			var_0_object->SetMessage(539318); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(539319, 41263, 41262); //@t
			var_0_object->AddReply(539330, 41265, 41273); //@t
		} else {
					func_2331(var_625_object, "Neutral");
					var_0_object->SetMessage(539331); //@t
					var_0_object->ClearReplies(); //@t
					bool var_674_bool = false;
					bool var_675_bool = false;
					bool var_676_bool;
					func_3789(var_676_bool, var_1_object);
					if(var_676_bool != 0) {
						bool var_725_bool;
						func_3918(var_1_object);
						if(!var_725_bool) //@nz
							var_675_bool = true;
					}
					if(var_675_bool != 0) {
						bool var_732_bool;
						func_3799(var_1_object);
						if(!var_732_bool) //@nz
							var_674_bool = true;
					}
					if(var_674_bool != 0)
						var_0_object->AddReply(539332, 41277, 41276); //@t
					var_0_object->AddReply(539335, -1, 41279); //@t
		}
	}
	for(;;) {
		bool var_664_bool;
		func_3537(var_664_bool);
		if(var_664_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3319(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_2330;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2330:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x8a4";


void func_4000(void)
{
	object var_47_object;
	@CreateDiaryEntry(var_47_object, 466, 1, 527782);
	bool var_51_bool; object var_52_object;
	var_47_object = var_52_object;
	func_4078(var_51_bool, var_52_object, 461);
}
EMIT "Stack[-1] = 0";


void func_3490(int var_125_int)
{
	float var_127_float;
	@GetGameTime(var_127_float);
	var_125_int = 1 + (var_127_float / 24);
}


// @pe
void func_3748(void)
{
	@SetVariable("k12q01BurahInSobor", 1);
	func_3974();
}


// @pe
void func_1445(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_563_object, object var_564_object)
{
	var_0_object = var_564_object;
	var_1_object = var_563_object;
	var_3_string = false;
	if(1 != 0) {
		func_1508(var_564_object, "Neutral");
		var_0_object->SetMessage(527204); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(527205, 28514, 28513); //@t
		var_0_object->AddReply(527210, -1, 28518); //@t
		var_0_object->AddReply(527533, -1, 28871); //@t
		goto Label_1478;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5a9";
	}
Label_1478:
	bool var_588_bool;
	func_3537(var_588_bool);
	if(var_588_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3319(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1507;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1507:
		return 0;

	}
	
}


void func_2981(void)
{
	bool var_62_bool; int var_63_int; int var_64_int; bool var_65_bool;
	@WaitForAnimEnd();
	bool var_66_bool;
	func_3091(var_66_bool);
	if(!var_66_bool) //@nz
		return 12;
	int var_68_int;
	func_3512(var_68_int);
	int var_60_int;
	var_68_int = var_60_int;
	int var_61_int = 0;
	
	for(;;) {
		bool var_81_bool = false;
		if(var_61_int < 5) {
			bool var_84_bool;
			func_3091(var_84_bool);
			if(var_84_bool != 0)
				var_81_bool = true;
		}
		if(var_81_bool != 0) {
			if(!var_60_int) { //@nz
				@Sleep(3, var_62_bool);
				if(!var_62_bool) { //@nz
				} else {
			} else {
			@irand(var_63_int, var_60_int);
			@irand(var_64_int, 5);
			if(var_64_int != 0)
				var_63_int = 0;
			string var_95_string; int var_96_int;
			var_63_int = var_96_int;
			func_3505(var_95_string, var_96_int);
			@PlayAnimation("all", var_95_string);
			@WaitForAnimEnd(var_65_bool);
			var_97_bool = !var_65_bool; //@nz
			if(var_97_bool == 0) goto Label_3036;
			goto Label_3047;
			}
				Label_3036:
					bool var_88_bool;
					func_3050(var_88_bool);
					var_89_bool = !var_88_bool; //@nz
					if(var_89_bool == 0) goto Label_3042;
			}
		}
	Label_3047:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_3042:
		@ResetAAS();
		var_61_int += 1;
	}
	
}


void func_3239(bool var_81_bool, object var_82_object)
{
	string var_88_string; bool var_90_bool; int var_91_int; string var_92_string;
	var_88_string = "c";
	int var_89_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_82_object->HasProperty((var_88_string + (var_89_int + 1)), var_90_bool);
			if(!var_90_bool) { //@nz
			} else {
				var_89_int += 1;
			}
		}
		if(!var_89_int) { //@nz
			var_81_bool = false;
			return 10;
		}
		var_91_int = 0;
		if(var_89_int > 1)
			@irand(var_91_int, var_89_int);
		var_82_object->GetProperty((var_88_string + (var_91_int + 1)), var_92_string);
		bool var_104_bool; string var_105_string;
		var_92_string = var_105_string;
		func_3332(var_104_bool, var_105_string);
		var_104_bool = var_81_bool;
		return 10;

	}
}


void func_4264(object var_54_object)
{
	int var_56_int;
	@GetVariable("mt_burah", var_56_int);
	if(!var_56_int) { //@nz
		int var_59_int; object var_60_object;
		var_54_object = var_60_object;
		TaskCall(3);
		func_316(var_61_object, var_59_int, var_60_object);
		TaskReturn();
		@SetVariable("mt_burah", 1);
	}
	bool var_274_bool;
	func_3499(var_274_bool, 1);
	if(var_274_bool != 0) {
		int var_277_int; object var_278_object;
		var_54_object = var_278_object;
		TaskCall(9);
		func_1739(var_279_object, var_277_int, var_278_object);
		TaskReturn();
		return 2;
	}
	bool var_348_bool;
	func_3499(var_348_bool, 2);
	if(var_348_bool != 0) {
		int var_350_int; object var_351_object;
		var_54_object = var_351_object;
		TaskCall(1);
		func_13(var_352_object, var_350_int, var_351_object);
		TaskReturn();
		return 2;
	}
	bool var_412_bool;
	func_3499(var_412_bool, 7);
	if(var_412_bool != 0) {
		int var_414_int; object var_415_object;
		var_54_object = var_415_object;
		TaskCall(5);
		func_555(var_416_object, var_414_int, var_415_object);
		TaskReturn();
		return 2;
	}
	bool var_537_bool;
	func_3499(var_537_bool, 11);
	if(var_537_bool != 0) {
		int var_539_int; object var_540_object;
		var_54_object = var_540_object;
		TaskCall(7);
		func_1364(var_541_object, var_539_int, var_540_object);
		TaskReturn();
		return 2;
	}
	bool var_598_bool;
	func_3499(var_598_bool, 12);
	if(var_598_bool != 0) {
		int var_600_int; object var_601_object;
		var_54_object = var_601_object;
		TaskCall(11);
		func_2127(var_602_object, var_600_int, var_601_object);
		TaskReturn();
		return 2;
	}
	int var_743_int; object var_744_object;
	var_54_object = var_744_object;
	TaskCall(13);
	func_2592(var_745_object, var_743_int, var_744_object);
	TaskReturn();
}


// @pe
void func_2731(object var_2_object, string var_774_string)
{
	bool var_775_bool;
	func_3537(var_775_bool);
	if(!var_775_bool) //@nz
		return 0;
	if(var_774_string == var_2_object)
		return 0;
	string var_778_string; bool var_779_bool;
	var_774_string = var_778_string;
	if(var_774_string == "")
		var_779_bool = false;
	else
		var_779_bool = true;
	func_3326(var_778_string, var_779_bool);
	var_2_object = var_774_string;
	
}


// @pe
void func_3499(bool var_274_bool, int var_275_int)
{
	int var_276_int;
	func_3490(var_276_int);
	var_274_bool = var_276_int == var_275_int;
}


// @pe
void func_3757(void)
{
	int var_44_int;
	func_3370(var_44_int, "k12q01_Burah");
	if(var_44_int == 0) {
		@SetVariable("k12q01_Burah", 1);
		func_3987();
	}
}


void func_4013(void)
{
	object var_197_object;
	@CreateDiaryEntry(var_197_object, 422, 1, 526221);
	bool var_201_bool; object var_202_object;
	var_197_object = var_202_object;
	func_4078(var_201_bool, var_202_object, 416);
}
EMIT "Stack[-1] = 0";


void func_3505(string var_74_string, int var_75_int)
{
	string var_77_string = "idle";
	if(var_75_int != 0)
		var_77_string += var_75_int;
	var_77_string = var_74_string;
}


void func_3512(int var_68_int)
{
	int var_71_int; bool var_72_bool;
	var_71_int = 0;
	
	for(;;) {
		string var_74_string; int var_75_int;
		var_71_int = var_75_int;
		func_3505(var_74_string, var_75_int);
		@HasAnimation(var_72_bool, "all", var_74_string);
		if(!var_72_bool) //@nz
			break;
		var_71_int += 1;
	}
	var_71_int = var_68_int;
}


void func_4026(void)
{
	object var_61_object;
	@CreateDiaryEntry(var_61_object, 434, 2, 526390);
	bool var_65_bool; object var_66_object;
	var_61_object = var_66_object;
	func_4078(var_65_bool, var_66_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3773(object var_67_object)
{
	object var_71_object;
	func_4106(var_71_object);
	object var_68_object;
	var_71_object = var_68_object;
	func_4123(var_68_object, "pt_map_anna", (float)2);
	object var_91_object;
	func_4106(var_91_object);
	var_67_object->ShowMap(var_91_object);
}


// @pe
void func_455(object var_2_object, string var_232_string)
{
	bool var_233_bool;
	func_3537(var_233_bool);
	if(!var_233_bool) //@nz
		return 0;
	if(var_232_string == var_2_object)
		return 0;
	string var_236_string; bool var_237_bool;
	var_232_string = var_236_string;
	if(var_232_string == "")
		var_237_bool = false;
	else
		var_237_bool = true;
	func_3326(var_236_string, var_237_bool);
	var_2_object = var_232_string;
	
}


void func_4039(void)
{
	object var_84_object;
	@CreateDiaryEntry(var_84_object, 435, 2, 526391);
	bool var_88_bool; object var_89_object;
	var_84_object = var_89_object;
	func_4078(var_88_bool, var_89_object, 434);
}
EMIT "Stack[-1] = 0";


void func_3529(int var_213_int)
{
	var_213_int = 515592;
}


void func_1739(object var_0_object, int var_277_int, object var_278_object)
{
	var_0_object = var_278_object;
	bool var_288_bool; object var_289_object;
	object var_290_object;
	func_3354(var_290_object);
	var_290_object = var_289_object;
	func_3181(var_288_bool, var_289_object);
	bool var_291_bool; object var_292_object;
	var_278_object = var_292_object;
	func_3096(var_291_bool, var_292_object, 70.0);
	if(!var_291_bool) { //@nz
		var_277_int = -2;
		return 8;
	}
	object var_284_object;
	@CreateDialog(var_284_object);
	int var_295_int;
	func_3531(var_295_int);
	var_284_object->SetNPCName(var_295_int);
	int var_296_int;
	func_3529(var_296_int);
	var_284_object->SetNPCDescription(var_296_int);
	string var_297_string;
	func_3533(var_297_string);
	var_284_object->SetPhoto(var_297_string);
	string var_298_string;
	func_3535(var_298_string);
	var_284_object->SetPhoto2(var_298_string);
	int var_299_int;
	func_4156(var_299_int);
	var_284_object->SetPlayerName(var_299_int);
	bool var_285_bool;
	@IsOverrideActive(var_285_bool);
	if(var_285_bool != 0) {
		var_277_int = -2;
		return 8;
	}
	@DoDialog(var_284_object);
	object var_301_object; object var_302_object;
	var_278_object = var_301_object;
	var_284_object = var_302_object;
	TaskCall(10);
	func_1820(var_303_object, var_304_object, var_305_string, var_306_bool, var_301_object, var_302_object);
	TaskReturn();
	bool var_287_bool;
	var_284_object->IsDialogEnd(var_287_bool);
	
	for(;;) {
		var_346_bool = !var_287_bool; //@nz
		if(var_346_bool == 0) goto Label_1809;
		@sync();
		var_284_object->IsDialogEnd(var_287_bool);
	}
	
Label_1809:
	object var_347_object;
	var_278_object = var_347_object;
	func_3164();
	@StopDialog(var_284_object);
	var_284_object->GetReturnValue(-1);
	int var_286_int = var_277_int;
}
EMIT "Stack[-4] = 0";


void func_3276(bool var_112_bool, object var_113_object)
{
	bool var_121_bool; int var_122_int; string var_123_string;
	int var_125_int;
	func_3490(var_125_int);
	string var_119_string = ("d" + var_125_int) + "m";
	int var_120_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_113_object->HasProperty((var_119_string + (var_120_int + 1)), var_121_bool);
			if(!var_121_bool) { //@nz
			} else {
				var_120_int += 1;
			}
		}
		if(!var_120_int) { //@nz
			var_112_bool = false;
			return 10;
		}
		var_122_int = 0;
		if(var_120_int > 1)
			@irand(var_122_int, var_120_int);
		var_113_object->GetProperty((var_119_string + (var_122_int + 1)), var_123_string);
		bool var_144_bool; string var_145_string;
		var_123_string = var_145_string;
		func_3332(var_144_bool, var_145_string);
		var_144_bool = var_112_bool;
		return 10;

	}
}


// @pe
void func_3789(bool var_676_bool, object var_677_object)
{
	object var_679_object;
	var_677_object = var_679_object;
	func_3942(var_679_object);
	bool var_678_bool;
	if(var_678_bool != 0) {
		var_676_bool = true;
		return 0;
	}
	var_676_bool = false;
}


void func_3531(int var_212_int)
{
	var_212_int = 511961;
}


void func_3533(string var_214_string)
{
	var_214_string = "ui/NPC_Burah.png";
}


void func_3535(string var_215_string)
{
	var_215_string = "ui/NPC_Burah_b.png";
}


void func_3537(bool var_108_bool)
{
	var_108_bool = true;
}


// @pe
void func_3539(object var_134_object)
{
	object var_138_object;
	func_4106(var_138_object);
	object var_135_object;
	var_138_object = var_135_object;
	func_4123(var_135_object, "pt_map_burah_home", (float)2);
	object var_158_object;
	func_4106(var_158_object);
	var_134_object->ShowMap(var_158_object);
}


void func_4052(void)
{
	object var_221_object;
	@CreateDiaryEntry(var_221_object, 437, 2, 526393);
	bool var_225_bool; object var_226_object;
	var_221_object = var_226_object;
	func_4078(var_225_bool, var_226_object, 434);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3799(bool var_638_bool)
{
	int var_640_int;
	func_3370(var_640_int, "game_final");
	if(var_640_int != 0) {
		var_638_bool = true;
		return 0;
	}
	var_638_bool = false;
}


void func_4065(object var_66_object)
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
void func_3811(bool var_318_bool)
{
	int var_320_int;
	func_3370(var_320_int, "k1q01LaskaGotoBurah");
	if(var_320_int != 0) {
		var_318_bool = true;
		return 0;
	}
	var_318_bool = false;
}


// @pe
void func_3555(void)
{
	func_3386("boiny@door1", false);
}


// @pe
void func_1508(object var_2_object, string var_570_string)
{
	bool var_571_bool;
	func_3537(var_571_bool);
	if(!var_571_bool) //@nz
		return 0;
	if(var_570_string == var_2_object)
		return 0;
	string var_574_string; bool var_575_bool;
	var_570_string = var_574_string;
	if(var_570_string == "")
		var_575_bool = false;
	else
		var_575_bool = true;
	func_3326(var_574_string, var_575_bool);
	var_2_object = var_570_string;
	
}


// @pe
void func_3562(void)
{
	@SetVariable("ook1Burah1", 1);
}


void func_3050(bool var_88_bool)
{
	var_88_bool = true;
}


void func_3052(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_4078(bool var_57_bool, object var_58_object, int var_59_int)
{
	object var_66_object;
	func_4065(var_66_object);
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
void func_3823(bool var_326_bool)
{
	int var_328_int;
	func_3370(var_328_int, "ook1Burah1");
	if(var_328_int == 0) {
		var_326_bool = true;
		return 0;
	}
	var_326_bool = false;
}


void func_2799(object var_0_object)
{
	bool var_36_bool;
	func_3091(var_36_bool);
	if(!var_36_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_2927();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2981();
	}
}
EMIT "Return(); Pop(0)";


void func_3568(void)
{
	object var_52_object;
	func_4106(var_52_object);
	object var_51_object;
	var_52_object = var_51_object;
	float var_63_float;
	func_3485(var_63_float);
	var_51_object->AddMark("k1q01BurahGotoAnna", "pt_map_anna", 1, 524732, var_63_float);
}
EMIT "Stack[-1] = 0";


void func_3057(float var_51_float, object var_52_object)
{
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	cvector var_57_cvector;
	var_52_object->GetPosition(var_57_cvector);
	var_51_float = (var_57_cvector - var_56_cvector) | (var_57_cvector - var_56_cvector);
}


void func_3319(string var_43_string)
{
	float var_46_float; float var_47_float;
	@lshGetAnimTimes(var_43_string, var_46_float, var_47_float);
	@lshPlayAnimation(var_46_float, var_47_float, false);
}


void func_3065(object var_238_object, string var_239_string, int var_240_int)
{
	int var_242_int;
	var_238_object->GetProperty(var_239_string, var_242_int);
	var_238_object->SetProperty(var_239_string, (var_242_int + var_240_int));
}


// @pe
void func_3835(bool var_390_bool)
{
	int var_392_int;
	func_3370(var_392_int, "k2q01");
	if(var_392_int == 4)
		var_390_bool = true;
	var_390_bool = false;
}


void func_3326(string var_236_string, bool var_237_bool)
{
	float var_242_float; float var_243_float;
	@lshGetAnimTimes(var_236_string, var_242_float, var_243_float);
	@lshPlayAnimation(var_242_float, var_243_float, var_237_bool);
}



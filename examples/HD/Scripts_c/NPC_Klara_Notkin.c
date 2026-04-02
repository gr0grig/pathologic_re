// @GLOBALS: 0:object:,1:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2539();
			if(var_32_cvector == 26110) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_2655();
			}
			if(var_32_cvector == 28176) {
				object var_66_object; object var_67_object;
				var_66_object = var_1_object;
				var_67_object = var_0_object;
				func_2655();
				object var_68_object = var_1_object;
				func_2701(var_0_object);
				object var_92_object; object var_93_object;
				var_92_object = var_1_object;
				var_93_object = var_0_object;
				func_2695();
			}
			if(var_32_cvector == 40900) {
				object var_98_object; object var_99_object;
				var_98_object = var_1_object;
				var_99_object = var_0_object;
				func_2655();
			}
			if(var_32_cvector == 40901) {
				object var_102_object; object var_103_object;
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_2655();
			}
			if(var_32_cvector == 40902) {
				object var_106_object; object var_107_object;
				var_106_object = var_1_object;
				var_107_object = var_0_object;
				func_2655();
			}
			if(var_31_bool == 26106) {
				func_149(var_32_cvector, "Neutral");
				var_0_object->SetMessage(524791); //@t
				var_0_object->ClearReplies(); //@t
				bool var_128_bool;
				func_2740(var_1_object);
				if(var_128_bool != 0)
					var_0_object->AddReply(524792, 28167, 26107); //@t
				var_0_object->AddReply(524793, -1, 26108); //@t
				var_0_object->AddReply(542093, -1, 44393); //@t
				return 0;
			}
			if(var_31_bool == 28167) {
				func_149(var_32_cvector, "Distrust");
				var_0_object->SetMessage(526880); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526881, 28169, 28168); //@t
				var_0_object->AddReply(542094, 28169, 44394); //@t
				return 0;
			}
			if(var_31_bool == 28169) {
				func_149(var_32_cvector, "Distrust");
				var_0_object->SetMessage(526882); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538926, 40882, 40881); //@t
				var_0_object->AddReply(538934, 40882, 40891); //@t
				return 0;
			}
			if(var_31_bool == 40882) {
				func_149(var_32_cvector, "Smile");
				var_0_object->SetMessage(538927); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526883, 26109, 28170); //@t
				bool var_172_bool;
				func_2728(var_1_object);
				if(var_172_bool != 0)
					var_0_object->AddReply(538928, 40884, 40883); //@t
				return 0;
			}
			if(var_31_bool == 40884) {
				func_149(var_32_cvector, "Think");
				var_0_object->SetMessage(538929); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538930, 40886, 40885); //@t
				var_0_object->AddReply(538932, 40886, 40887); //@t
				return 0;
			}
			if(var_31_bool == 40886) {
				func_149(var_32_cvector, "Think");
				var_0_object->SetMessage(538931); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538935, 40897, 40893); //@t
				var_0_object->AddReply(538937, 40897, 40895); //@t
				return 0;
			}
			if(var_31_bool == 40897) {
				func_149(var_32_cvector, "Triumph");
				var_0_object->SetMessage(538939); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538940, -1, 40900); //@t
				var_0_object->AddReply(538941, -1, 40901); //@t
				var_0_object->AddReply(538942, -1, 40902); //@t
				return 0;
			}
			if(var_31_bool == 26109) {
				func_149(var_32_cvector, "Distrust");
				var_0_object->SetMessage(524794); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526890, 28178, 28177); //@t
				var_0_object->AddReply(526885, 28173, 28172); //@t
				return 0;
			}
			if(var_31_bool == 28173) {
				func_149(var_32_cvector, "Smile");
				var_0_object->SetMessage(526886); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524795, -1, 26110); //@t
				var_0_object->AddReply(526887, 28175, 28174); //@t
				return 0;
			}
			if(var_31_bool == 28175) {
				func_149(var_32_cvector, "Smile");
				var_0_object->SetMessage(526888); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526889, -1, 28176); //@t
				return 0;
			}
			if(var_31_bool == 28178) {
				func_149(var_32_cvector, "Distrust");
				var_0_object->SetMessage(526891); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538936, 40886, 40894); //@t
				return 0;
			}
			var_3_string = true;
			bool var_248_bool;
			func_2918(var_248_bool);
			if(var_248_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xac";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2539();
			if(var_31_bool == 26872) {
				func_642(var_32_cvector, "Neutral");
				var_0_object->SetMessage(525516); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525517, -1, 26873); //@t
				var_0_object->AddReply(526273, -1, 27549); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_2918(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x299";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2539();
			if(var_32_cvector == 27017) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_2664();
			}
			if(var_31_bool == 27014) {
				func_855(var_32_cvector, "Smile");
				var_0_object->SetMessage(525691); //@t
				var_0_object->ClearReplies(); //@t
				bool var_84_bool;
				func_2752(var_1_object);
				if(var_84_bool != 0)
					var_0_object->AddReply(525692, 30673, 27015); //@t
				var_0_object->AddReply(525695, -1, 27018); //@t
				var_0_object->AddReply(542396, -1, 44768); //@t
				return 0;
			}
			if(var_31_bool == 30673) {
				func_855(var_32_cvector, "Pride");
				var_0_object->SetMessage(529221); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529222, 44776, 30674); //@t
				var_0_object->AddReply(529223, 44778, 30675); //@t
				return 0;
			}
			if(var_31_bool == 44778) {
				func_855(var_32_cvector, "Think");
				var_0_object->SetMessage(542404); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542405, 44781, 44779); //@t
				return 0;
			}
			if(var_31_bool == 44781) {
				func_855(var_32_cvector, "Neutral");
				var_0_object->SetMessage(542407); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542408, 27016, 44782); //@t
				return 0;
			}
			if(var_31_bool == 44776) {
				func_855(var_32_cvector, "Pride");
				var_0_object->SetMessage(542402); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542403, 27016, 44777); //@t
				var_0_object->AddReply(542406, 27016, 44780); //@t
				return 0;
			}
			if(var_31_bool == 27016) {
				func_855(var_32_cvector, "Think");
				var_0_object->SetMessage(525693); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542409, 44786, 44785); //@t
				var_0_object->AddReply(542414, 30672, 44790); //@t
				return 0;
			}
			if(var_31_bool == 44786) {
				func_855(var_32_cvector, "Smile");
				var_0_object->SetMessage(542410); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529219, 30672, 30671); //@t
				var_0_object->AddReply(542411, 44788, 44787); //@t
				return 0;
			}
			if(var_31_bool == 44788) {
				func_855(var_32_cvector, "Neutral");
				var_0_object->SetMessage(542412); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542413, 30672, 44789); //@t
				return 0;
			}
			if(var_31_bool == 30672) {
				func_855(var_32_cvector, "Neutral");
				var_0_object->SetMessage(529220); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525694, -1, 27017); //@t
				return 0;
			}
			var_3_string = true;
			bool var_169_bool;
			func_2918(var_169_bool);
			if(var_169_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x36e";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2539();
			if(var_32_cvector == 29286) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_2679();
				object var_55_object = var_1_object;
				func_2712(var_0_object);
			}
			if(var_32_cvector == 29287) {
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_object;
				func_2679();
				object var_85_object = var_1_object;
				func_2712(var_0_object);
			}
			if(var_31_bool == 29066) {
				bool var_89_bool;
				func_2764(var_1_object);
				if(!var_89_bool) { //@nz
					object var_98_object; object var_99_object;
					var_98_object = var_1_object;
					var_99_object = var_0_object;
					func_2673();
					func_1271(var_32_cvector, "Neutral");
					var_0_object->SetMessage(527714); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(527715, 29269, 29067); //@t
					var_0_object->AddReply(527928, 29269, 29279); //@t
					return 0;
				}
				func_1271(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527716); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527717, -1, 29069); //@t
				var_0_object->AddReply(527918, -1, 29268); //@t
				return 0;
			}
			if(var_31_bool == 29269) {
				func_1271(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527919); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527920, 29271, 29270); //@t
				var_0_object->AddReply(527923, 29274, 29273); //@t
				return 0;
			}
			if(var_31_bool == 29274) {
				func_1271(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527924); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527925, 29276, 29275); //@t
				return 0;
			}
			if(var_31_bool == 29276) {
				func_1271(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527926); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527927, 29271, 29277); //@t
				return 0;
			}
			if(var_31_bool == 29271) {
				func_1271(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527921); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527922, 29282, 29272); //@t
				var_0_object->AddReply(527929, 29284, 29281); //@t
				return 0;
			}
			if(var_31_bool == 29282) {
				func_1271(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527930); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527931, 29284, 29283); //@t
				return 0;
			}
			if(var_31_bool == 29284) {
				func_1271(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527932); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527933, -1, 29286); //@t
				var_0_object->AddReply(527934, -1, 29287); //@t
				return 0;
			}
			var_3_string = true;
			bool var_185_bool;
			func_2918(var_185_bool);
			if(var_185_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x50e";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2539();
			if(var_31_bool == 36960) {
				func_1659(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_31_bool == 36962) {
				func_1659(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_31_bool == 36964) {
				func_1659(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_84_bool;
			func_2918(var_84_bool);
			if(var_84_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x692";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2539();
			if(var_31_int == 42554) {
				func_1913(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540546, -1, 42555); //@t
				var_0_object->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_2918(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x790";
	
	}

}


maintask task_12
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		var_31_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1984(var_30_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, int var_31_int)
	{
		if(var_31_int == 10) {
			func_2049();
			bool var_35_bool = false;
			bool var_36_bool;
			func_2263(var_36_bool);
			if(var_36_bool != 0) {
				bool var_39_bool;
				func_2018(var_39_bool);
				if(var_39_bool != 0)
					var_35_bool = true;
			}
			if(var_35_bool != 0) {
				bool var_56_bool;
				func_1998(var_56_bool);
				if(var_56_bool != 0) {
					bool var_75_bool; object var_76_object;
					object var_77_object;
					func_2546(var_77_object);
					var_77_object = var_76_object;
					func_2413(var_75_bool, var_76_object);
				}
			} else {
				func_2013(var_31_int);
				func_2040();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		func_2231();
		func_2049();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		@StopGroup0();
		func_2049();
		func_2493("Neutral");
		func_2040();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, bool var_31_bool)
	{
		if(var_31_bool != 0)
			func_2040();
		else
			func_2493("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, object var_31_object)
	{
		bool var_33_bool;
		@IsOverrideActive(var_33_bool);
		if(!var_33_bool) { //@nz
			disable OnUse;
			func_2231();
			bool var_35_bool; object var_36_object;
			var_31_object = var_36_object;
			func_2254(var_35_bool, var_36_object);
			enable OnUse;
			object var_49_object;
			var_31_object = var_49_object;
			func_2920(var_49_object);
			func_2493("Neutral");
			func_2049();
			func_2040();
		}
	}

}


void func_0(object var_0_object, int var_281_int, object var_282_object)
{
	var_0_object = var_282_object;
	bool var_292_bool; object var_293_object;
	var_282_object = var_293_object;
	func_2268(var_292_bool, var_293_object, 70.0);
	if(!var_292_bool) { //@nz
		var_281_int = -2;
		return 8;
	}
	object var_288_object;
	@CreateDialog(var_288_object);
	int var_296_int;
	func_2912(var_296_int);
	var_288_object->SetNPCName(var_296_int);
	int var_297_int;
	func_2910(var_297_int);
	var_288_object->SetNPCDescription(var_297_int);
	string var_298_string;
	func_2914(var_298_string);
	var_288_object->SetPhoto(var_298_string);
	string var_299_string;
	func_2916(var_299_string);
	var_288_object->SetPhoto2(var_299_string);
	int var_300_int;
	func_2893(var_300_int);
	var_288_object->SetPlayerName(var_300_int);
	bool var_289_bool;
	@IsOverrideActive(var_289_bool);
	if(var_289_bool != 0) {
		var_281_int = -2;
		return 8;
	}
	@DoDialog(var_288_object);
	bool var_302_bool; object var_303_object;
	object var_304_object;
	func_2546(var_304_object);
	var_304_object = var_303_object;
	func_2355(var_302_bool, var_303_object);
	object var_305_object; object var_306_object;
	var_282_object = var_305_object;
	var_288_object = var_306_object;
	TaskCall(1);
	func_81(var_307_object, var_308_object, var_309_string, var_310_bool, var_305_object, var_306_object);
	TaskReturn();
	bool var_291_bool;
	var_288_object->IsDialogEnd(var_291_bool);
	
	for(;;) {
		var_346_bool = !var_291_bool; //@nz
		if(var_346_bool == 0) goto Label_70;
		@sync();
		var_288_object->IsDialogEnd(var_291_bool);
	}
	
Label_70:
	object var_347_object;
	var_282_object = var_347_object;
	func_2337();
	@StopDialog(var_288_object);
	var_288_object->GetReturnValue(-1);
	int var_290_int = var_281_int;
}
EMIT "Stack[-4] = 0";


void func_2049(void)
{
	@KillTimer(10);
}


void func_2562(int var_323_int, string var_324_string)
{
	int var_326_int;
	@GetVariable(var_324_string, var_326_int);
	var_326_int = var_323_int;
}


void func_2567(int var_87_int, int var_88_int)
{
	object var_90_object;
	@CreateIntVector(var_90_object);
	var_90_object->add(var_87_int);
	var_90_object->add(var_88_int);
	@SendWorldWndMessage(3, var_90_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_787(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_374_object, object var_375_object)
{
	var_0_object = var_375_object;
	var_3_string = false;
	if(1 != 0) {
		func_855(var_375_object, "Smile");
		var_0_object->SetMessage(525691); //@t
		var_0_object->ClearReplies(); //@t
		bool var_390_bool;
		func_2752(var_374_object);
		if(var_390_bool != 0)
			var_0_object->AddReply(525692, 30673, 27015); //@t
		var_0_object->AddReply(525695, -1, 27018); //@t
		var_0_object->AddReply(542396, -1, 44768); //@t
		goto Label_825;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x317";
	}
Label_825:
	bool var_405_bool;
	func_2918(var_405_bool);
	if(var_405_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2493(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_854;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_854:
		return 0;

	}
	
}


void func_2579(object var_76_object, object var_77_object, int var_78_int)
{
	int var_82_int;
	var_77_object->GetItemID(var_82_int);
	int var_83_int;
	@GetInvItemProperty(var_83_int, var_82_int, "Category");
	bool var_84_bool;
	var_76_object->AddItem(var_84_bool, var_77_object, var_83_int, var_78_int);
	if(!var_84_bool) { //@nz
		var_76_object->DropItems(var_77_object, var_78_int);
	} else {
		int var_87_int; int var_88_int;
		var_82_int = var_87_int;
		var_78_int = var_88_int;
		func_2567(var_87_int, var_88_int);
	}
	
}


void func_2843(object var_41_object)
{
	object var_44_object; object var_45_object;
	@GetMainOutdoorScene(var_44_object);
	if(var_44_object == null) {
		@Trace("Can't find main outdoor scene");
		var_45_object = null;
		var_45_object = var_41_object;
	}
	var_44_object->GetMap(var_45_object);
	var_45_object = var_41_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2337(void)
{
	bool var_271_bool;
	@CameraSwitchToNormal(true);
	bool var_273_bool;
	func_2918(var_273_bool);
	if(var_273_bool != 0) {
	} else {
		@HasAnimationTrack(var_271_bool, "head");
		if(var_271_bool == 0) goto Label_2354;
		@UnlookAsync("head");
	}
Label_2354:
	
}


void func_2598(object var_71_object, string var_72_string, int var_73_int)
{
	object var_75_object;
	@CreateInvItem(var_75_object);
	var_75_object->SetItemName(var_72_string);
	object var_76_object; object var_77_object; int var_78_int;
	var_71_object = var_76_object;
	var_75_object = var_77_object;
	var_73_int = var_78_int;
	func_2579(var_76_object, var_77_object, var_78_int);
}
EMIT "Stack[-1] = 0";


void func_2552(cvector var_90_cvector, cvector var_91_cvector)
{
	float var_94_float = sqrt(var_91_cvector | var_91_cvector);
	if(var_94_float < 0.000001)
		var_90_cvector = [0.0, 0.0, 0.0];
	var_90_cvector = var_91_cvector / var_94_float;
}


void func_2860(object var_57_object, string var_58_string, float var_59_float)
{
	object var_67_object;
	@GetMainOutdoorScene(var_67_object);
	if(var_67_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_65_cvector;
	cvector var_66_cvector;
	bool var_68_bool;
	var_67_object->GetLocator(var_58_string, var_68_bool, var_65_cvector, var_66_cvector);
	if(!var_68_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_58_string) + " doesnt exist");
	var_67_object->GetMap(var_57_object);
	if(var_57_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_78_float = GetByIndex(var_65_cvector, 0);
	var_79_float = GetByIndex(var_65_cvector, 2);
	var_57_object->SetMapParams(var_78_float, var_79_float, var_59_float);
}
EMIT "Stack[-2] = 0";


void func_2355(bool var_124_bool, object var_125_object)
{
	int var_131_int; int var_132_int;
	@GetVariable("voice_common", var_131_int);
	if(var_131_int != 0) {
		bool var_135_bool; object var_136_object;
		var_125_object = var_136_object;
		func_2413(var_135_bool, var_136_object);
		if(!var_135_bool) { //@nz
			bool var_166_bool; object var_167_object;
			var_125_object = var_167_object;
			func_2450(var_166_bool, var_167_object);
			if(!var_166_bool) { //@nz
				var_124_bool = false;
				return 4;
			}
		}
		@irand(var_132_int, 2);
		if(var_132_int != 0)
			@SetVariable("voice_common", ((var_131_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_211_bool; object var_212_object;
		var_125_object = var_212_object;
		func_2450(var_211_bool, var_212_object);
		if(!var_211_bool) { //@nz
			bool var_214_bool; object var_215_object;
			var_125_object = var_215_object;
			func_2413(var_214_bool, var_215_object);
			if(!var_214_bool) { //@nz
				var_124_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2411;
	
Label_2411:
	var_124_bool = true;
	
}


void func_2611(float var_52_float)
{
	float var_54_float;
	@GetGameTime(var_54_float);
	var_54_float = var_52_float;
}


void func_2616(int var_179_int)
{
	float var_181_float;
	@GetGameTime(var_181_float);
	var_179_int = 1 + (var_181_float / 24);
}


// @pe
void func_1596(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_518_object, object var_519_object)
{
	var_0_object = var_519_object;
	var_1_object = var_518_object;
	var_3_string = false;
	if(1 != 0) {
		func_1659(var_519_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_1629;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x640";
	}
Label_1629:
	bool var_543_bool;
	func_2918(var_543_bool);
	if(var_543_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2493(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1658;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1658:
		return 0;

	}
	
}


// @pe
void func_1855(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_577_object, object var_578_object)
{
	var_0_object = var_578_object;
	var_1_object = var_577_object;
	var_3_string = false;
	if(1 != 0) {
		func_1913(var_578_object, "Neutral");
		var_0_object->SetMessage(540545); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540546, -1, 42555); //@t
		var_0_object->AddReply(540798, -1, 42847); //@t
		goto Label_1883;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x743";
	}
Label_1883:
	bool var_599_bool;
	func_2918(var_599_bool);
	if(var_599_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2493(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1912;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1912:
		return 0;

	}
	
}


// @pe
void func_2625(bool var_278_bool, int var_279_int)
{
	int var_280_int;
	func_2616(var_280_int);
	var_278_bool = var_280_int == var_279_int;
}


void func_2631(string var_56_string, int var_57_int)
{
	string var_59_string = "idle";
	if(var_57_int != 0)
		var_59_string += var_57_int;
	var_59_string = var_56_string;
}


// @pe
void func_584(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_219_object, object var_220_object)
{
	var_0_object = var_220_object;
	var_1_object = var_219_object;
	var_3_string = false;
	if(1 != 0) {
		func_642(var_220_object, "Neutral");
		var_0_object->SetMessage(525516); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525517, -1, 26873); //@t
		var_0_object->AddReply(526273, -1, 27549); //@t
		goto Label_612;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x24c";
	}
Label_612:
	bool var_250_bool;
	func_2918(var_250_bool);
	if(var_250_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2493(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_641;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_641:
		return 0;

	}
	
}


void func_2893(int var_115_int)
{
	int var_117_int;
	@GetVariable("branch", var_117_int);
	if(var_117_int == 0) {
		var_115_int = 1;
		return 2;
	EMIT "GOTO 0xb5c";
	}
	if(var_117_int == 1) {
		var_115_int = 2;
		return 2;
	}
	var_115_int = 3;
}


void func_2638(int var_50_int)
{
	int var_53_int; bool var_54_bool;
	var_53_int = 0;
	
	for(;;) {
		string var_56_string; int var_57_int;
		var_53_int = var_57_int;
		func_2631(var_56_string, var_57_int);
		@HasAnimation(var_54_bool, "all", var_56_string);
		if(!var_54_bool) //@nz
			break;
		var_53_int += 1;
	}
	var_53_int = var_50_int;
}


void func_1101(object var_0_object, int var_417_int, object var_418_object)
{
	var_0_object = var_418_object;
	bool var_428_bool; object var_429_object;
	var_418_object = var_429_object;
	func_2268(var_428_bool, var_429_object, 70.0);
	if(!var_428_bool) { //@nz
		var_417_int = -2;
		return 8;
	}
	object var_424_object;
	@CreateDialog(var_424_object);
	int var_432_int;
	func_2912(var_432_int);
	var_424_object->SetNPCName(var_432_int);
	int var_433_int;
	func_2910(var_433_int);
	var_424_object->SetNPCDescription(var_433_int);
	string var_434_string;
	func_2914(var_434_string);
	var_424_object->SetPhoto(var_434_string);
	string var_435_string;
	func_2916(var_435_string);
	var_424_object->SetPhoto2(var_435_string);
	int var_436_int;
	func_2893(var_436_int);
	var_424_object->SetPlayerName(var_436_int);
	bool var_425_bool;
	@IsOverrideActive(var_425_bool);
	if(var_425_bool != 0) {
		var_417_int = -2;
		return 8;
	}
	@DoDialog(var_424_object);
	bool var_438_bool; object var_439_object;
	object var_440_object;
	func_2546(var_440_object);
	var_440_object = var_439_object;
	func_2355(var_438_bool, var_439_object);
	object var_441_object; object var_442_object;
	var_418_object = var_441_object;
	var_424_object = var_442_object;
	TaskCall(7);
	func_1182(var_443_object, var_444_object, var_445_string, var_446_bool, var_441_object, var_442_object);
	TaskReturn();
	bool var_427_bool;
	var_424_object->IsDialogEnd(var_427_bool);
	
	for(;;) {
		var_490_bool = !var_427_bool; //@nz
		if(var_490_bool == 0) goto Label_1171;
		@sync();
		var_424_object->IsDialogEnd(var_427_bool);
	}
	
Label_1171:
	object var_491_object;
	var_418_object = var_491_object;
	func_2337();
	@StopDialog(var_424_object);
	var_424_object->GetReturnValue(-1);
	int var_426_int = var_417_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_305_object, object var_306_object)
{
	var_0_object = var_306_object;
	var_3_string = false;
	if(1 != 0) {
		func_149(var_306_object, "Neutral");
		var_0_object->SetMessage(524791); //@t
		var_0_object->ClearReplies(); //@t
		bool var_321_bool;
		func_2740(var_305_object);
		if(var_321_bool != 0)
			var_0_object->AddReply(524792, 28167, 26107); //@t
		var_0_object->AddReply(524793, -1, 26108); //@t
		var_0_object->AddReply(542093, -1, 44393); //@t
		goto Label_119;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_119:
	bool var_338_bool;
	func_2918(var_338_bool);
	if(var_338_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2493(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_148;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_148:
		return 0;

	}
	
}


// @pe
void func_855(object var_2_object, string var_381_string)
{
	bool var_382_bool;
	func_2918(var_382_bool);
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
	func_2509(var_385_string, var_386_bool);
	var_2_object = var_381_string;
	
}


void func_2910(int var_112_int)
{
	var_112_int = 515548;
}


// @pe
void func_2655(void)
{
	@SetVariable("k1q03", 2);
	func_2776();
}


void func_2912(int var_111_int)
{
	var_111_int = 502873;
}


void func_2914(string var_113_string)
{
	var_113_string = "ui/NPC_Notkin.png";
}


void func_2916(string var_114_string)
{
	var_114_string = "ui/NPC_Notkin_b.png";
}


void func_2918(bool var_106_bool)
{
	var_106_bool = true;
}


// @pe
void func_2664(void)
{
	@SetVariable("k4q01", 3);
	func_2789();
}


// @pe
void func_2920(object var_49_object)
{
	var_50_bool = GlobalVars[1];
	if(!var_50_bool) { //@nz
		int var_52_int; object var_53_object;
		var_49_object = var_53_object;
		TaskCall(2);
		func_503(var_54_object, var_52_int, var_53_object);
		TaskReturn();
		var_277_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_278_bool;
	func_2625(var_278_bool, 1);
	if(var_278_bool != 0) {
		int var_281_int; object var_282_object;
		var_49_object = var_282_object;
		TaskCall(0);
		func_0(var_283_object, var_281_int, var_282_object);
		TaskReturn();
		return 0;
	}
	bool var_348_bool;
	func_2625(var_348_bool, 4);
	if(var_348_bool != 0) {
		int var_350_int; object var_351_object;
		var_49_object = var_351_object;
		TaskCall(4);
		func_706(var_352_object, var_350_int, var_351_object);
		TaskReturn();
		return 0;
	}
	bool var_415_bool;
	func_2625(var_415_bool, 10);
	if(var_415_bool != 0) {
		int var_417_int; object var_418_object;
		var_49_object = var_418_object;
		TaskCall(6);
		func_1101(var_419_object, var_417_int, var_418_object);
		TaskReturn();
		return 0;
	}
	bool var_492_bool;
	func_2625(var_492_bool, 12);
	if(var_492_bool != 0) {
		int var_494_int; object var_495_object;
		var_49_object = var_495_object;
		TaskCall(8);
		func_1515(var_496_object, var_494_int, var_495_object);
		TaskReturn();
		return 0;
	}
	int var_553_int; object var_554_object;
	var_49_object = var_554_object;
	TaskCall(10);
	func_1774(var_555_object, var_553_int, var_554_object);
	TaskReturn();
}


void func_2413(bool var_135_bool, object var_136_object)
{
	string var_142_string; bool var_144_bool; int var_145_int; string var_146_string;
	var_142_string = "c";
	int var_143_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_136_object->HasProperty((var_142_string + (var_143_int + 1)), var_144_bool);
			if(!var_144_bool) { //@nz
			} else {
				var_143_int += 1;
			}
		}
		if(!var_143_int) { //@nz
			var_135_bool = false;
			return 10;
		}
		var_145_int = 0;
		if(var_143_int > 1)
			@irand(var_145_int, var_143_int);
		var_136_object->GetProperty((var_142_string + (var_145_int + 1)), var_146_string);
		bool var_158_bool; string var_159_string;
		var_146_string = var_159_string;
		func_2524(var_158_bool, var_159_string);
		var_158_bool = var_135_bool;
		return 10;

	}
}


void func_2160(void)
{
	bool var_44_bool; int var_45_int; int var_46_int; bool var_47_bool;
	@WaitForAnimEnd();
	bool var_48_bool;
	func_2263(var_48_bool);
	if(!var_48_bool) //@nz
		return 12;
	int var_50_int;
	func_2638(var_50_int);
	int var_42_int;
	var_50_int = var_42_int;
	int var_43_int = 0;
	
	for(;;) {
		bool var_63_bool = false;
		if(var_43_int < 5) {
			bool var_66_bool;
			func_2263(var_66_bool);
			if(var_66_bool != 0)
				var_63_bool = true;
		}
		if(var_63_bool != 0) {
			if(!var_42_int) { //@nz
				@Sleep(3, var_44_bool);
				if(!var_44_bool) { //@nz
				} else {
			} else {
			@irand(var_45_int, var_42_int);
			@irand(var_46_int, 5);
			if(var_46_int != 0)
				var_45_int = 0;
			string var_77_string; int var_78_int;
			var_45_int = var_78_int;
			func_2631(var_77_string, var_78_int);
			@PlayAnimation("all", var_77_string);
			@WaitForAnimEnd(var_47_bool);
			var_79_bool = !var_47_bool; //@nz
			if(var_79_bool == 0) goto Label_2215;
			goto Label_2226;
			}
				Label_2215:
					bool var_70_bool;
					func_2229(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_2221;
			}
		}
	Label_2226:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2221:
		@ResetAAS();
		var_43_int += 1;
	}
	
}


// @pe
void func_2673(void)
{
	@SetVariable("k10q01KnowAboutRubin", 1);
}


void func_2679(void)
{
	object var_41_object;
	func_2843(var_41_object);
	object var_40_object;
	var_41_object = var_40_object;
	float var_52_float;
	func_2611(var_52_float);
	var_40_object->AddMark("k10q01NotkinGotoRubin", "pt_map_rubin", 3, 530195, var_52_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1913(object var_2_object, string var_584_string)
{
	bool var_585_bool;
	func_2918(var_585_bool);
	if(!var_585_bool) //@nz
		return 0;
	if(var_584_string == var_2_object)
		return 0;
	string var_588_string; bool var_589_bool;
	var_584_string = var_588_string;
	if(var_584_string == "")
		var_589_bool = false;
	else
		var_589_bool = true;
	func_2509(var_588_string, var_589_bool);
	var_2_object = var_584_string;
	
}


// @pe
void func_1659(object var_2_object, string var_525_string)
{
	bool var_526_bool;
	func_2918(var_526_bool);
	if(!var_526_bool) //@nz
		return 0;
	if(var_525_string == var_2_object)
		return 0;
	string var_529_string; bool var_530_bool;
	var_525_string = var_529_string;
	if(var_525_string == "")
		var_530_bool = false;
	else
		var_530_bool = true;
	func_2509(var_529_string, var_530_bool);
	var_2_object = var_525_string;
	
}


// @pe
void func_642(object var_2_object, string var_226_string)
{
	bool var_227_bool;
	func_2918(var_227_bool);
	if(!var_227_bool) //@nz
		return 0;
	if(var_226_string == var_2_object)
		return 0;
	string var_230_string; bool var_231_bool;
	var_226_string = var_230_string;
	if(var_226_string == "")
		var_231_bool = false;
	else
		var_231_bool = true;
	func_2509(var_230_string, var_231_bool);
	var_2_object = var_226_string;
	
}


// @pe
void func_2695(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_2701(object var_68_object)
{
	@Trace("Gun is given");
	object var_71_object;
	var_68_object = var_71_object;
	func_2598(var_71_object, "Gun", 1);
}


void func_2450(bool var_166_bool, object var_167_object)
{
	bool var_175_bool; int var_176_int; string var_177_string;
	int var_179_int;
	func_2616(var_179_int);
	string var_173_string = ("d" + var_179_int) + "m";
	int var_174_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_167_object->HasProperty((var_173_string + (var_174_int + 1)), var_175_bool);
			if(!var_175_bool) { //@nz
			} else {
				var_174_int += 1;
			}
		}
		if(!var_174_int) { //@nz
			var_166_bool = false;
			return 10;
		}
		var_176_int = 0;
		if(var_174_int > 1)
			@irand(var_176_int, var_174_int);
		var_167_object->GetProperty((var_173_string + (var_176_int + 1)), var_177_string);
		bool var_198_bool; string var_199_string;
		var_177_string = var_199_string;
		func_2524(var_198_bool, var_199_string);
		var_198_bool = var_166_bool;
		return 10;

	}
}


// @pe
void func_149(object var_2_object, string var_312_string)
{
	bool var_313_bool;
	func_2918(var_313_bool);
	if(!var_313_bool) //@nz
		return 0;
	if(var_312_string == var_2_object)
		return 0;
	string var_316_string; bool var_317_bool;
	var_312_string = var_316_string;
	if(var_312_string == "")
		var_317_bool = false;
	else
		var_317_bool = true;
	func_2509(var_316_string, var_317_bool);
	var_2_object = var_312_string;
	
}


// @pe
void func_2712(object var_56_object)
{
	object var_60_object;
	func_2843(var_60_object);
	object var_57_object;
	var_60_object = var_57_object;
	func_2860(var_57_object, "pt_map_rubin", (float)2);
	object var_80_object;
	func_2843(var_80_object);
	var_56_object->ShowMap(var_80_object);
}


// @pe
void func_1182(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_441_object, object var_442_object)
{
	var_0_object = var_442_object;
	var_1_object = var_441_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_448_bool;
		func_2764(var_1_object);
		if(!var_448_bool) { //@nz
			object var_455_object; object var_456_object;
			var_455_object = var_1_object;
			var_456_object = var_0_object;
			func_2673();
			func_1271(var_442_object, "Neutral");
			var_0_object->SetMessage(527714); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(527715, 29269, 29067); //@t
			var_0_object->AddReply(527928, 29269, 29279); //@t
		} else {
					func_1271(var_442_object, "Neutral");
					var_0_object->SetMessage(527716); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(527717, -1, 29069); //@t
					var_0_object->AddReply(527918, -1, 29268); //@t
		}
	}
	for(;;) {
		bool var_474_bool;
		func_2918(var_474_bool);
		if(var_474_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2493(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1270;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1270:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4a2";


// @pe
void func_2728(bool var_172_bool)
{
	int var_174_int;
	func_2562(var_174_int, "k1q01DobermanDead");
	if(var_174_int != 0) {
		var_172_bool = true;
		return 0;
	}
	var_172_bool = false;
}


// @pe
void func_2740(bool var_321_bool)
{
	int var_323_int;
	func_2562(var_323_int, "k1q03");
	if(var_323_int == 1)
		var_321_bool = true;
	var_321_bool = false;
}


void func_2229(bool var_70_bool)
{
	var_70_bool = true;
}


void func_2231(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2236(float var_46_float, object var_47_object)
{
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	cvector var_52_cvector;
	var_47_object->GetPosition(var_52_cvector);
	var_46_float = (var_52_cvector - var_51_cvector) | (var_52_cvector - var_51_cvector);
}


void func_2493(string var_252_string)
{
	bool var_256_bool; float var_257_float; float var_258_float;
	@lshHasAnimation(var_256_bool, var_252_string);
	if(var_256_bool != 0) {
		@lshGetAnimTimes(var_252_string, var_257_float, var_258_float);
		@lshPlayAnimation(var_257_float, var_258_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_252_string);
	}
	
}


// @pe
void func_2752(bool var_390_bool)
{
	int var_392_int;
	func_2562(var_392_int, "k4q01");
	if(var_392_int == 2)
		var_390_bool = true;
	var_390_bool = false;
}


void func_1984(object var_0_object)
{
	bool var_32_bool;
	func_2263(var_32_bool);
	if(!var_32_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2160();
	}
}
EMIT "Return(); Pop(0)";


void func_706(object var_0_object, int var_350_int, object var_351_object)
{
	var_0_object = var_351_object;
	bool var_361_bool; object var_362_object;
	var_351_object = var_362_object;
	func_2268(var_361_bool, var_362_object, 70.0);
	if(!var_361_bool) { //@nz
		var_350_int = -2;
		return 8;
	}
	object var_357_object;
	@CreateDialog(var_357_object);
	int var_365_int;
	func_2912(var_365_int);
	var_357_object->SetNPCName(var_365_int);
	int var_366_int;
	func_2910(var_366_int);
	var_357_object->SetNPCDescription(var_366_int);
	string var_367_string;
	func_2914(var_367_string);
	var_357_object->SetPhoto(var_367_string);
	string var_368_string;
	func_2916(var_368_string);
	var_357_object->SetPhoto2(var_368_string);
	int var_369_int;
	func_2893(var_369_int);
	var_357_object->SetPlayerName(var_369_int);
	bool var_358_bool;
	@IsOverrideActive(var_358_bool);
	if(var_358_bool != 0) {
		var_350_int = -2;
		return 8;
	}
	@DoDialog(var_357_object);
	bool var_371_bool; object var_372_object;
	object var_373_object;
	func_2546(var_373_object);
	var_373_object = var_372_object;
	func_2355(var_371_bool, var_372_object);
	object var_374_object; object var_375_object;
	var_351_object = var_374_object;
	var_357_object = var_375_object;
	TaskCall(5);
	func_787(var_376_object, var_377_object, var_378_string, var_379_bool, var_374_object, var_375_object);
	TaskReturn();
	bool var_360_bool;
	var_357_object->IsDialogEnd(var_360_bool);
	
	for(;;) {
		var_413_bool = !var_360_bool; //@nz
		if(var_413_bool == 0) goto Label_776;
		@sync();
		var_357_object->IsDialogEnd(var_360_bool);
	}
	
Label_776:
	object var_414_object;
	var_351_object = var_414_object;
	func_2337();
	@StopDialog(var_357_object);
	var_357_object->GetReturnValue(-1);
	int var_359_int = var_350_int;
}
EMIT "Stack[-4] = 0";


void func_2244(bool var_39_bool, cvector var_40_cvector)
{
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector = var_40_cvector - var_44_cvector;
	var_47_float = GetByIndex(var_45_cvector, 0);
	var_48_float = GetByIndex(var_45_cvector, 2);
	bool var_46_bool;
	@Rotate(var_47_float, var_48_float, var_46_bool);
	var_46_bool = var_39_bool;
}


// @pe
void func_2764(bool var_448_bool)
{
	int var_450_int;
	func_2562(var_450_int, "k10q01KnowAboutRubin");
	if(var_450_int != 0) {
		var_448_bool = true;
		return 0;
	}
	var_448_bool = false;
}


void func_2509(string var_230_string, bool var_231_bool)
{
	bool var_237_bool; float var_238_float; float var_239_float;
	@lshHasAnimation(var_237_bool, var_230_string);
	if(var_237_bool != 0) {
		@lshGetAnimTimes(var_230_string, var_238_float, var_239_float);
		@lshPlayAnimation(var_238_float, var_239_float, var_231_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_230_string);
	}
	
}


void func_2254(bool var_35_bool, object var_36_object)
{
	cvector var_38_cvector;
	var_36_object->GetPosition(var_38_cvector);
	bool var_39_bool; cvector var_40_cvector;
	var_38_cvector = var_40_cvector;
	func_2244(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
}


void func_1998(bool var_56_bool)
{
	object var_58_object;
	@FindActor(var_58_object, "player");
	if(!var_58_object) //@nz
		var_56_bool = false;
	bool var_61_bool; object var_62_object;
	var_58_object = var_62_object;
	func_2254(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
}
EMIT "Stack[-1] = 0";


void func_2263(bool var_32_bool)
{
	bool var_34_bool;
	@IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
}


void func_2776(void)
{
	object var_42_object;
	@CreateDiaryEntry(var_42_object, 335, 2, 524802);
	bool var_46_bool; object var_47_object;
	var_42_object = var_47_object;
	func_2815(var_46_bool, var_47_object, 333);
}
EMIT "Stack[-1] = 0";


void func_2268(bool var_63_bool, object var_64_object, float var_65_float)
{
	cvector var_76_cvector; bool var_83_bool;
	var_64_object->GetPosition(var_76_cvector);
	float var_75_float;
	var_64_object->GetEyesHeight(var_75_float);
	var_84_float = GetByIndex(var_76_cvector, 1);
	SetByIndex(var_76_cvector, 1) = (var_84_float + var_75_float);
	cvector var_77_cvector;
	@GetPosition(var_77_cvector);
	@GetEyesHeight(var_75_float);
	var_85_float = GetByIndex(var_77_cvector, 1);
	SetByIndex(var_77_cvector, 1) = (var_85_float + var_75_float);
	cvector var_78_cvector = var_76_cvector - var_77_cvector;
	var_86_float = GetByIndex(var_78_cvector, 1);
	SetByIndex(var_78_cvector, 1) = (float)0;
	var_88_float = sqrt(var_78_cvector | var_78_cvector);
	var_78_cvector /= var_88_float;
	cvector var_79_cvector = -var_78_cvector;
	cvector var_90_cvector;
	func_2552(var_90_cvector, (var_79_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_80_cvector = ((var_78_cvector * var_65_float) + (var_90_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_82_bool;
	@IsOverrideActive(var_82_bool);
	if(var_82_bool != 0)
		var_63_bool = false;
	@StopWorld();
	@CameraTransit((var_77_cvector + var_80_cvector), var_79_cvector, true);
	var_104_float = GetByIndex(var_80_cvector, 0);
	var_105_float = GetByIndex(var_80_cvector, 2);
	@Rotate(var_104_float, var_105_float);
	bool var_106_bool;
	func_2918(var_106_bool);
	if(var_106_bool != 0) {
	} else {
		@HasAnimationTrack(var_83_bool, "head");
		if(var_83_bool == 0) goto Label_2331;
		@LookAsyncCamera("head");
	}
Label_2331:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_63_bool = true;
	
}


void func_2013(object var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_108_float, var_109_float);
}


void func_2524(bool var_158_bool, string var_159_string)
{
	bool var_161_bool;
	bool var_162_bool;
	func_2918(var_162_bool);
	if(var_162_bool != 0) {
		@lshHasSpeech(var_161_bool, var_159_string);
		if(var_161_bool != 0) {
			@lshPlaySpeech(var_159_string);
			var_158_bool = true;
		}
	}
	var_158_bool = false;
}


void func_2018(bool var_39_bool)
{
	object var_42_object;
	@FindActor(var_42_object, "player");
	if(!var_42_object) { //@nz
		var_39_bool = false;
		return 4;
	}
	float var_46_float; object var_47_object;
	func_2236(var_46_float, var_47_object);
	if(var_46_float > 90000.0) {
		var_39_bool = false;
		return 4;
	}
	bool var_43_bool;
	@CanSee(var_43_bool, var_47_object);
	var_43_bool = var_39_bool;
}
EMIT "Stack[-2] = 0";


void func_2789(void)
{
	object var_42_object;
	@CreateDiaryEntry(var_42_object, 371, 1, 525728);
	bool var_46_bool; object var_47_object;
	var_42_object = var_47_object;
	func_2815(var_46_bool, var_47_object, 368);
}
EMIT "Stack[-1] = 0";


void func_2539(void)
{
	bool var_34_bool;
	func_2918(var_34_bool);
	if(var_34_bool != 0)
		@lshStopSpeech();
}


void func_1515(object var_0_object, int var_494_int, object var_495_object)
{
	var_0_object = var_495_object;
	bool var_505_bool; object var_506_object;
	var_495_object = var_506_object;
	func_2268(var_505_bool, var_506_object, 70.0);
	if(!var_505_bool) { //@nz
		var_494_int = -2;
		return 8;
	}
	object var_501_object;
	@CreateDialog(var_501_object);
	int var_509_int;
	func_2912(var_509_int);
	var_501_object->SetNPCName(var_509_int);
	int var_510_int;
	func_2910(var_510_int);
	var_501_object->SetNPCDescription(var_510_int);
	string var_511_string;
	func_2914(var_511_string);
	var_501_object->SetPhoto(var_511_string);
	string var_512_string;
	func_2916(var_512_string);
	var_501_object->SetPhoto2(var_512_string);
	int var_513_int;
	func_2893(var_513_int);
	var_501_object->SetPlayerName(var_513_int);
	bool var_502_bool;
	@IsOverrideActive(var_502_bool);
	if(var_502_bool != 0) {
		var_494_int = -2;
		return 8;
	}
	@DoDialog(var_501_object);
	bool var_515_bool; object var_516_object;
	object var_517_object;
	func_2546(var_517_object);
	var_517_object = var_516_object;
	func_2355(var_515_bool, var_516_object);
	object var_518_object; object var_519_object;
	var_495_object = var_518_object;
	var_501_object = var_519_object;
	TaskCall(9);
	func_1596(var_520_object, var_521_object, var_522_string, var_523_bool, var_518_object, var_519_object);
	TaskReturn();
	bool var_504_bool;
	var_501_object->IsDialogEnd(var_504_bool);
	
	for(;;) {
		var_551_bool = !var_504_bool; //@nz
		if(var_551_bool == 0) goto Label_1585;
		@sync();
		var_501_object->IsDialogEnd(var_504_bool);
	}
	
Label_1585:
	object var_552_object;
	var_495_object = var_552_object;
	func_2337();
	@StopDialog(var_501_object);
	var_501_object->GetReturnValue(-1);
	int var_503_int = var_494_int;
}
EMIT "Stack[-4] = 0";


void func_1774(object var_0_object, int var_553_int, object var_554_object)
{
	var_0_object = var_554_object;
	bool var_564_bool; object var_565_object;
	var_554_object = var_565_object;
	func_2268(var_564_bool, var_565_object, 70.0);
	if(!var_564_bool) { //@nz
		var_553_int = -2;
		return 8;
	}
	object var_560_object;
	@CreateDialog(var_560_object);
	int var_568_int;
	func_2912(var_568_int);
	var_560_object->SetNPCName(var_568_int);
	int var_569_int;
	func_2910(var_569_int);
	var_560_object->SetNPCDescription(var_569_int);
	string var_570_string;
	func_2914(var_570_string);
	var_560_object->SetPhoto(var_570_string);
	string var_571_string;
	func_2916(var_571_string);
	var_560_object->SetPhoto2(var_571_string);
	int var_572_int;
	func_2893(var_572_int);
	var_560_object->SetPlayerName(var_572_int);
	bool var_561_bool;
	@IsOverrideActive(var_561_bool);
	if(var_561_bool != 0) {
		var_553_int = -2;
		return 8;
	}
	@DoDialog(var_560_object);
	bool var_574_bool; object var_575_object;
	object var_576_object;
	func_2546(var_576_object);
	var_576_object = var_575_object;
	func_2355(var_574_bool, var_575_object);
	object var_577_object; object var_578_object;
	var_554_object = var_577_object;
	var_560_object = var_578_object;
	TaskCall(11);
	func_1855(var_579_object, var_580_object, var_581_string, var_582_bool, var_577_object, var_578_object);
	TaskReturn();
	bool var_563_bool;
	var_560_object->IsDialogEnd(var_563_bool);
	
	for(;;) {
		var_607_bool = !var_563_bool; //@nz
		if(var_607_bool == 0) goto Label_1844;
		@sync();
		var_560_object->IsDialogEnd(var_563_bool);
	}
	
Label_1844:
	object var_608_object;
	var_554_object = var_608_object;
	func_2337();
	@StopDialog(var_560_object);
	var_560_object->GetReturnValue(-1);
	int var_562_int = var_553_int;
}
EMIT "Stack[-4] = 0";


void func_2546(object var_126_object)
{
	object var_128_object;
	@self(var_128_object);
	var_128_object = var_126_object;
}
EMIT "Stack[-1] = 0";


void func_2802(object var_55_object)
{
	object var_57_object;
	@GetDiaryRoot(var_57_object);
	if(!var_57_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_55_object = false;
	}
	var_57_object = var_55_object;
}
EMIT "Stack[-1] = 0";


void func_503(object var_0_object, int var_52_int, object var_53_object)
{
	var_0_object = var_53_object;
	bool var_63_bool; object var_64_object;
	var_53_object = var_64_object;
	func_2268(var_63_bool, var_64_object, 70.0);
	if(!var_63_bool) { //@nz
		var_52_int = -2;
		return 8;
	}
	object var_59_object;
	@CreateDialog(var_59_object);
	int var_111_int;
	func_2912(var_111_int);
	var_59_object->SetNPCName(var_111_int);
	int var_112_int;
	func_2910(var_112_int);
	var_59_object->SetNPCDescription(var_112_int);
	string var_113_string;
	func_2914(var_113_string);
	var_59_object->SetPhoto(var_113_string);
	string var_114_string;
	func_2916(var_114_string);
	var_59_object->SetPhoto2(var_114_string);
	int var_115_int;
	func_2893(var_115_int);
	var_59_object->SetPlayerName(var_115_int);
	bool var_60_bool;
	@IsOverrideActive(var_60_bool);
	if(var_60_bool != 0) {
		var_52_int = -2;
		return 8;
	}
	@DoDialog(var_59_object);
	bool var_124_bool; object var_125_object;
	object var_126_object;
	func_2546(var_126_object);
	var_126_object = var_125_object;
	func_2355(var_124_bool, var_125_object);
	object var_219_object; object var_220_object;
	var_53_object = var_219_object;
	var_59_object = var_220_object;
	TaskCall(3);
	func_584(var_221_object, var_222_object, var_223_string, var_224_bool, var_219_object, var_220_object);
	TaskReturn();
	bool var_62_bool;
	var_59_object->IsDialogEnd(var_62_bool);
	
	for(;;) {
		var_268_bool = !var_62_bool; //@nz
		if(var_268_bool == 0) goto Label_573;
		@sync();
		var_59_object->IsDialogEnd(var_62_bool);
	}
	
Label_573:
	object var_269_object;
	var_53_object = var_269_object;
	func_2337();
	@StopDialog(var_59_object);
	var_59_object->GetReturnValue(-1);
	int var_61_int = var_52_int;
}
EMIT "Stack[-4] = 0";


void func_2040(void)
{
	float var_612_float;
	@rand(var_612_float, 8, 16);
	@SetTimer(10, var_612_float);
}


// @pe
void func_1271(object var_2_object, string var_459_string)
{
	bool var_460_bool;
	func_2918(var_460_bool);
	if(!var_460_bool) //@nz
		return 0;
	if(var_459_string == var_2_object)
		return 0;
	string var_463_string; bool var_464_bool;
	var_459_string = var_463_string;
	if(var_459_string == "")
		var_464_bool = false;
	else
		var_464_bool = true;
	func_2509(var_463_string, var_464_bool);
	var_2_object = var_459_string;
	
}


void func_2815(bool var_46_bool, object var_47_object, int var_48_int)
{
	object var_55_object;
	func_2802(var_55_object);
	object var_52_object;
	var_55_object = var_52_object;
	object var_53_object;
	var_52_object->Find(var_48_int, var_53_object);
	if(!var_53_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_48_int);
		var_46_bool = false;
	}
	var_53_object->AddChild(var_47_object);
	@SendWorldWndMessage(7);
	int var_54_int;
	var_47_object->GetCategory(var_54_int);
	@SetDiarySection(var_54_int);
	var_46_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";



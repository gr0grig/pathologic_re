// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2413();
			if(var_32_cvector == 26110) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_2529();
			}
			if(var_32_cvector == 28176) {
				object var_66_object; object var_67_object;
				var_66_object = var_1_object;
				var_67_object = var_0_object;
				func_2529();
				object var_68_object = var_1_object;
				func_2575(var_0_object);
				object var_92_object; object var_93_object;
				var_92_object = var_1_object;
				var_93_object = var_0_object;
				func_2569();
			}
			if(var_32_cvector == 40900) {
				object var_98_object; object var_99_object;
				var_98_object = var_1_object;
				var_99_object = var_0_object;
				func_2529();
			}
			if(var_32_cvector == 40901) {
				object var_102_object; object var_103_object;
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_2529();
			}
			if(var_32_cvector == 40902) {
				object var_106_object; object var_107_object;
				var_106_object = var_1_object;
				var_107_object = var_0_object;
				func_2529();
			}
			if(var_31_bool == 26106) {
				func_157(var_32_cvector, "Neutral");
				var_0_object->SetMessage(524791); //@t
				var_0_object->ClearReplies(); //@t
				bool var_123_bool;
				func_2614(var_1_object);
				if(var_123_bool != 0)
					var_0_object->AddReply(524792, 28167, 26107); //@t
				var_0_object->AddReply(524793, -1, 26108); //@t
				return 0;
			}
			if(var_31_bool == 28167) {
				func_157(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526880); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526881, 28169, 28168); //@t
				var_0_object->AddReply(538933, 28169, 40889); //@t
				return 0;
			}
			if(var_31_bool == 28169) {
				func_157(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526882); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538926, 40882, 40881); //@t
				var_0_object->AddReply(538934, 40882, 40891); //@t
				return 0;
			}
			if(var_31_bool == 40882) {
				func_157(var_32_cvector, "Neutral");
				var_0_object->SetMessage(538927); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526883, 26109, 28170); //@t
				bool var_164_bool;
				func_2602(var_1_object);
				if(var_164_bool != 0)
					var_0_object->AddReply(538928, 40884, 40883); //@t
				return 0;
			}
			if(var_31_bool == 40884) {
				func_157(var_32_cvector, "Neutral");
				var_0_object->SetMessage(538929); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538930, 40886, 40885); //@t
				var_0_object->AddReply(538932, 40886, 40887); //@t
				return 0;
			}
			if(var_31_bool == 40886) {
				func_157(var_32_cvector, "Neutral");
				var_0_object->SetMessage(538931); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538935, 40897, 40893); //@t
				var_0_object->AddReply(538937, 40897, 40895); //@t
				return 0;
			}
			if(var_31_bool == 40897) {
				func_157(var_32_cvector, "Neutral");
				var_0_object->SetMessage(538939); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538940, -1, 40900); //@t
				var_0_object->AddReply(538941, -1, 40901); //@t
				var_0_object->AddReply(538942, -1, 40902); //@t
				return 0;
			}
			if(var_31_bool == 26109) {
				func_157(var_32_cvector, "Neutral");
				var_0_object->SetMessage(524794); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526885, 28173, 28172); //@t
				var_0_object->AddReply(526890, 28178, 28177); //@t
				return 0;
			}
			if(var_31_bool == 28178) {
				func_157(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526891); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538936, 40886, 40894); //@t
				return 0;
			}
			if(var_31_bool == 28173) {
				func_157(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526886); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524795, -1, 26110); //@t
				var_0_object->AddReply(526887, 28175, 28174); //@t
				return 0;
			}
			if(var_31_bool == 28175) {
				func_157(var_32_cvector, "Neutral");
				var_0_object->SetMessage(526888); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526889, -1, 28176); //@t
				return 0;
			}
			var_3_string = true;
			bool var_240_bool;
			func_2792(var_240_bool);
			if(var_240_bool != 0)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2413();
			if(var_31_bool == 26872) {
				func_645(var_32_cvector, "Neutral");
				var_0_object->SetMessage(525516); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525517, -1, 26873); //@t
				var_0_object->AddReply(526273, -1, 27549); //@t
				return 0;
			}
			var_3_string = true;
			bool var_56_bool;
			func_2792(var_56_bool);
			if(var_56_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x29c";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2413();
			if(var_32_cvector == 27017) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_2538();
			}
			if(var_31_bool == 27014) {
				func_853(var_32_cvector, "Neutral");
				var_0_object->SetMessage(525691); //@t
				var_0_object->ClearReplies(); //@t
				bool var_79_bool;
				func_2626(var_1_object);
				if(var_79_bool != 0)
					var_0_object->AddReply(525692, 30673, 27015); //@t
				var_0_object->AddReply(525695, -1, 27018); //@t
				return 0;
			}
			if(var_31_bool == 30673) {
				func_853(var_32_cvector, "Neutral");
				var_0_object->SetMessage(529221); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529222, 27016, 30674); //@t
				var_0_object->AddReply(529223, 27016, 30675); //@t
				return 0;
			}
			if(var_31_bool == 27016) {
				func_853(var_32_cvector, "Neutral");
				var_0_object->SetMessage(525693); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529219, 30672, 30671); //@t
				return 0;
			}
			if(var_31_bool == 30672) {
				func_853(var_32_cvector, "Neutral");
				var_0_object->SetMessage(529220); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525694, -1, 27017); //@t
				return 0;
			}
			var_3_string = true;
			bool var_117_bool;
			func_2792(var_117_bool);
			if(var_117_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x36c";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2413();
			if(var_32_cvector == 29286) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_2553();
				object var_55_object = var_1_object;
				func_2586(var_0_object);
			}
			if(var_32_cvector == 29287) {
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_object;
				func_2553();
				object var_85_object = var_1_object;
				func_2586(var_0_object);
			}
			if(var_31_bool == 29066) {
				bool var_89_bool;
				func_2638(var_1_object);
				if(!var_89_bool) { //@nz
					object var_98_object; object var_99_object;
					var_98_object = var_1_object;
					var_99_object = var_0_object;
					func_2547();
					func_1159(var_32_cvector, "Neutral");
					var_0_object->SetMessage(527714); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(527715, 29269, 29067); //@t
					var_0_object->AddReply(527928, 29269, 29279); //@t
					return 0;
				}
				func_1159(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527716); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527717, -1, 29069); //@t
				var_0_object->AddReply(527918, -1, 29268); //@t
				return 0;
			}
			if(var_31_bool == 29269) {
				func_1159(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527919); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527920, 29271, 29270); //@t
				var_0_object->AddReply(527923, 29274, 29273); //@t
				return 0;
			}
			if(var_31_bool == 29274) {
				func_1159(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527924); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527925, 29276, 29275); //@t
				return 0;
			}
			if(var_31_bool == 29276) {
				func_1159(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527926); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527927, 29271, 29277); //@t
				return 0;
			}
			if(var_31_bool == 29271) {
				func_1159(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527921); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527922, 29282, 29272); //@t
				var_0_object->AddReply(527929, 29284, 29281); //@t
				return 0;
			}
			if(var_31_bool == 29282) {
				func_1159(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527930); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527931, 29284, 29283); //@t
				return 0;
			}
			if(var_31_bool == 29284) {
				func_1159(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527932); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527933, -1, 29286); //@t
				var_0_object->AddReply(527934, -1, 29287); //@t
				return 0;
			}
			var_3_string = true;
			bool var_180_bool;
			func_2792(var_180_bool);
			if(var_180_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x49e";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2413();
			if(var_31_bool == 36960) {
				func_1547(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_31_bool == 36962) {
				func_1547(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_31_bool == 36964) {
				func_1547(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_79_bool;
			func_2792(var_79_bool);
			if(var_79_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x622";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2413();
			if(var_31_int == 42554) {
				func_1801(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540546, -1, 42555); //@t
				var_0_object->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_string = true;
			bool var_56_bool;
			func_2792(var_56_bool);
			if(var_56_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x720";
	
	}

}


maintask task_13
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		var_31_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1872(var_30_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, int var_31_int)
	{
		if(var_31_int == 10) {
			func_1943();
			bool var_35_bool = false;
			bool var_36_bool;
			func_2157(var_36_bool);
			if(var_36_bool != 0) {
				bool var_39_bool;
				func_1912(var_39_bool);
				if(var_39_bool != 0)
					var_35_bool = true;
			}
			if(var_35_bool != 0) {
				bool var_56_bool;
				func_1892(var_56_bool);
				if(var_56_bool != 0) {
					bool var_75_bool; object var_76_object;
					object var_77_object;
					func_2420(var_77_object);
					var_77_object = var_76_object;
					func_2305(var_75_bool, var_76_object);
				}
			} else {
				func_1907(var_31_int);
				func_1934();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		func_2125();
		func_1943();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
		{
		@StopGroup0();
		func_1943();
		func_2385("Neutral");
		func_1934();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, bool var_31_bool)
	{
		if(var_31_bool != 0)
			func_1934();
		else
			func_2385("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, object var_31_object)
	{
		bool var_33_bool;
		@IsOverrideActive(var_33_bool);
		if(!var_33_bool) { //@nz
			disable OnUse;
			func_2125();
			bool var_35_bool; object var_36_object;
			var_31_object = var_36_object;
			func_2148(var_35_bool, var_36_object);
			enable OnUse;
			object var_49_object;
			var_31_object = var_49_object;
			func_2794(var_49_object);
			func_2385("Neutral");
			func_1943();
			func_1934();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_36_bool;
	func_2157(var_36_bool);
	if(!var_36_bool) goto Label_0; //@nz
}


void func_2305(bool var_74_bool, object var_75_object)
{
	string var_81_string; bool var_83_bool; int var_84_int; string var_85_string;
	var_81_string = "c";
	int var_82_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_75_object->HasProperty((var_81_string + (var_82_int + 1)), var_83_bool);
			if(!var_83_bool) { //@nz
			} else {
				var_82_int += 1;
			}
		}
		if(!var_82_int) { //@nz
			var_74_bool = false;
			return 10;
		}
		var_84_int = 0;
		if(var_82_int > 1)
			@irand(var_84_int, var_82_int);
		var_75_object->GetProperty((var_81_string + (var_84_int + 1)), var_85_string);
		bool var_97_bool; string var_98_string;
		var_85_string = var_98_string;
		func_2398(var_97_bool, var_98_string);
		var_97_bool = var_74_bool;
		return 10;

	}
}


void func_2054(void)
{
	bool var_58_bool; int var_59_int; int var_60_int; bool var_61_bool;
	@WaitForAnimEnd();
	bool var_62_bool;
	func_2157(var_62_bool);
	if(!var_62_bool) //@nz
		return 12;
	int var_64_int;
	func_2512(var_64_int);
	int var_56_int;
	var_64_int = var_56_int;
	int var_57_int = 0;
	
	for(;;) {
		bool var_77_bool = false;
		if(var_57_int < 5) {
			bool var_80_bool;
			func_2157(var_80_bool);
			if(var_80_bool != 0)
				var_77_bool = true;
		}
		if(var_77_bool != 0) {
			if(!var_56_int) { //@nz
				@Sleep(3, var_58_bool);
				if(!var_58_bool) { //@nz
				} else {
			} else {
			@irand(var_59_int, var_56_int);
			@irand(var_60_int, 5);
			if(var_60_int != 0)
				var_59_int = 0;
			string var_91_string; int var_92_int;
			var_59_int = var_92_int;
			func_2505(var_91_string, var_92_int);
			@PlayAnimation("all", var_91_string);
			@WaitForAnimEnd(var_61_bool);
			var_93_bool = !var_61_bool; //@nz
			if(var_93_bool == 0) goto Label_2109;
			goto Label_2120;
			}
				Label_2109:
					bool var_84_bool;
					func_2123(var_84_bool);
					var_85_bool = !var_84_bool; //@nz
					if(var_85_bool == 0) goto Label_2115;
			}
		}
	Label_2120:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2115:
		@ResetAAS();
		var_57_int += 1;
	}
	
}


// @pe
void func_2569(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_1801(object var_2_object, string var_566_string)
{
	bool var_567_bool;
	func_2792(var_567_bool);
	if(!var_567_bool) //@nz
		return 0;
	if(var_566_string == var_2_object)
		return 0;
	string var_570_string; bool var_571_bool;
	var_566_string = var_570_string;
	if(var_566_string == "")
		var_571_bool = false;
	else
		var_571_bool = true;
	func_2392(var_570_string, var_571_bool);
	var_2_object = var_566_string;
	
}


// @pe
void func_1547(object var_2_object, string var_507_string)
{
	bool var_508_bool;
	func_2792(var_508_bool);
	if(!var_508_bool) //@nz
		return 0;
	if(var_507_string == var_2_object)
		return 0;
	string var_511_string; bool var_512_bool;
	var_507_string = var_511_string;
	if(var_507_string == "")
		var_512_bool = false;
	else
		var_512_bool = true;
	func_2392(var_511_string, var_512_bool);
	var_2_object = var_507_string;
	
}


void func_13(object var_0_object, int var_269_int, object var_270_object)
{
	var_0_object = var_270_object;
	bool var_280_bool; object var_281_object;
	object var_282_object;
	func_2420(var_282_object);
	var_282_object = var_281_object;
	func_2247(var_280_bool, var_281_object);
	bool var_283_bool; object var_284_object;
	var_270_object = var_284_object;
	func_2162(var_283_bool, var_284_object, 70.0);
	if(!var_283_bool) { //@nz
		var_269_int = -2;
		return 8;
	}
	object var_276_object;
	@CreateDialog(var_276_object);
	int var_287_int;
	func_2786(var_287_int);
	var_276_object->SetNPCName(var_287_int);
	int var_288_int;
	func_2784(var_288_int);
	var_276_object->SetNPCDescription(var_288_int);
	string var_289_string;
	func_2788(var_289_string);
	var_276_object->SetPhoto(var_289_string);
	string var_290_string;
	func_2790(var_290_string);
	var_276_object->SetPhoto2(var_290_string);
	int var_291_int;
	func_2767(var_291_int);
	var_276_object->SetPlayerName(var_291_int);
	bool var_277_bool;
	@IsOverrideActive(var_277_bool);
	if(var_277_bool != 0) {
		var_269_int = -2;
		return 8;
	}
	@DoDialog(var_276_object);
	object var_293_object; object var_294_object;
	var_270_object = var_293_object;
	var_276_object = var_294_object;
	TaskCall(2);
	func_94(var_295_object, var_296_object, var_297_string, var_298_bool, var_293_object, var_294_object);
	TaskReturn();
	bool var_279_bool;
	var_276_object->IsDialogEnd(var_279_bool);
	
	for(;;) {
		var_331_bool = !var_279_bool; //@nz
		if(var_331_bool == 0) goto Label_83;
		@sync();
		var_276_object->IsDialogEnd(var_279_bool);
	}
	
Label_83:
	object var_332_object;
	var_270_object = var_332_object;
	func_2230();
	@StopDialog(var_276_object);
	var_276_object->GetReturnValue(-1);
	int var_278_int = var_269_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2575(object var_68_object)
{
	@Trace("Gun is given");
	object var_71_object;
	var_68_object = var_71_object;
	func_2472(var_71_object, "Gun", 1);
}


// @pe
void func_790(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_359_object, object var_360_object)
{
	var_0_object = var_360_object;
	var_3_string = false;
	if(1 != 0) {
		func_853(var_360_object, "Neutral");
		var_0_object->SetMessage(525691); //@t
		var_0_object->ClearReplies(); //@t
		bool var_375_bool;
		func_2626(var_359_object);
		if(var_375_bool != 0)
			var_0_object->AddReply(525692, 30673, 27015); //@t
		var_0_object->AddReply(525695, -1, 27018); //@t
		goto Label_823;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x31a";
	}
Label_823:
	bool var_387_bool;
	func_2792(var_387_bool);
	if(var_387_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2385(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_852;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_852:
		return 0;

	}
	
}


// @pe
void func_2586(object var_56_object)
{
	object var_60_object;
	func_2717(var_60_object);
	object var_57_object;
	var_60_object = var_57_object;
	func_2734(var_57_object, "pt_map_rubin", (float)2);
	object var_80_object;
	func_2717(var_80_object);
	var_56_object->ShowMap(var_80_object);
}


void func_2342(bool var_105_bool, object var_106_object)
{
	bool var_114_bool; int var_115_int; string var_116_string;
	int var_118_int;
	func_2490(var_118_int);
	string var_112_string = ("d" + var_118_int) + "m";
	int var_113_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_106_object->HasProperty((var_112_string + (var_113_int + 1)), var_114_bool);
			if(!var_114_bool) { //@nz
			} else {
				var_113_int += 1;
			}
		}
		if(!var_113_int) { //@nz
			var_105_bool = false;
			return 10;
		}
		var_115_int = 0;
		if(var_113_int > 1)
			@irand(var_115_int, var_113_int);
		var_106_object->GetProperty((var_112_string + (var_115_int + 1)), var_116_string);
		bool var_137_bool; string var_138_string;
		var_116_string = var_138_string;
		func_2398(var_137_bool, var_138_string);
		var_137_bool = var_105_bool;
		return 10;

	}
}


// @pe
void func_2602(bool var_164_bool)
{
	int var_166_int;
	func_2436(var_166_int, "k1q01DobermanDead");
	if(var_166_int != 0) {
		var_164_bool = true;
		return 0;
	}
	var_164_bool = false;
}


// @pe
void func_1070(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_423_object, object var_424_object)
{
	var_0_object = var_424_object;
	var_1_object = var_423_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_430_bool;
		func_2638(var_1_object);
		if(!var_430_bool) { //@nz
			object var_437_object; object var_438_object;
			var_437_object = var_1_object;
			var_438_object = var_0_object;
			func_2547();
			func_1159(var_424_object, "Neutral");
			var_0_object->SetMessage(527714); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(527715, 29269, 29067); //@t
			var_0_object->AddReply(527928, 29269, 29279); //@t
		} else {
					func_1159(var_424_object, "Neutral");
					var_0_object->SetMessage(527716); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(527717, -1, 29069); //@t
					var_0_object->AddReply(527918, -1, 29268); //@t
		}
	}
	for(;;) {
		bool var_456_bool;
		func_2792(var_456_bool);
		if(var_456_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2385(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1158;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1158:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x432";


// @pe
void func_2614(bool var_309_bool)
{
	int var_311_int;
	func_2436(var_311_int, "k1q03");
	if(var_311_int == 1)
		var_309_bool = true;
	var_309_bool = false;
}


// @pe
void func_2626(bool var_375_bool)
{
	int var_377_int;
	func_2436(var_377_int, "k4q01");
	if(var_377_int == 2)
		var_375_bool = true;
	var_375_bool = false;
}


void func_2123(bool var_84_bool)
{
	var_84_bool = true;
}


// @pe
void func_587(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_218_object, object var_219_object)
{
	var_0_object = var_219_object;
	var_1_object = var_218_object;
	var_3_string = false;
	if(1 != 0) {
		func_645(var_219_object, "Neutral");
		var_0_object->SetMessage(525516); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525517, -1, 26873); //@t
		var_0_object->AddReply(526273, -1, 27549); //@t
		goto Label_615;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x24f";
	}
Label_615:
	bool var_244_bool;
	func_2792(var_244_bool);
	if(var_244_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2385(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_644;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_644:
		return 0;

	}
	
}


void func_2125(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_2638(bool var_430_bool)
{
	int var_432_int;
	func_2436(var_432_int, "k10q01KnowAboutRubin");
	if(var_432_int != 0) {
		var_430_bool = true;
		return 0;
	}
	var_430_bool = false;
}


void func_1872(object var_0_object)
{
	bool var_32_bool;
	func_2157(var_32_bool);
	if(!var_32_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_2000();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2054();
	}
}
EMIT "Return(); Pop(0)";


void func_2385(string var_39_string)
{
	float var_42_float; float var_43_float;
	@lshGetAnimTimes(var_39_string, var_42_float, var_43_float);
	@lshPlayAnimation(var_42_float, var_43_float, false);
}


void func_2130(float var_46_float, object var_47_object)
{
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	cvector var_52_cvector;
	var_47_object->GetPosition(var_52_cvector);
	var_46_float = (var_52_cvector - var_51_cvector) | (var_52_cvector - var_51_cvector);
}


// @pe
void func_853(object var_2_object, string var_366_string)
{
	bool var_367_bool;
	func_2792(var_367_bool);
	if(!var_367_bool) //@nz
		return 0;
	if(var_366_string == var_2_object)
		return 0;
	string var_370_string; bool var_371_bool;
	var_366_string = var_370_string;
	if(var_366_string == "")
		var_371_bool = false;
	else
		var_371_bool = true;
	func_2392(var_370_string, var_371_bool);
	var_2_object = var_366_string;
	
}


void func_2392(string var_229_string, bool var_230_bool)
{
	float var_235_float; float var_236_float;
	@lshGetAnimTimes(var_229_string, var_235_float, var_236_float);
	@lshPlayAnimation(var_235_float, var_236_float, var_230_bool);
}


void func_2138(bool var_39_bool, cvector var_40_cvector)
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


void func_2650(void)
{
	object var_42_object;
	@CreateDiaryEntry(var_42_object, 335, 2, 524802);
	bool var_46_bool; object var_47_object;
	var_42_object = var_47_object;
	func_2689(var_46_bool, var_47_object, 333);
}
EMIT "Stack[-1] = 0";


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_293_object, object var_294_object)
{
	var_0_object = var_294_object;
	var_3_string = false;
	if(1 != 0) {
		func_157(var_294_object, "Neutral");
		var_0_object->SetMessage(524791); //@t
		var_0_object->ClearReplies(); //@t
		bool var_309_bool;
		func_2614(var_293_object);
		if(var_309_bool != 0)
			var_0_object->AddReply(524792, 28167, 26107); //@t
		var_0_object->AddReply(524793, -1, 26108); //@t
		goto Label_127;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_127:
	bool var_323_bool;
	func_2792(var_323_bool);
	if(var_323_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2385(var_2_object);
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


void func_2398(bool var_97_bool, string var_98_string)
{
	bool var_100_bool;
	bool var_101_bool;
	func_2792(var_101_bool);
	if(var_101_bool != 0) {
		@lshHasSpeech(var_100_bool, var_98_string);
		if(var_100_bool != 0) {
			@lshPlaySpeech(var_98_string);
			var_97_bool = true;
		}
	}
	var_97_bool = false;
}


void func_2148(bool var_35_bool, object var_36_object)
{
	cvector var_38_cvector;
	var_36_object->GetPosition(var_38_cvector);
	bool var_39_bool; cvector var_40_cvector;
	var_38_cvector = var_40_cvector;
	func_2138(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
}


void func_1892(bool var_56_bool)
{
	object var_58_object;
	@FindActor(var_58_object, "player");
	if(!var_58_object) //@nz
		var_56_bool = false;
	bool var_61_bool; object var_62_object;
	var_58_object = var_62_object;
	func_2148(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
}
EMIT "Stack[-1] = 0";


void func_2663(void)
{
	object var_42_object;
	@CreateDiaryEntry(var_42_object, 371, 1, 525728);
	bool var_46_bool; object var_47_object;
	var_42_object = var_47_object;
	func_2689(var_46_bool, var_47_object, 368);
}
EMIT "Stack[-1] = 0";


void func_2157(bool var_32_bool)
{
	bool var_34_bool;
	@IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
}


void func_2413(void)
{
	bool var_34_bool;
	func_2792(var_34_bool);
	if(var_34_bool != 0)
		@lshStopSpeech();
}


void func_2162(bool var_158_bool, object var_159_object, float var_160_float)
{
	cvector var_171_cvector; bool var_178_bool;
	var_159_object->GetPosition(var_171_cvector);
	float var_170_float;
	var_159_object->GetEyesHeight(var_170_float);
	var_179_float = GetByIndex(var_171_cvector, 1);
	SetByIndex(var_171_cvector, 1) = (var_179_float + var_170_float);
	cvector var_172_cvector;
	@GetPosition(var_172_cvector);
	@GetEyesHeight(var_170_float);
	var_180_float = GetByIndex(var_172_cvector, 1);
	SetByIndex(var_172_cvector, 1) = (var_180_float + var_170_float);
	cvector var_173_cvector = var_171_cvector - var_172_cvector;
	var_181_float = GetByIndex(var_173_cvector, 1);
	SetByIndex(var_173_cvector, 1) = (float)0;
	var_183_float = sqrt(var_173_cvector | var_173_cvector);
	var_173_cvector /= var_183_float;
	cvector var_174_cvector = -var_173_cvector;
	cvector var_185_cvector;
	func_2426(var_185_cvector, (var_174_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_175_cvector = ((var_173_cvector * var_160_float) + (var_185_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_177_bool;
	@IsOverrideActive(var_177_bool);
	if(var_177_bool != 0)
		var_158_bool = false;
	@StopWorld();
	@CameraTransit((var_172_cvector + var_175_cvector), var_174_cvector);
	var_198_float = GetByIndex(var_175_cvector, 0);
	var_199_float = GetByIndex(var_175_cvector, 2);
	@Rotate(var_198_float, var_199_float);
	bool var_200_bool;
	func_2792(var_200_bool);
	if(var_200_bool != 0) {
	} else {
		@HasAnimationTrack(var_178_bool, "head");
		if(var_178_bool == 0) goto Label_2224;
		@LookAsyncCamera("head");
	}
Label_2224:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_158_bool = true;
	
}


void func_1907(object var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_108_float, var_109_float);
}


void func_2676(object var_55_object)
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


void func_2420(object var_65_object)
{
	object var_67_object;
	@self(var_67_object);
	var_67_object = var_65_object;
}
EMIT "Stack[-1] = 0";


void func_1912(bool var_39_bool)
{
	object var_42_object;
	@FindActor(var_42_object, "player");
	if(!var_42_object) { //@nz
		var_39_bool = false;
		return 4;
	}
	float var_46_float; object var_47_object;
	func_2130(var_46_float, var_47_object);
	if(var_46_float > 90000.0) {
		var_39_bool = false;
		return 4;
	}
	bool var_43_bool;
	@CanSee(var_43_bool, var_47_object);
	var_43_bool = var_39_bool;
}
EMIT "Stack[-2] = 0";


void func_2426(cvector var_185_cvector, cvector var_186_cvector)
{
	float var_189_float = sqrt(var_186_cvector | var_186_cvector);
	if(var_189_float < 0.000001)
		var_185_cvector = [0.0, 0.0, 0.0];
	var_185_cvector = var_186_cvector / var_189_float;
}


void func_1403(object var_0_object, int var_476_int, object var_477_object)
{
	var_0_object = var_477_object;
	bool var_487_bool; object var_488_object;
	object var_489_object;
	func_2420(var_489_object);
	var_489_object = var_488_object;
	func_2247(var_487_bool, var_488_object);
	bool var_490_bool; object var_491_object;
	var_477_object = var_491_object;
	func_2162(var_490_bool, var_491_object, 70.0);
	if(!var_490_bool) { //@nz
		var_476_int = -2;
		return 8;
	}
	object var_483_object;
	@CreateDialog(var_483_object);
	int var_494_int;
	func_2786(var_494_int);
	var_483_object->SetNPCName(var_494_int);
	int var_495_int;
	func_2784(var_495_int);
	var_483_object->SetNPCDescription(var_495_int);
	string var_496_string;
	func_2788(var_496_string);
	var_483_object->SetPhoto(var_496_string);
	string var_497_string;
	func_2790(var_497_string);
	var_483_object->SetPhoto2(var_497_string);
	int var_498_int;
	func_2767(var_498_int);
	var_483_object->SetPlayerName(var_498_int);
	bool var_484_bool;
	@IsOverrideActive(var_484_bool);
	if(var_484_bool != 0) {
		var_476_int = -2;
		return 8;
	}
	@DoDialog(var_483_object);
	object var_500_object; object var_501_object;
	var_477_object = var_500_object;
	var_483_object = var_501_object;
	TaskCall(10);
	func_1484(var_502_object, var_503_object, var_504_string, var_505_bool, var_500_object, var_501_object);
	TaskReturn();
	bool var_486_bool;
	var_483_object->IsDialogEnd(var_486_bool);
	
	for(;;) {
		var_533_bool = !var_486_bool; //@nz
		if(var_533_bool == 0) goto Label_1473;
		@sync();
		var_483_object->IsDialogEnd(var_486_bool);
	}
	
Label_1473:
	object var_534_object;
	var_477_object = var_534_object;
	func_2230();
	@StopDialog(var_483_object);
	var_483_object->GetReturnValue(-1);
	int var_485_int = var_476_int;
}
EMIT "Stack[-4] = 0";


void func_1662(object var_0_object, int var_535_int, object var_536_object)
{
	var_0_object = var_536_object;
	bool var_546_bool; object var_547_object;
	object var_548_object;
	func_2420(var_548_object);
	var_548_object = var_547_object;
	func_2247(var_546_bool, var_547_object);
	bool var_549_bool; object var_550_object;
	var_536_object = var_550_object;
	func_2162(var_549_bool, var_550_object, 70.0);
	if(!var_549_bool) { //@nz
		var_535_int = -2;
		return 8;
	}
	object var_542_object;
	@CreateDialog(var_542_object);
	int var_553_int;
	func_2786(var_553_int);
	var_542_object->SetNPCName(var_553_int);
	int var_554_int;
	func_2784(var_554_int);
	var_542_object->SetNPCDescription(var_554_int);
	string var_555_string;
	func_2788(var_555_string);
	var_542_object->SetPhoto(var_555_string);
	string var_556_string;
	func_2790(var_556_string);
	var_542_object->SetPhoto2(var_556_string);
	int var_557_int;
	func_2767(var_557_int);
	var_542_object->SetPlayerName(var_557_int);
	bool var_543_bool;
	@IsOverrideActive(var_543_bool);
	if(var_543_bool != 0) {
		var_535_int = -2;
		return 8;
	}
	@DoDialog(var_542_object);
	object var_559_object; object var_560_object;
	var_536_object = var_559_object;
	var_542_object = var_560_object;
	TaskCall(12);
	func_1743(var_561_object, var_562_object, var_563_string, var_564_bool, var_559_object, var_560_object);
	TaskReturn();
	bool var_545_bool;
	var_542_object->IsDialogEnd(var_545_bool);
	
	for(;;) {
		var_589_bool = !var_545_bool; //@nz
		if(var_589_bool == 0) goto Label_1732;
		@sync();
		var_542_object->IsDialogEnd(var_545_bool);
	}
	
Label_1732:
	object var_590_object;
	var_536_object = var_590_object;
	func_2230();
	@StopDialog(var_542_object);
	var_542_object->GetReturnValue(-1);
	int var_544_int = var_535_int;
}
EMIT "Stack[-4] = 0";


void func_2689(bool var_46_bool, object var_47_object, int var_48_int)
{
	object var_55_object;
	func_2676(var_55_object);
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


void func_2436(int var_311_int, string var_312_string)
{
	int var_314_int;
	@GetVariable(var_312_string, var_314_int);
	var_314_int = var_311_int;
}


// @pe
void func_645(object var_2_object, string var_225_string)
{
	bool var_226_bool;
	func_2792(var_226_bool);
	if(!var_226_bool) //@nz
		return 0;
	if(var_225_string == var_2_object)
		return 0;
	string var_229_string; bool var_230_bool;
	var_225_string = var_229_string;
	if(var_225_string == "")
		var_230_bool = false;
	else
		var_230_bool = true;
	func_2392(var_229_string, var_230_bool);
	var_2_object = var_225_string;
	
}


// @pe
void func_1159(object var_2_object, string var_441_string)
{
	bool var_442_bool;
	func_2792(var_442_bool);
	if(!var_442_bool) //@nz
		return 0;
	if(var_441_string == var_2_object)
		return 0;
	string var_445_string; bool var_446_bool;
	var_441_string = var_445_string;
	if(var_441_string == "")
		var_446_bool = false;
	else
		var_446_bool = true;
	func_2392(var_445_string, var_446_bool);
	var_2_object = var_441_string;
	
}


void func_2441(int var_87_int, int var_88_int)
{
	object var_90_object;
	@CreateIntVector(var_90_object);
	var_90_object->add(var_87_int);
	var_90_object->add(var_88_int);
	@SendWorldWndMessage(3, var_90_object);
}
EMIT "Stack[-1] = 0";


void func_1934(void)
{
	float var_46_float;
	@rand(var_46_float, 8, 16);
	@SetTimer(10, var_46_float);
}


void func_2453(object var_76_object, object var_77_object, int var_78_int)
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
		func_2441(var_87_int, var_88_int);
	}
	
}


void func_1943(void)
{
	@KillTimer(10);
}


// @pe
void func_157(object var_2_object, string var_300_string)
{
	bool var_301_bool;
	func_2792(var_301_bool);
	if(!var_301_bool) //@nz
		return 0;
	if(var_300_string == var_2_object)
		return 0;
	string var_304_string; bool var_305_bool;
	var_300_string = var_304_string;
	if(var_300_string == "")
		var_305_bool = false;
	else
		var_305_bool = true;
	func_2392(var_304_string, var_305_bool);
	var_2_object = var_300_string;
	
}


void func_2717(object var_41_object)
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


void func_2472(object var_71_object, string var_72_string, int var_73_int)
{
	object var_75_object;
	@CreateInvItem(var_75_object);
	var_75_object->SetItemName(var_72_string);
	object var_76_object; object var_77_object; int var_78_int;
	var_71_object = var_76_object;
	var_75_object = var_77_object;
	var_73_int = var_78_int;
	func_2453(var_76_object, var_77_object, var_78_int);
}
EMIT "Stack[-1] = 0";


void func_2734(object var_57_object, string var_58_string, float var_59_float)
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


void func_2485(float var_52_float)
{
	float var_54_float;
	@GetGameTime(var_54_float);
	var_54_float = var_52_float;
}


void func_2230(void)
{
	bool var_260_bool;
	@CameraSwitchToNormal();
	bool var_261_bool;
	func_2792(var_261_bool);
	if(var_261_bool != 0) {
	} else {
		@HasAnimationTrack(var_260_bool, "head");
		if(var_260_bool == 0) goto Label_2246;
		@UnlookAsync("head");
	}
Label_2246:
	
}


void func_2490(int var_118_int)
{
	float var_120_float;
	@GetGameTime(var_120_float);
	var_118_int = 1 + (var_120_float / 24);
}


// @pe
void func_2499(bool var_266_bool, int var_267_int)
{
	int var_268_int;
	func_2490(var_268_int);
	var_266_bool = var_268_int == var_267_int;
}


void func_709(object var_0_object, int var_335_int, object var_336_object)
{
	var_0_object = var_336_object;
	bool var_346_bool; object var_347_object;
	object var_348_object;
	func_2420(var_348_object);
	var_348_object = var_347_object;
	func_2247(var_346_bool, var_347_object);
	bool var_349_bool; object var_350_object;
	var_336_object = var_350_object;
	func_2162(var_349_bool, var_350_object, 70.0);
	if(!var_349_bool) { //@nz
		var_335_int = -2;
		return 8;
	}
	object var_342_object;
	@CreateDialog(var_342_object);
	int var_353_int;
	func_2786(var_353_int);
	var_342_object->SetNPCName(var_353_int);
	int var_354_int;
	func_2784(var_354_int);
	var_342_object->SetNPCDescription(var_354_int);
	string var_355_string;
	func_2788(var_355_string);
	var_342_object->SetPhoto(var_355_string);
	string var_356_string;
	func_2790(var_356_string);
	var_342_object->SetPhoto2(var_356_string);
	int var_357_int;
	func_2767(var_357_int);
	var_342_object->SetPlayerName(var_357_int);
	bool var_343_bool;
	@IsOverrideActive(var_343_bool);
	if(var_343_bool != 0) {
		var_335_int = -2;
		return 8;
	}
	@DoDialog(var_342_object);
	object var_359_object; object var_360_object;
	var_336_object = var_359_object;
	var_342_object = var_360_object;
	TaskCall(6);
	func_790(var_361_object, var_362_object, var_363_string, var_364_bool, var_359_object, var_360_object);
	TaskReturn();
	bool var_345_bool;
	var_342_object->IsDialogEnd(var_345_bool);
	
	for(;;) {
		var_395_bool = !var_345_bool; //@nz
		if(var_395_bool == 0) goto Label_779;
		@sync();
		var_342_object->IsDialogEnd(var_345_bool);
	}
	
Label_779:
	object var_396_object;
	var_336_object = var_396_object;
	func_2230();
	@StopDialog(var_342_object);
	var_342_object->GetReturnValue(-1);
	int var_344_int = var_335_int;
}
EMIT "Stack[-4] = 0";


void func_2247(bool var_63_bool, object var_64_object)
{
	int var_70_int; int var_71_int;
	@GetVariable("voice_common", var_70_int);
	if(var_70_int != 0) {
		bool var_74_bool; object var_75_object;
		var_64_object = var_75_object;
		func_2305(var_74_bool, var_75_object);
		if(!var_74_bool) { //@nz
			bool var_105_bool; object var_106_object;
			var_64_object = var_106_object;
			func_2342(var_105_bool, var_106_object);
			if(!var_105_bool) { //@nz
				var_63_bool = false;
				return 4;
			}
		}
		@irand(var_71_int, 2);
		if(var_71_int != 0)
			@SetVariable("voice_common", ((var_70_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_150_bool; object var_151_object;
		var_64_object = var_151_object;
		func_2342(var_150_bool, var_151_object);
		if(!var_150_bool) { //@nz
			bool var_153_bool; object var_154_object;
			var_64_object = var_154_object;
			func_2305(var_153_bool, var_154_object);
			if(!var_153_bool) { //@nz
				var_63_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2303;
	
Label_2303:
	var_63_bool = true;
	
}


void func_2505(string var_70_string, int var_71_int)
{
	string var_73_string = "idle";
	if(var_71_int != 0)
		var_73_string += var_71_int;
	var_73_string = var_70_string;
}


// @pe
void func_1484(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_500_object, object var_501_object)
{
	var_0_object = var_501_object;
	var_1_object = var_500_object;
	var_3_string = false;
	if(1 != 0) {
		func_1547(var_501_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_1517;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5d0";
	}
Label_1517:
	bool var_525_bool;
	func_2792(var_525_bool);
	if(var_525_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2385(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1546;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1546:
		return 0;

	}
	
}


void func_2767(int var_209_int)
{
	int var_211_int;
	@GetVariable("branch", var_211_int);
	if(var_211_int == 0) {
		var_209_int = 1;
		return 2;
	EMIT "GOTO 0xade";
	}
	if(var_211_int == 1) {
		var_209_int = 2;
		return 2;
	}
	var_209_int = 3;
}


// @pe
void func_1743(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_559_object, object var_560_object)
{
	var_0_object = var_560_object;
	var_1_object = var_559_object;
	var_3_string = false;
	if(1 != 0) {
		func_1801(var_560_object, "Neutral");
		var_0_object->SetMessage(540545); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540546, -1, 42555); //@t
		var_0_object->AddReply(540798, -1, 42847); //@t
		goto Label_1771;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x6d3";
	}
Label_1771:
	bool var_581_bool;
	func_2792(var_581_bool);
	if(var_581_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2385(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1800;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1800:
		return 0;

	}
	
}


void func_2512(int var_64_int)
{
	int var_67_int; bool var_68_bool;
	var_67_int = 0;
	
	for(;;) {
		string var_70_string; int var_71_int;
		var_67_int = var_71_int;
		func_2505(var_70_string, var_71_int);
		@HasAnimation(var_68_bool, "all", var_70_string);
		if(!var_68_bool) //@nz
			break;
		var_67_int += 1;
	}
	var_67_int = var_64_int;
}


void func_989(object var_0_object, int var_399_int, object var_400_object)
{
	var_0_object = var_400_object;
	bool var_410_bool; object var_411_object;
	object var_412_object;
	func_2420(var_412_object);
	var_412_object = var_411_object;
	func_2247(var_410_bool, var_411_object);
	bool var_413_bool; object var_414_object;
	var_400_object = var_414_object;
	func_2162(var_413_bool, var_414_object, 70.0);
	if(!var_413_bool) { //@nz
		var_399_int = -2;
		return 8;
	}
	object var_406_object;
	@CreateDialog(var_406_object);
	int var_417_int;
	func_2786(var_417_int);
	var_406_object->SetNPCName(var_417_int);
	int var_418_int;
	func_2784(var_418_int);
	var_406_object->SetNPCDescription(var_418_int);
	string var_419_string;
	func_2788(var_419_string);
	var_406_object->SetPhoto(var_419_string);
	string var_420_string;
	func_2790(var_420_string);
	var_406_object->SetPhoto2(var_420_string);
	int var_421_int;
	func_2767(var_421_int);
	var_406_object->SetPlayerName(var_421_int);
	bool var_407_bool;
	@IsOverrideActive(var_407_bool);
	if(var_407_bool != 0) {
		var_399_int = -2;
		return 8;
	}
	@DoDialog(var_406_object);
	object var_423_object; object var_424_object;
	var_400_object = var_423_object;
	var_406_object = var_424_object;
	TaskCall(8);
	func_1070(var_425_object, var_426_object, var_427_string, var_428_bool, var_423_object, var_424_object);
	TaskReturn();
	bool var_409_bool;
	var_406_object->IsDialogEnd(var_409_bool);
	
	for(;;) {
		var_472_bool = !var_409_bool; //@nz
		if(var_472_bool == 0) goto Label_1059;
		@sync();
		var_406_object->IsDialogEnd(var_409_bool);
	}
	
Label_1059:
	object var_473_object;
	var_400_object = var_473_object;
	func_2230();
	@StopDialog(var_406_object);
	var_406_object->GetReturnValue(-1);
	int var_408_int = var_399_int;
}
EMIT "Stack[-4] = 0";


void func_2784(int var_206_int)
{
	var_206_int = 515548;
}


// @pe
void func_2529(void)
{
	@SetVariable("k1q03", 2);
	func_2650();
}


void func_2786(int var_205_int)
{
	var_205_int = 502873;
}


void func_2788(string var_207_string)
{
	var_207_string = "ui/NPC_Notkin.png";
}


void func_2790(string var_208_string)
{
	var_208_string = "ui/NPC_Notkin_b.png";
}


void func_2792(bool var_101_bool)
{
	var_101_bool = true;
}


// @pe
void func_2794(object var_49_object)
{
	var_50_bool = GlobalVars[1];
	if(!var_50_bool) { //@nz
		int var_52_int; object var_53_object;
		var_49_object = var_53_object;
		TaskCall(3);
		func_506(var_54_object, var_52_int, var_53_object);
		TaskReturn();
		var_265_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_266_bool;
	func_2499(var_266_bool, 1);
	if(var_266_bool != 0) {
		int var_269_int; object var_270_object;
		var_49_object = var_270_object;
		TaskCall(1);
		func_13(var_271_object, var_269_int, var_270_object);
		TaskReturn();
		return 0;
	}
	bool var_333_bool;
	func_2499(var_333_bool, 4);
	if(var_333_bool != 0) {
		int var_335_int; object var_336_object;
		var_49_object = var_336_object;
		TaskCall(5);
		func_709(var_337_object, var_335_int, var_336_object);
		TaskReturn();
		return 0;
	}
	bool var_397_bool;
	func_2499(var_397_bool, 10);
	if(var_397_bool != 0) {
		int var_399_int; object var_400_object;
		var_49_object = var_400_object;
		TaskCall(7);
		func_989(var_401_object, var_399_int, var_400_object);
		TaskReturn();
		return 0;
	}
	bool var_474_bool;
	func_2499(var_474_bool, 12);
	if(var_474_bool != 0) {
		int var_476_int; object var_477_object;
		var_49_object = var_477_object;
		TaskCall(9);
		func_1403(var_478_object, var_476_int, var_477_object);
		TaskReturn();
		return 0;
	}
	int var_535_int; object var_536_object;
	var_49_object = var_536_object;
	TaskCall(11);
	func_1662(var_537_object, var_535_int, var_536_object);
	TaskReturn();
}


// @pe
void func_2538(void)
{
	@SetVariable("k4q01", 3);
	func_2663();
}


// @pe
void func_2547(void)
{
	@SetVariable("k10q01KnowAboutRubin", 1);
}


void func_2553(void)
{
	object var_41_object;
	func_2717(var_41_object);
	object var_40_object;
	var_41_object = var_40_object;
	float var_52_float;
	func_2485(var_52_float);
	var_40_object->AddMark("k10q01NotkinGotoRubin", "pt_map_rubin", 3, 530195, var_52_float);
}
EMIT "Stack[-1] = 0";


void func_506(object var_0_object, int var_52_int, object var_53_object)
{
	var_0_object = var_53_object;
	bool var_63_bool; object var_64_object;
	object var_65_object;
	func_2420(var_65_object);
	var_65_object = var_64_object;
	func_2247(var_63_bool, var_64_object);
	bool var_158_bool; object var_159_object;
	var_53_object = var_159_object;
	func_2162(var_158_bool, var_159_object, 70.0);
	if(!var_158_bool) { //@nz
		var_52_int = -2;
		return 8;
	}
	object var_59_object;
	@CreateDialog(var_59_object);
	int var_205_int;
	func_2786(var_205_int);
	var_59_object->SetNPCName(var_205_int);
	int var_206_int;
	func_2784(var_206_int);
	var_59_object->SetNPCDescription(var_206_int);
	string var_207_string;
	func_2788(var_207_string);
	var_59_object->SetPhoto(var_207_string);
	string var_208_string;
	func_2790(var_208_string);
	var_59_object->SetPhoto2(var_208_string);
	int var_209_int;
	func_2767(var_209_int);
	var_59_object->SetPlayerName(var_209_int);
	bool var_60_bool;
	@IsOverrideActive(var_60_bool);
	if(var_60_bool != 0) {
		var_52_int = -2;
		return 8;
	}
	@DoDialog(var_59_object);
	object var_218_object; object var_219_object;
	var_53_object = var_218_object;
	var_59_object = var_219_object;
	TaskCall(4);
	func_587(var_220_object, var_221_object, var_222_string, var_223_bool, var_218_object, var_219_object);
	TaskReturn();
	bool var_62_bool;
	var_59_object->IsDialogEnd(var_62_bool);
	
	for(;;) {
		var_257_bool = !var_62_bool; //@nz
		if(var_257_bool == 0) goto Label_576;
		@sync();
		var_59_object->IsDialogEnd(var_62_bool);
	}
	
Label_576:
	object var_258_object;
	var_53_object = var_258_object;
	func_2230();
	@StopDialog(var_59_object);
	var_59_object->GetReturnValue(-1);
	int var_61_int = var_52_int;
}
EMIT "Stack[-4] = 0";



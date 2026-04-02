// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		func_4583();
		bool var_21_bool;
		func_3550(var_21_bool);
		if(!var_21_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_3615("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool)
	{
		object var_21_object;
		var_20_bool = var_21_object;
		func_4587(var_21_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool)
	{
		object var_22_object;
		var_20_bool = var_22_object;
		bool var_21_bool;
		func_3538(var_21_bool, var_22_object);
		@WaitForAnimEnd();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		if(1 != 0) {
			func_3633();
			if(var_21_bool == 10081) {
				object var_26_object; object var_27_object;
				var_26_object = var_1_object;
				var_27_object = var_0_object;
				func_3735();
			}
			if(var_21_bool == 10088) {
				object var_94_object; object var_95_object;
				var_94_object = var_1_object;
				var_95_object = var_0_object;
				func_3735();
			}
			if(var_20_string == 10054) {
				object var_98_object; object var_99_object;
				var_98_object = var_1_object;
				var_99_object = var_0_object;
				func_4018();
				func_205(var_21_bool, "Neutral");
				var_0_object->SetMessage(9170); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9171, 10056, 10055); //@t
				var_0_object->AddReply(9175, 10062, 10061); //@t
				var_0_object->AddReply(9187, 10077, 10076); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=0";
			EMIT "Call 0xcd";
			EMIT "Pop(1)";
			EMIT "Push((int) 5800)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
			EMIT "Pop(0)";
			EMIT "Push((int) 5801)";
			EMIT "Push((int) 6391)";
			EMIT "Push((int) 6390)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 5819)";
			EMIT "Push((int) 6391)";
			EMIT "Push((int) 6408)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 5820)";
			EMIT "Push((int) 6391)";
			EMIT "Push((int) 6410)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_20_string == 6391) {
				func_205(var_21_bool, "Neutral");
				var_0_object->SetMessage(5802); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5803, 6393, 6392); //@t
				var_0_object->AddReply(5806, 6396, 6395); //@t
				return 0;
			}
			if(var_20_string == 6396) {
				func_205(var_21_bool, "Neutral");
				var_0_object->SetMessage(5807); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5808, 6398, 6397); //@t
				var_0_object->AddReply(5818, -1, 6407); //@t
				return 0;
			}
			if(var_20_string == 6398) {
				func_205(var_21_bool, "Neutral");
				var_0_object->SetMessage(5809); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5810, 6400, 6399); //@t
				var_0_object->AddReply(5817, -1, 6406); //@t
				return 0;
			}
			if(var_20_string == 6400) {
				func_205(var_21_bool, "Neutral");
				var_0_object->SetMessage(5811); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5812, 6402, 6401); //@t
				var_0_object->AddReply(5816, -1, 6405); //@t
				return 0;
			}
			if(var_20_string == 6402) {
				func_205(var_21_bool, "Neutral");
				var_0_object->SetMessage(5813); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5814, -1, 6403); //@t
				var_0_object->AddReply(5815, -1, 6404); //@t
				return 0;
			}
			if(var_20_string == 6393) {
				func_205(var_21_bool, "Neutral");
				var_0_object->SetMessage(5804); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5805, -1, 6394); //@t
				return 0;
			}
			if(var_20_string == 10077) {
				func_205(var_21_bool, "Neutral");
				var_0_object->SetMessage(9188); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9189, -1, 10078); //@t
				var_0_object->AddReply(9190, 10080, 10079); //@t
				return 0;
			}
			if(var_20_string == 10080) {
				func_205(var_21_bool, "Neutral");
				var_0_object->SetMessage(9191); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9192, -1, 10081); //@t
				var_0_object->AddReply(9193, 10083, 10082); //@t
				return 0;
			}
			if(var_20_string == 10083) {
				func_205(var_21_bool, "Neutral");
				var_0_object->SetMessage(9194); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9195, 10085, 10084); //@t
				var_0_object->AddReply(9202, 10085, 10093); //@t
				return 0;
			}
			if(var_20_string == 10085) {
				func_205(var_21_bool, "Neutral");
				var_0_object->SetMessage(9196); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9197, 10087, 10086); //@t
				var_0_object->AddReply(9200, 10087, 10089); //@t
				var_0_object->AddReply(9201, 10087, 10091); //@t
				return 0;
			}
			if(var_20_string == 10087) {
				func_205(var_21_bool, "Neutral");
				var_0_object->SetMessage(9198); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9199, -1, 10088); //@t
				return 0;
			}
			if(var_20_string == 10062) {
				func_205(var_21_bool, "Neutral");
				var_0_object->SetMessage(9176); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9177, 10064, 10063); //@t
				var_0_object->AddReply(9186, -1, 10075); //@t
				return 0;
			}
			if(var_20_string == 10064) {
				func_205(var_21_bool, "Neutral");
				var_0_object->SetMessage(9178); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9179, 10066, 10065); //@t
				var_0_object->AddReply(9185, 10066, 10073); //@t
				return 0;
			}
			if(var_20_string == 10066) {
				func_205(var_21_bool, "Neutral");
				var_0_object->SetMessage(9180); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9181, 10068, 10067); //@t
				var_0_object->AddReply(9184, 10068, 10071); //@t
				return 0;
			}
			if(var_20_string == 10068) {
				func_205(var_21_bool, "Neutral");
				var_0_object->SetMessage(9182); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9183, 10085, 10069); //@t
				return 0;
			}
			if(var_20_string == 10056) {
				func_205(var_21_bool, "Neutral");
				var_0_object->SetMessage(9172); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9173, 10064, 10057); //@t
				var_0_object->AddReply(9174, 10064, 10059); //@t
				return 0;
			}
			var_3_string = true;
			bool var_281_bool;
			func_3733(var_281_bool);
			if(var_281_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xde";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		if(1 != 0) {
			func_3633();
			if(var_21_bool == 9647) {
				object var_26_object; object var_27_object;
				var_26_object = var_1_object;
				var_27_object = var_0_object;
				func_3849();
				object var_30_object; object var_31_object;
				var_30_object = var_1_object;
				var_31_object = var_0_object;
				func_3814();
				object var_89_object = var_1_object;
				func_3873(var_0_object);
			}
			if(var_21_bool == 9649) {
				object var_117_object; object var_118_object;
				var_117_object = var_1_object;
				var_118_object = var_0_object;
				func_3849();
			}
			if(var_21_bool == 9639) {
				object var_121_object; object var_122_object;
				var_121_object = var_1_object;
				var_122_object = var_0_object;
				func_3849();
				object var_123_object; object var_124_object;
				var_123_object = var_1_object;
				var_124_object = var_0_object;
				func_3814();
				object var_125_object = var_1_object;
				func_3873(var_0_object);
			}
			if(var_21_bool == 9594) {
				object var_129_object; object var_130_object;
				var_129_object = var_1_object;
				var_130_object = var_0_object;
				func_3849();
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_object;
				func_3814();
				object var_133_object = var_1_object;
				func_3873(var_0_object);
			}
			if(var_21_bool == 9963) {
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_object;
				func_3905();
			}
			if(var_21_bool == 12332) {
				object var_187_object; object var_188_object;
				var_187_object = var_1_object;
				var_188_object = var_0_object;
				func_3814();
				object var_189_object = var_1_object;
				func_3873(var_0_object);
			}
			if(var_21_bool == 9684) {
				object var_193_object; object var_194_object;
				var_193_object = var_1_object;
				var_194_object = var_0_object;
				func_3855();
			}
			if(var_21_bool == 9672) {
				object var_199_object; object var_200_object;
				var_199_object = var_1_object;
				var_200_object = var_0_object;
				func_3861();
			}
			if(var_21_bool == 9678) {
				object var_205_object; object var_206_object;
				var_205_object = var_1_object;
				var_206_object = var_0_object;
				func_3861();
			}
			if(var_21_bool == 9679) {
				object var_209_object; object var_210_object;
				var_209_object = var_1_object;
				var_210_object = var_0_object;
				func_3861();
			}
			if(var_21_bool == 9667) {
				object var_213_object; object var_214_object;
				var_213_object = var_1_object;
				var_214_object = var_0_object;
				func_3861();
			}
			if(var_21_bool == 9644) {
				object var_217_object; object var_218_object;
				var_217_object = var_1_object;
				var_218_object = var_0_object;
				func_3867();
			}
			if(var_21_bool == 9641) {
				object var_223_object; object var_224_object;
				var_223_object = var_1_object;
				var_224_object = var_0_object;
				func_3867();
			}
			if(var_20_string == 9574) {
				bool var_227_bool = false;
				bool var_228_bool;
				func_4200(var_1_object);
				if(var_228_bool != 0) {
					bool var_236_bool;
					func_4212(var_1_object);
					if(var_236_bool != 0)
						var_227_bool = true;
				}
				if(var_227_bool != 0) {
					object var_242_object; object var_243_object;
					var_242_object = var_1_object;
					var_243_object = var_0_object;
					func_4178();
					func_967(var_21_bool, "Neutral");
					var_0_object->SetMessage(8737); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(8777, 9633, 9624); //@t
					var_0_object->AddReply(8781, 9629, 9628); //@t
					return 0;
				}
				bool var_268_bool;
				func_4190(var_268_bool, var_1_object);
				if(var_268_bool != 0) {
					func_967(var_21_bool, "Neutral");
					var_0_object->SetMessage(9805); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(9806, 10801, 10800); //@t
					var_0_object->AddReply(9822, 10801, 10818); //@t
					return 0;
				}
				bool var_280_bool = false;
				bool var_281_bool;
				func_4272(var_281_bool, var_1_object);
				if(var_281_bool != 0) {
					bool var_290_bool;
					func_4260(var_1_object);
					if(!var_290_bool) //@nz
						var_280_bool = true;
				}
				if(var_280_bool != 0) {
					func_967(var_21_bool, "Neutral");
					var_0_object->SetMessage(9078); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(9079, 9958, 9957); //@t
					return 0;
				}
				bool var_302_bool;
				func_4190(var_302_bool, var_1_object);
				if(var_302_bool != 0) {
					func_967(var_21_bool, "Neutral");
					var_0_object->SetMessage(8769); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(8770, 9621, 9617); //@t
					var_0_object->AddReply(8771, 9619, 9618); //@t
					return 0;
				}
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8778); //@t
				var_0_object->ClearReplies(); //@t
				bool var_314_bool;
				func_4200(var_1_object);
				if(var_314_bool != 0)
					var_0_object->AddReply(11141, 12331, 12330); //@t
				bool var_319_bool;
				func_4224(var_1_object);
				if(var_319_bool != 0)
					var_0_object->AddReply(8779, 9681, 9626); //@t
				bool var_328_bool;
				func_4236(var_1_object);
				if(var_328_bool != 0)
					var_0_object->AddReply(8780, 9669, 9627); //@t
				bool var_337_bool = false;
				bool var_338_bool = false;
				bool var_339_bool;
				func_4248(var_1_object);
				if(var_339_bool != 0) {
					bool var_345_bool;
					func_4200(var_1_object);
					if(!var_345_bool) //@nz
						var_338_bool = true;
				}
				if(var_338_bool != 0) {
					bool var_348_bool;
					func_4260(var_1_object);
					if(!var_348_bool) //@nz
						var_337_bool = true;
				}
				if(var_337_bool != 0)
					var_0_object->AddReply(8802, 9651, 9650); //@t
				var_0_object->AddReply(11140, -1, 12329); //@t
				return 0;
			}
			if(var_20_string == 9651) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8803); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8804, 9640, 9652); //@t
				return 0;
			}
			if(var_20_string == 9640) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8793); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8795, 9643, 9642); //@t
				var_0_object->AddReply(8794, -1, 9641); //@t
				return 0;
			}
			if(var_20_string == 9643) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8796); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8797, -1, 9644); //@t
				return 0;
			}
			if(var_20_string == 9669) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8818); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8819, 9666, 9670); //@t
				return 0;
			}
			if(var_20_string == 9666) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8815); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8817, 9671, 9668); //@t
				var_0_object->AddReply(8816, -1, 9667); //@t
				return 0;
			}
			if(var_20_string == 9671) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8820); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8821, -1, 9672); //@t
				var_0_object->AddReply(8822, 9674, 9673); //@t
				return 0;
			}
			if(var_20_string == 9674) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8823); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8824, 9677, 9675); //@t
				return 0;
			}
			if(var_20_string == 9677) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8826); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8827, -1, 9678); //@t
				var_0_object->AddReply(8828, -1, 9679); //@t
				return 0;
			}
			if(var_20_string == 9681) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8829); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8830, 9683, 9682); //@t
				return 0;
			}
			if(var_20_string == 9683) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8831); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8832, -1, 9684); //@t
				return 0;
			}
			if(var_20_string == 12331) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(11142); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11143, -1, 12332); //@t
				return 0;
			}
			if(var_20_string == 9619) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8772); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8773, 9621, 9620); //@t
				var_0_object->AddReply(8814, 9621, 9663); //@t
				return 0;
			}
			if(var_20_string == 9621) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8774); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8775, 9623, 9622); //@t
				var_0_object->AddReply(10448, 9623, 11518); //@t
				return 0;
			}
			if(var_20_string == 9623) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8776); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8739, 9577, 9576); //@t
				var_0_object->AddReply(8764, 9577, 9608); //@t
				var_0_object->AddReply(8765, 9611, 9610); //@t
				return 0;
			}
			if(var_20_string == 9611) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8766); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8767, 9587, 9612); //@t
				var_0_object->AddReply(8768, 9587, 9614); //@t
				return 0;
			}
			if(var_20_string == 9577) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8740); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8746, 9587, 9586); //@t
				var_0_object->AddReply(8741, 9579, 9578); //@t
				return 0;
			}
			if(var_20_string == 9579) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8742); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8743, 9587, 9580); //@t
				var_0_object->AddReply(8744, 9587, 9582); //@t
				var_0_object->AddReply(8745, 9587, 9584); //@t
				return 0;
			}
			if(var_20_string == 9587) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8747); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8748, 9589, 9588); //@t
				var_0_object->AddReply(8762, 9589, 9604); //@t
				var_0_object->AddReply(8763, 9589, 9606); //@t
				return 0;
			}
			if(var_20_string == 9589) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8749); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8761, -1, 9603); //@t
				return 0;
			}
			if(var_20_string == 9958) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(9080); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9081, 11530, 9959); //@t
				return 0;
			}
			if(var_20_string == 11530) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(10457); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10458, 11532, 11531); //@t
				return 0;
			}
			if(var_20_string == 11532) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(10459); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10460, 11534, 11533); //@t
				return 0;
			}
			if(var_20_string == 11534) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(10461); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10462, 9960, 11535); //@t
				return 0;
			}
			if(var_20_string == 9960) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(9082); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9083, 9962, 9961); //@t
				return 0;
			}
			if(var_20_string == 9962) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(9084); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9085, -1, 9963); //@t
				return 0;
			}
			if(var_20_string == 10801) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(9807); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9808, 10803, 10802); //@t
				var_0_object->AddReply(9821, 10803, 10816); //@t
				return 0;
			}
			if(var_20_string == 10803) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(9809); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9810, 10805, 10804); //@t
				var_0_object->AddReply(9814, 10809, 10808); //@t
				var_0_object->AddReply(9820, 10809, 10814); //@t
				return 0;
			}
			if(var_20_string == 10809) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(9815); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9816, 10811, 10810); //@t
				return 0;
			}
			if(var_20_string == 10811) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(9817); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9818, -1, 10812); //@t
				var_0_object->AddReply(9819, -1, 10813); //@t
				return 0;
			}
			if(var_20_string == 10805) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(9811); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9812, -1, 10806); //@t
				var_0_object->AddReply(9813, -1, 10807); //@t
				return 0;
			}
			if(var_20_string == 9629) {
				object var_626_object; object var_627_object;
				var_626_object = var_1_object;
				var_627_object = var_0_object;
				func_4012();
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8782); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8783, 9631, 9630); //@t
				var_0_object->AddReply(10447, 9631, 11516); //@t
				return 0;
			}
			if(var_20_string == 9631) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8784); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8785, 9591, 9632); //@t
				return 0;
			}
			if(var_20_string == 9633) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8786); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8787, 9591, 9634); //@t
				return 0;
			}
			if(var_20_string == 9591) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8751); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8752, 9657, 9592); //@t
				var_0_object->AddReply(8757, 9598, 9597); //@t
				return 0;
			}
			if(var_20_string == 9598) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8758); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8759, 9593, 9599); //@t
				var_0_object->AddReply(8760, 9593, 9601); //@t
				return 0;
			}
			if(var_20_string == 9657) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8808); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8809, 9659, 9658); //@t
				var_0_object->AddReply(10449, 11521, 11520); //@t
				return 0;
			}
			if(var_20_string == 11521) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(10450); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10451, 11523, 11522); //@t
				return 0;
			}
			if(var_20_string == 11523) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(10452); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10453, 9659, 11524); //@t
				return 0;
			}
			if(var_20_string == 9659) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8810); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8811, 9661, 9660); //@t
				var_0_object->AddReply(10454, 11527, 11526); //@t
				return 0;
			}
			if(var_20_string == 11527) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(10455); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10456, 9593, 11528); //@t
				return 0;
			}
			if(var_20_string == 9661) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8812); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8813, 9593, 9662); //@t
				return 0;
			}
			if(var_20_string == 9593) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8753); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8790, 9638, 9637); //@t
				var_0_object->AddReply(8754, -1, 9594); //@t
				return 0;
			}
			if(var_20_string == 9638) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8791); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8798, 9646, 9645); //@t
				var_0_object->AddReply(8792, -1, 9639); //@t
				return 0;
			}
			if(var_20_string == 9646) {
				func_967(var_21_bool, "Neutral");
				var_0_object->SetMessage(8799); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8800, -1, 9647); //@t
				var_0_object->AddReply(8801, -1, 9649); //@t
				return 0;
			}
			var_3_string = true;
			bool var_750_bool;
			func_3733(var_750_bool);
			if(var_750_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3d8";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		if(1 != 0) {
			func_3633();
			if(var_21_bool == 11563) {
				object var_26_object; object var_27_object;
				var_26_object = var_1_object;
				var_27_object = var_0_object;
				func_4024();
				object var_30_object; object var_31_object;
				var_30_object = var_1_object;
				var_31_object = var_0_object;
				func_4030();
				object var_89_object = var_1_object;
				func_3889(var_0_object);
			}
			if(var_21_bool == 11566) {
				object var_117_object; object var_118_object;
				var_117_object = var_1_object;
				var_118_object = var_0_object;
				func_4024();
				object var_119_object; object var_120_object;
				var_119_object = var_1_object;
				var_120_object = var_0_object;
				func_4030();
				object var_121_object = var_1_object;
				func_3889(var_0_object);
			}
			if(var_21_bool == 11569) {
				object var_125_object; object var_126_object;
				var_125_object = var_1_object;
				var_126_object = var_0_object;
				func_4024();
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_object;
				func_4030();
				object var_129_object = var_1_object;
				func_3889(var_0_object);
			}
			if(var_21_bool == 11570) {
				object var_133_object; object var_134_object;
				var_133_object = var_1_object;
				var_134_object = var_0_object;
				func_4024();
				object var_135_object; object var_136_object;
				var_135_object = var_1_object;
				var_136_object = var_0_object;
				func_4030();
				object var_137_object = var_1_object;
				func_3889(var_0_object);
			}
			if(var_21_bool == 11571) {
				object var_141_object; object var_142_object;
				var_141_object = var_1_object;
				var_142_object = var_0_object;
				func_4024();
				object var_143_object; object var_144_object;
				var_143_object = var_1_object;
				var_144_object = var_0_object;
				func_4030();
				object var_145_object = var_1_object;
				func_3889(var_0_object);
			}
			if(var_21_bool == 11599) {
				object var_149_object; object var_150_object;
				var_149_object = var_1_object;
				var_150_object = var_0_object;
				func_4065();
				object var_153_object = var_1_object;
				func_4071(var_0_object);
			}
			if(var_21_bool == 11600) {
				object var_201_object; object var_202_object;
				var_201_object = var_1_object;
				var_202_object = var_0_object;
				func_4065();
				object var_203_object = var_1_object;
				func_4071(var_0_object);
			}
			if(var_21_bool == 11601) {
				object var_207_object; object var_208_object;
				var_207_object = var_1_object;
				var_208_object = var_0_object;
				func_4065();
				object var_209_object = var_1_object;
				func_4071(var_0_object);
			}
			if(var_20_string == 12720) {
				bool var_213_bool;
				func_4283(var_1_object);
				if(var_213_bool != 0) {
					object var_221_object; object var_222_object;
					var_221_object = var_1_object;
					var_222_object = var_0_object;
					func_4184();
					func_2499(var_21_bool, "Neutral");
					var_0_object->SetMessage(11527); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(11528, 12722, 12721); //@t
					bool var_244_bool;
					func_4190(var_244_bool, var_1_object);
					if(var_244_bool != 0)
						var_0_object->AddReply(11537, 12731, 12730); //@t
					var_0_object->AddReply(11539, 11552, 12732); //@t
					return 0;
				}
				bool var_254_bool;
				func_4190(var_254_bool, var_1_object);
				if(var_254_bool != 0) {
					func_2499(var_21_bool, "Neutral");
					var_0_object->SetMessage(10500); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(10501, 11584, 11583); //@t
					var_0_object->AddReply(10509, -1, 11591); //@t
					return 0;
				}
				bool var_264_bool = false;
				bool var_265_bool = false;
				bool var_266_bool;
				func_4307(var_1_object);
				if(var_266_bool != 0) {
					bool var_272_bool;
					func_4295(var_1_object);
					if(var_272_bool != 0)
						var_265_bool = true;
				}
				if(var_265_bool != 0) {
					bool var_278_bool;
					func_4319(var_278_bool, var_1_object);
					if(var_278_bool != 0)
						var_264_bool = true;
				}
				if(var_264_bool != 0) {
					func_2499(var_21_bool, "Neutral");
					var_0_object->SetMessage(10510); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(10511, 11594, 11593); //@t
					var_0_object->AddReply(10521, 11594, 11604); //@t
					return 0;
				}
				bool var_295_bool;
				func_4190(var_295_bool, var_1_object);
				if(var_295_bool != 0) {
					func_2499(var_21_bool, "Neutral");
					var_0_object->SetMessage(11547); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(11548, 12743, 12742); //@t
					return 0;
				}
			}
			if(var_20_string == 12743) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(11549); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11550, 12745, 12744); //@t
				return 0;
			}
			if(var_20_string == 12745) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(11551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11552, 12747, 12746); //@t
				return 0;
			}
			if(var_20_string == 12747) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(11553); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11554, 12749, 12748); //@t
				return 0;
			}
			if(var_20_string == 12749) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(11555); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11556, -1, 12750); //@t
				return 0;
			}
			if(var_20_string == 11594) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(10512); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10513, 11596, 11595); //@t
				var_0_object->AddReply(10520, 11598, 11602); //@t
				return 0;
			}
			if(var_20_string == 11596) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(10514); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10515, 11598, 11597); //@t
				var_0_object->AddReply(10519, -1, 11601); //@t
				return 0;
			}
			if(var_20_string == 11598) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(10516); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10517, -1, 11599); //@t
				var_0_object->AddReply(10518, -1, 11600); //@t
				return 0;
			}
			if(var_20_string == 11584) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(10502); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10503, -1, 11585); //@t
				var_0_object->AddReply(10504, -1, 11586); //@t
				var_0_object->AddReply(10505, 11588, 11587); //@t
				return 0;
			}
			if(var_20_string == 11588) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(10506); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10507, -1, 11589); //@t
				var_0_object->AddReply(10508, -1, 11590); //@t
				return 0;
			}
			if(var_20_string == 11552) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(10474); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10495, 11554, 11574); //@t
				var_0_object->AddReply(10496, 11577, 11576); //@t
				return 0;
			}
			if(var_20_string == 11577) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(10497); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10498, 11554, 11578); //@t
				var_0_object->AddReply(10499, 11554, 11580); //@t
				return 0;
			}
			if(var_20_string == 12731) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(11538); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11540, 12734, 12733); //@t
				return 0;
			}
			if(var_20_string == 12734) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(11541); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11542, 12736, 12735); //@t
				return 0;
			}
			if(var_20_string == 12736) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(11543); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11544, 12738, 12737); //@t
				return 0;
			}
			if(var_20_string == 12738) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(11545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11546, 11560, 12739); //@t
				return 0;
			}
			if(var_20_string == 12722) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(11529); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11530, 11554, 12723); //@t
				return 0;
			}
			if(var_20_string == 11554) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(10476); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10477, 11556, 11555); //@t
				var_0_object->AddReply(10494, 11556, 11572); //@t
				return 0;
			}
			if(var_20_string == 11556) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(10478); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10479, 11558, 11557); //@t
				var_0_object->AddReply(10489, 11568, 11567); //@t
				return 0;
			}
			if(var_20_string == 11568) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(10490); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10491, -1, 11569); //@t
				var_0_object->AddReply(10492, -1, 11570); //@t
				var_0_object->AddReply(10493, -1, 11571); //@t
				return 0;
			}
			if(var_20_string == 11558) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(10480); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10481, 11560, 11559); //@t
				var_0_object->AddReply(10486, 11565, 11564); //@t
				return 0;
			}
			if(var_20_string == 11565) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(10487); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10488, -1, 11566); //@t
				return 0;
			}
			if(var_20_string == 11560) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(10482); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10483, 11562, 11561); //@t
				return 0;
			}
			if(var_20_string == 11562) {
				func_2499(var_21_bool, "Neutral");
				var_0_object->SetMessage(10484); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10485, -1, 11563); //@t
				return 0;
			}
			var_3_string = true;
			bool var_502_bool;
			func_3733(var_502_bool);
			if(var_502_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9d4";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int)
	{
		if(1 != 0) {
			func_3633();
			if(var_21_int == 13243) {
				object var_26_object; object var_27_object;
				var_26_object = var_1_object;
				var_27_object = var_0_object;
				func_4161();
				object var_30_object = var_1_object;
				func_4167(var_0_object);
				object var_49_object; object var_50_object;
				var_49_object = var_1_object;
				var_50_object = var_0_object;
				func_3808();
			}
			if(var_20_int == 13238) {
				bool var_55_bool;
				func_4330(var_1_object);
				if(!var_55_bool) { //@nz
					func_3410(var_21_int, "Neutral");
					var_0_object->SetMessage(12020); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(12021, 13240, 13239); //@t
					return 0;
				}
				func_3410(var_21_int, "Neutral");
				var_0_object->SetMessage(13723); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13724, -1, 14990); //@t
				return 0;
			}
			if(var_20_int == 13240) {
				func_3410(var_21_int, "Neutral");
				var_0_object->SetMessage(12022); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12023, 13242, 13241); //@t
				return 0;
			}
			if(var_20_int == 13242) {
				func_3410(var_21_int, "Neutral");
				var_0_object->SetMessage(12024); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12025, -1, 13243); //@t
				return 0;
			}
			var_3_string = true;
			bool var_102_bool;
			func_3733(var_102_bool);
			if(var_102_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd63";
	
	}

}


void func_0(void)
{
	@Hold();
}


void func_4358(bool var_61_bool, object var_62_object, int var_63_int)
{
	object var_70_object;
	func_4345(var_70_object);
	object var_67_object;
	var_70_object = var_67_object;
	object var_68_object;
	var_67_object->Find(var_63_int, var_68_object);
	if(!var_68_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_63_int);
		var_61_bool = false;
	}
	var_68_object->AddChild(var_62_object);
	@SetVariable("player_diary", 1);
	int var_69_int;
	var_62_object->GetCategory(var_69_int);
	@SetDiarySection(var_69_int);
	var_61_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_3336(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_430_object, object var_431_object)
{
	var_0_object = var_431_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_437_bool;
		func_4330(var_430_object);
		if(!var_437_bool) { //@nz
			func_3410(var_431_object, "Neutral");
			var_0_object->SetMessage(12020); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(12021, 13240, 13239); //@t
		} else {
					func_3410(var_431_object, "Neutral");
					var_0_object->SetMessage(13723); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(13724, -1, 14990); //@t
		}
	}
	for(;;) {
		bool var_453_bool;
		func_3733(var_453_bool);
		if(var_453_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_3615(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_3409;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3409:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xd0c";


// @pe
void func_3849(void)
{
	@SetVariable("ood3Rubin1", 1);
}


// @pe
void func_3855(void)
{
	@SetVariable("ood3Rubin2", 1);
}


// @pe
void func_3861(void)
{
	@SetVariable("ood3Rubin3", 1);
}


// @pe
void func_3611(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_3867(void)
{
	@SetVariable("ood3Rubin4", 1);
}


// @pe
void func_2333(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_322_object, object var_323_object)
{
	var_0_object = var_323_object;
	var_1_object = var_322_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_329_bool;
		func_4283(var_1_object);
		if(var_329_bool != 0) {
			object var_335_object; object var_336_object;
			var_335_object = var_1_object;
			var_336_object = var_0_object;
			func_4184();
			func_2499(var_323_object, "Neutral");
			var_0_object->SetMessage(11527); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(11528, 12722, 12721); //@t
			bool var_348_bool;
			func_4190(var_348_bool, var_1_object);
			if(var_348_bool != 0)
				var_0_object->AddReply(11537, 12731, 12730); //@t
			var_0_object->AddReply(11539, 11552, 12732); //@t
		} else {
					bool var_364_bool;
					func_4190(var_364_bool, var_1_object);
					if(var_364_bool == 0) goto Label_2404;
					func_2499(var_323_object, "Neutral");
					var_0_object->SetMessage(10500); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(10501, 11584, 11583); //@t
					var_0_object->AddReply(10509, -1, 11591); //@t
		}
	}
Label_2469:
	for(;;) {
		bool var_356_bool;
		func_3733(var_356_bool);
		if(var_356_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_3615(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_2498;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2498:
			return 0;

		}

	}
	
Label_2404:
	bool var_374_bool = false;
	bool var_375_bool = false;
	bool var_376_bool;
	func_4307(var_1_object);
	if(var_376_bool != 0) {
		bool var_382_bool;
		func_4295(var_1_object);
		if(var_382_bool != 0)
			var_375_bool = true;
	}
	if(var_375_bool != 0) {
		bool var_388_bool;
		func_4319(var_388_bool, var_1_object);
		if(var_388_bool != 0)
			var_374_bool = true;
	}
	if(var_374_bool != 0) {
		func_2499(var_323_object, "Neutral");
		var_0_object->SetMessage(10510); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(10511, 11594, 11593); //@t
		var_0_object->AddReply(10521, 11594, 11604); //@t
		goto Label_2469;
	}
	bool var_401_bool;
	func_4190(var_401_bool, var_1_object);
	if(var_401_bool != 0) {
		func_2499(var_323_object, "Neutral");
		var_0_object->SetMessage(11547); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(11548, 12743, 12742); //@t
		goto Label_2469;
	}
}
EMIT "GOTO 0x921";


void func_3615(string var_25_string)
{
	@Trace("playing " + var_25_string);
	float var_28_float;
	float var_29_float;
	@lshGetAnimTimes(var_25_string, var_28_float, var_29_float);
	@lshPlayAnimation(var_28_float, var_29_float);
	@Trace("start: " + var_28_float);
	@Trace("end: " + var_29_float);
}


// @pe
void func_3873(object var_90_object)
{
	object var_94_object;
	func_4404(var_94_object);
	object var_91_object;
	var_94_object = var_91_object;
	func_4421(var_91_object, "pt_map_alexandr", (float)2);
	object var_114_object;
	func_4404(var_114_object);
	var_90_object->ShowMap(var_114_object);
}


void func_4387(bool var_78_bool, int var_79_int)
{
	object var_84_object;
	func_4345(var_84_object);
	object var_82_object;
	var_84_object = var_82_object;
	object var_83_object;
	var_82_object->Find(var_79_int, var_83_object);
	if(!var_83_object) //@nz
		var_78_bool = false;
	var_83_object->Remove();
	var_78_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_3633(void)
{
	bool var_23_bool;
	func_3733(var_23_bool);
	if(var_23_bool != 0)
		@lshStopSpeech();
}


void func_49(object var_0_object, int var_38_int, object var_39_object)
{
	var_0_object = var_39_object;
	bool var_49_bool; object var_50_object;
	var_39_object = var_50_object;
	func_3555(var_49_bool, var_50_object);
	if(!var_49_bool) { //@nz
		var_38_int = -2;
		return 8;
	}
	object var_45_object;
	@CreateDialog(var_45_object);
	int var_90_int;
	func_3729(var_90_int);
	var_45_object->SetNPCName(var_90_int);
	string var_91_string;
	func_3731(var_91_string);
	var_45_object->SetPhoto(var_91_string);
	int var_92_int;
	func_4454(var_92_int);
	var_45_object->SetPlayerName(var_92_int);
	bool var_46_bool;
	@IsOverrideActive(var_46_bool);
	if(var_46_bool != 0) {
		var_38_int = -2;
		return 8;
	}
	@DoDialog(var_45_object);
	object var_101_object; object var_102_object;
	var_39_object = var_101_object;
	var_45_object = var_102_object;
	TaskCall(3);
	func_112(var_103_object, var_104_object, var_105_string, var_106_bool, var_101_object, var_102_object);
	TaskReturn();
	bool var_48_bool;
	var_45_object->IsDialogEnd(var_48_bool);
	
	for(;;) {
		var_145_bool = !var_48_bool; //@nz
		if(var_145_bool == 0) goto Label_101;
		@sync();
		var_45_object->IsDialogEnd(var_48_bool);
	}
	
Label_101:
	object var_146_object;
	var_39_object = var_146_object;
	func_3611();
	@StopDialog(var_45_object);
	var_45_object->GetReturnValue(-1);
	int var_47_int = var_38_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3889(object var_90_object)
{
	object var_94_object;
	func_4404(var_94_object);
	object var_91_object;
	var_94_object = var_91_object;
	func_4421(var_91_object, "pt_map_bigvlad", (float)2);
	object var_114_object;
	func_4404(var_114_object);
	var_90_object->ShowMap(var_114_object);
}


void func_4404(object var_36_object)
{
	object var_39_object; object var_40_object;
	@GetMainOutdoorScene(var_39_object);
	if(var_39_object == null) {
		@Trace("Can't find main outdoor scene");
		var_40_object = null;
		var_40_object = var_36_object;
	}
	var_39_object->GetMap(var_40_object);
	var_40_object = var_36_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_3640(cvector var_74_cvector, cvector var_75_cvector)
{
	float var_78_float = sqrt(var_75_cvector | var_75_cvector);
	if(var_78_float < 0.000001)
		var_74_cvector = [0.0, 0.0, 0.0];
	var_74_cvector = var_75_cvector / var_78_float;
}


// @pe
void func_4161(void)
{
	@SetVariable("d6RubinGoesToGeorg", 1);
}


void func_3650(int var_57_int, string var_58_string)
{
	int var_60_int;
	@GetVariable(var_58_string, var_60_int);
	var_60_int = var_57_int;
}


void func_3905(void)
{
	object var_143_object;
	func_4404(var_143_object);
	object var_141_object;
	var_143_object = var_141_object;
	object var_142_object;
	var_141_object->FindMark(var_142_object, "d3q01AlexandrGotoOspina");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d3q01AlexandrGotoOspinaSelf");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d3q01BigVladAgreed");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d3q01BigVladAgreedSelf");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d3q01BigVladGotoGeorg");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d3q01BigVladGotoGeorgSelf");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d3q01GeorgAgreed");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d3q01GeorgAgreedSelf");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d3q01OspinaButchersWillHelpSelf");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d3q01OspinaGotoBigVlad");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d3q01OspinaGotoBigVladSelf");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d3q01RubinGotoAlexandr");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d3q01RubinGotoAlexandrSelf");
	if(var_142_object != 0)
		var_142_object->Remove();
	func_4519();
	bool var_179_bool;
	func_3688(var_179_bool, "quest_d3_01", "completed");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_4421(object var_91_object, string var_92_string, float var_93_float)
{
	object var_101_object;
	@GetMainOutdoorScene(var_101_object);
	if(var_101_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_99_cvector;
	cvector var_100_cvector;
	bool var_102_bool;
	var_101_object->GetLocator(var_92_string, var_102_bool, var_99_cvector, var_100_cvector);
	if(!var_102_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_92_string) + " doesnt exist");
	var_101_object->GetMap(var_91_object);
	if(var_91_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_112_float = GetByIndex(var_99_cvector, 0);
	var_113_float = GetByIndex(var_99_cvector, 2);
	var_91_object->SetMapParams(var_112_float, var_113_float, var_93_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_4167(object var_30_object)
{
	@Trace("whitevaccine is given");
	object var_33_object;
	var_30_object = var_33_object;
	func_3668(var_33_object, "white_vaccine", 1);
}


void func_3655(object var_38_object, object var_39_object, int var_40_int)
{
	int var_44_int;
	var_39_object->GetItemID(var_44_int);
	int var_45_int;
	@GetInvItemProperty(var_45_int, var_44_int, "Category");
	bool var_46_bool;
	var_38_object->AddItem(var_46_bool, var_39_object, var_45_int, var_40_int);
	if(!var_46_bool) //@nz
		var_38_object->DropItems(var_39_object, var_40_int);
}


// @pe
void func_4178(void)
{
	@SetVariable("d3RubinVisit", 1);
}


// @pe
void func_3410(object var_2_object, string var_64_string)
{
	bool var_65_bool;
	func_3733(var_65_bool);
	if(!var_65_bool) //@nz
		return 0;
	if(var_64_string == var_2_object)
		return 0;
	string var_68_string;
	func_3615(var_68_string);
	var_2_object = var_68_string;
}


void func_3668(object var_33_object, string var_34_string, int var_35_int)
{
	object var_37_object;
	@CreateInvItem(var_37_object);
	var_37_object->SetItemName(var_34_string);
	object var_38_object; object var_39_object; int var_40_int;
	var_33_object = var_38_object;
	var_37_object = var_39_object;
	var_35_int = var_40_int;
	func_3655(var_38_object, var_39_object, var_40_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4184(void)
{
	@SetVariable("d5RubinVisit", 1);
}


// @pe
void func_4190(bool var_244_bool, object var_245_object)
{
	object var_247_object;
	var_245_object = var_247_object;
	func_4342(var_247_object);
	bool var_246_bool;
	if(var_246_bool != 0) {
		var_244_bool = true;
		return 0;
	}
	var_244_bool = false;
}


void func_3681(bool var_280_bool, object var_281_object, string var_282_string)
{
	int var_285_int;
	@GetInvItemByName(var_285_int, var_282_string);
	bool var_286_bool;
	var_281_object->HasItem(var_285_int, var_286_bool);
	var_286_bool = var_280_bool;
}


void func_4454(int var_92_int)
{
	int var_94_int;
	@GetVariable("player", var_94_int);
	if(var_94_int == 0) {
		var_92_int = 200001;
		return 2;
	EMIT "GOTO 0x1175";
	}
	if(var_94_int == 1) {
		var_92_int = 200002;
		return 2;
	}
	var_92_int = 200003;
}


// @pe
void func_4200(bool var_228_bool)
{
	int var_230_int;
	func_3650(var_230_int, "d3q01");
	if(var_230_int == 0) {
		var_228_bool = true;
		return 0;
	}
	var_228_bool = false;
}


void func_3688(bool var_193_bool, string var_194_string, string var_195_string)
{
	object var_197_object;
	@FindActor(var_197_object, var_194_string);
	if(var_197_object == null)
		var_193_bool = false;
	@Trigger(var_197_object, var_195_string);
	var_193_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_101_object, object var_102_object)
{
	var_0_object = var_102_object;
	var_3_object = false;
	if(1 != 0) {
		object var_108_object; object var_109_object;
		var_108_object = var_101_object;
		var_109_object = var_0_object;
		func_4018();
		func_205(var_102_object, "Neutral");
		var_0_object->SetMessage(9170); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(9171, 10056, 10055); //@t
		var_0_object->AddReply(9175, 10062, 10061); //@t
		var_0_object->AddReply(9187, 10077, 10076); //@t
		goto Label_175;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0xcd";
	EMIT "Pop(1)";
	EMIT "Push((int) 5800)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 5801)";
	EMIT "Push((int) 6391)";
	EMIT "Push((int) 6390)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 5819)";
	EMIT "Push((int) 6391)";
	EMIT "Push((int) 6408)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 5820)";
	EMIT "Push((int) 6391)";
	EMIT "Push((int) 6410)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0xaf";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_175:
	bool var_137_bool;
	func_3733(var_137_bool);
	if(var_137_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3615(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_204;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_204:
		return 0;

	}
	
}


// @pe
void func_4212(bool var_236_bool)
{
	int var_238_int;
	func_3650(var_238_int, "ood3Rubin1");
	if(var_238_int == 0) {
		var_236_bool = true;
		return 0;
	}
	var_236_bool = false;
}


void func_3700(float var_47_float)
{
	float var_49_float;
	@GetGameTime(var_49_float);
	var_49_float = var_47_float;
}


void func_4471(void)
{
	@Trace("Adding diary entry");
	object var_54_object;
	@CreateDiaryEntry(var_54_object, 49, 1, 12131);
	bool var_59_bool; object var_60_object;
	var_54_object = var_60_object;
	func_4358(var_59_bool, var_60_object, 2);
}
EMIT "Stack[-1] = 0";


void func_3705(int var_26_int)
{
	float var_28_float;
	@GetGameTime(var_28_float);
	var_26_int = 1 + (var_28_float / 24);
}


// @pe
void func_4224(bool var_319_bool)
{
	int var_321_int;
	func_3650(var_321_int, "ood3Rubin2");
	if(var_321_int == 0) {
		var_319_bool = true;
		return 0;
	}
	var_319_bool = false;
}


// @pe
void func_3714(bool var_24_bool, int var_25_int)
{
	int var_26_int;
	func_3705(var_26_int);
	var_24_bool = var_26_int == var_25_int;
}


void func_4487(void)
{
	@Trace("Adding diary entry");
	object var_56_object;
	@CreateDiaryEntry(var_56_object, 25, 1, 3365);
	bool var_61_bool; object var_62_object;
	var_56_object = var_62_object;
	func_4358(var_61_bool, var_62_object, -1);
}
EMIT "Stack[-1] = 0";


void func_3720(bool var_468_bool)
{
	func_3615("No");
	bool var_470_bool;
	@lshWaitForAnimEnd(var_470_bool);
	var_470_bool = var_468_bool;
}


// @pe
void func_4236(bool var_328_bool)
{
	int var_330_int;
	func_3650(var_330_int, "ood3Rubin3");
	if(var_330_int == 0) {
		var_328_bool = true;
		return 0;
	}
	var_328_bool = false;
}


void func_3729(int var_90_int)
{
	var_90_int = 2876;
}


void func_3731(string var_91_string)
{
	var_91_string = "ui/NPC_Rubin.png";
}


void func_3733(bool var_23_bool)
{
	var_23_bool = true;
}


void func_3735(void)
{
	@SetVariable("d1q01", 1000);
	object var_34_object;
	func_4404(var_34_object);
	object var_30_object;
	var_34_object = var_30_object;
	object var_31_object;
	var_30_object->FindMark(var_31_object, "d1q01EvaAboutMark");
	if(var_31_object != 0)
		var_31_object->Remove();
	var_30_object->FindMark(var_31_object, "d1q01EvaGotoSimon");
	if(var_31_object != 0)
		var_31_object->Remove();
	var_30_object->FindMark(var_31_object, "d1q01GrifAboutRubin");
	if(var_31_object != 0)
		var_31_object->Remove();
	var_30_object->FindMark(var_31_object, "d1q01MarkAboutJulia");
	if(var_31_object != 0)
		var_31_object->Remove();
	var_30_object->FindMark(var_31_object, "d1q01MarkAboutLara");
	if(var_31_object != 0)
		var_31_object->Remove();
	var_30_object->FindMark(var_31_object, "d1q01NotkinAboutRubin");
	if(var_31_object != 0)
		var_31_object->Remove();
	func_4471();
	bool var_78_bool;
	func_4387(var_78_bool, 31);
	bool var_86_bool;
	func_4387(var_86_bool, 32);
	bool var_88_bool;
	func_4387(var_88_bool, 33);
	bool var_90_bool;
	func_4387(var_90_bool, 34);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_4248(bool var_339_bool)
{
	int var_341_int;
	func_3650(var_341_int, "ood3Rubin4");
	if(var_341_int == 0) {
		var_339_bool = true;
		return 0;
	}
	var_339_bool = false;
}


void func_4503(void)
{
	@Trace("Adding diary entry");
	object var_81_object;
	@CreateDiaryEntry(var_81_object, 68, 1, 12150);
	bool var_86_bool; object var_87_object;
	var_81_object = var_87_object;
	func_4358(var_86_bool, var_87_object, 25);
}
EMIT "Stack[-1] = 0";


void func_672(object var_0_object, int var_149_int, object var_150_object)
{
	var_0_object = var_150_object;
	bool var_160_bool; object var_161_object;
	var_150_object = var_161_object;
	func_3555(var_160_bool, var_161_object);
	if(!var_160_bool) { //@nz
		var_149_int = -2;
		return 8;
	}
	object var_156_object;
	@CreateDialog(var_156_object);
	int var_163_int;
	func_3729(var_163_int);
	var_156_object->SetNPCName(var_163_int);
	string var_164_string;
	func_3731(var_164_string);
	var_156_object->SetPhoto(var_164_string);
	int var_165_int;
	func_4454(var_165_int);
	var_156_object->SetPlayerName(var_165_int);
	bool var_157_bool;
	@IsOverrideActive(var_157_bool);
	if(var_157_bool != 0) {
		var_149_int = -2;
		return 8;
	}
	@DoDialog(var_156_object);
	object var_167_object; object var_168_object;
	var_150_object = var_167_object;
	var_156_object = var_168_object;
	TaskCall(5);
	func_735(var_169_object, var_170_object, var_171_string, var_172_bool, var_167_object, var_168_object);
	TaskReturn();
	bool var_159_bool;
	var_156_object->IsDialogEnd(var_159_bool);
	
	for(;;) {
		var_300_bool = !var_159_bool; //@nz
		if(var_300_bool == 0) goto Label_724;
		@sync();
		var_156_object->IsDialogEnd(var_159_bool);
	}
	
Label_724:
	object var_301_object;
	var_150_object = var_301_object;
	func_3611();
	@StopDialog(var_156_object);
	var_156_object->GetReturnValue(-1);
	int var_158_int = var_149_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4260(bool var_290_bool)
{
	int var_292_int;
	func_3650(var_292_int, "d3q01");
	if(var_292_int == 1000)
		var_290_bool = true;
	var_290_bool = false;
}


void func_4519(void)
{
	@Trace("Adding diary entry");
	object var_171_object;
	@CreateDiaryEntry(var_171_object, 74, 1, 12156);
	bool var_176_bool; object var_177_object;
	var_171_object = var_177_object;
	func_4358(var_176_bool, var_177_object, 25);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4012(void)
{
	@SetVariable("d3RubinToldWhereIsSimon", 1);
}


// @pe
void func_4272(bool var_281_bool, object var_282_object)
{
	object var_284_object;
	var_282_object = var_284_object;
	bool var_283_bool;
	func_3681(var_283_bool, var_284_object, "d3q01_blood");
	if(var_283_bool != 0) {
		var_281_bool = true;
		return 0;
	}
	var_281_bool = false;
}


// @pe
void func_4018(void)
{
	@SetVariable("KnowRubin", 1);
}


void func_4535(void)
{
	@Trace("Adding diary entry");
	object var_56_object;
	@CreateDiaryEntry(var_56_object, 139, 1, 15339);
	bool var_61_bool; object var_62_object;
	var_56_object = var_62_object;
	func_4358(var_61_bool, var_62_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4024(void)
{
	@SetVariable("ood5Rubin1", 1);
}


// @pe
void func_4283(bool var_213_bool)
{
	int var_215_int;
	func_3650(var_215_int, "ood5Rubin1");
	if(var_215_int == 0) {
		var_213_bool = true;
		return 0;
	}
	var_213_bool = false;
}


void func_4030(void)
{
	@SetVariable("d5q01", 1);
	object var_36_object;
	func_4404(var_36_object);
	object var_33_object;
	var_36_object = var_33_object;
	float var_47_float;
	func_3700(var_47_float);
	var_33_object->AddMark("d5q01RubinGotoBigVlad", "pt_map_bigvlad", 1, 11956, var_47_float);
	float var_54_float;
	func_3700(var_54_float);
	var_33_object->AddMark("d5q01RubinGotoBigVladSelf", "pt_map_rubin", 1, 15348, var_54_float);
	func_4535();
	func_4551();
}
EMIT "Stack[-1] = 0";


// @pe
void func_2499(object var_2_object, string var_225_string)
{
	bool var_226_bool;
	func_3733(var_226_bool);
	if(!var_226_bool) //@nz
		return 0;
	if(var_225_string == var_2_object)
		return 0;
	string var_229_string;
	func_3615(var_229_string);
	var_2_object = var_229_string;
}


// @pe
void func_4295(bool var_272_bool)
{
	int var_274_int;
	func_3650(var_274_int, "d5q01");
	if(var_274_int == 7)
		var_272_bool = true;
	var_272_bool = false;
}


// @pe
void func_967(object var_2_object, string var_246_string)
{
	bool var_247_bool;
	func_3733(var_247_bool);
	if(!var_247_bool) //@nz
		return 0;
	if(var_246_string == var_2_object)
		return 0;
	string var_250_string;
	func_3615(var_250_string);
	var_2_object = var_250_string;
}


void func_3273(object var_0_object, int var_412_int, object var_413_object)
{
	var_0_object = var_413_object;
	bool var_423_bool; object var_424_object;
	var_413_object = var_424_object;
	func_3555(var_423_bool, var_424_object);
	if(!var_423_bool) { //@nz
		var_412_int = -2;
		return 8;
	}
	object var_419_object;
	@CreateDialog(var_419_object);
	int var_426_int;
	func_3729(var_426_int);
	var_419_object->SetNPCName(var_426_int);
	string var_427_string;
	func_3731(var_427_string);
	var_419_object->SetPhoto(var_427_string);
	int var_428_int;
	func_4454(var_428_int);
	var_419_object->SetPlayerName(var_428_int);
	bool var_420_bool;
	@IsOverrideActive(var_420_bool);
	if(var_420_bool != 0) {
		var_412_int = -2;
		return 8;
	}
	@DoDialog(var_419_object);
	object var_430_object; object var_431_object;
	var_413_object = var_430_object;
	var_419_object = var_431_object;
	TaskCall(9);
	func_3336(var_432_object, var_433_object, var_434_string, var_435_bool, var_430_object, var_431_object);
	TaskReturn();
	bool var_422_bool;
	var_419_object->IsDialogEnd(var_422_bool);
	
	for(;;) {
		var_466_bool = !var_422_bool; //@nz
		if(var_466_bool == 0) goto Label_3325;
		@sync();
		var_419_object->IsDialogEnd(var_422_bool);
	}
	
Label_3325:
	object var_467_object;
	var_413_object = var_467_object;
	func_3611();
	@StopDialog(var_419_object);
	var_419_object->GetReturnValue(-1);
	int var_421_int = var_412_int;
}
EMIT "Stack[-4] = 0";


void func_4551(void)
{
	@Trace("Adding diary entry");
	object var_81_object;
	@CreateDiaryEntry(var_81_object, 140, 1, 15340);
	bool var_86_bool; object var_87_object;
	var_81_object = var_87_object;
	func_4358(var_86_bool, var_87_object, 139);
}
EMIT "Stack[-1] = 0";


// @pe
void func_205(object var_2_object, string var_102_string)
{
	bool var_103_bool;
	func_3733(var_103_bool);
	if(!var_103_bool) //@nz
		return 0;
	if(var_102_string == var_2_object)
		return 0;
	string var_106_string;
	func_3615(var_106_string);
	var_2_object = var_106_string;
}


void func_3538(bool var_21_bool, object var_22_object)
{
	cvector var_27_cvector;
	var_22_object->GetPosition(var_27_cvector);
	cvector var_28_cvector;
	@GetPosition(var_28_cvector);
	cvector var_29_cvector = var_27_cvector - var_28_cvector;
	var_31_float = GetByIndex(var_29_cvector, 0);
	var_32_float = GetByIndex(var_29_cvector, 2);
	bool var_30_bool;
	@Rotate(var_31_float, var_32_float, var_30_bool);
	var_30_bool = var_21_bool;
}


// @pe
void func_4307(bool var_266_bool)
{
	int var_268_int;
	func_3650(var_268_int, "ood5Rubin2");
	if(var_268_int == 0) {
		var_266_bool = true;
		return 0;
	}
	var_266_bool = false;
}


void func_4567(void)
{
	@Trace("Adding diary entry");
	object var_183_object;
	@CreateDiaryEntry(var_183_object, 147, 1, 15347);
	bool var_188_bool; object var_189_object;
	var_183_object = var_189_object;
	func_4358(var_188_bool, var_189_object, 139);
}
EMIT "Stack[-1] = 0";


void func_2270(object var_0_object, int var_304_int, object var_305_object)
{
	var_0_object = var_305_object;
	bool var_315_bool; object var_316_object;
	var_305_object = var_316_object;
	func_3555(var_315_bool, var_316_object);
	if(!var_315_bool) { //@nz
		var_304_int = -2;
		return 8;
	}
	object var_311_object;
	@CreateDialog(var_311_object);
	int var_318_int;
	func_3729(var_318_int);
	var_311_object->SetNPCName(var_318_int);
	string var_319_string;
	func_3731(var_319_string);
	var_311_object->SetPhoto(var_319_string);
	int var_320_int;
	func_4454(var_320_int);
	var_311_object->SetPlayerName(var_320_int);
	bool var_312_bool;
	@IsOverrideActive(var_312_bool);
	if(var_312_bool != 0) {
		var_304_int = -2;
		return 8;
	}
	@DoDialog(var_311_object);
	object var_322_object; object var_323_object;
	var_305_object = var_322_object;
	var_311_object = var_323_object;
	TaskCall(7);
	func_2333(var_324_object, var_325_object, var_326_string, var_327_bool, var_322_object, var_323_object);
	TaskReturn();
	bool var_314_bool;
	var_311_object->IsDialogEnd(var_314_bool);
	
	for(;;) {
		var_408_bool = !var_314_bool; //@nz
		if(var_408_bool == 0) goto Label_2322;
		@sync();
		var_311_object->IsDialogEnd(var_314_bool);
	}
	
Label_2322:
	object var_409_object;
	var_305_object = var_409_object;
	func_3611();
	@StopDialog(var_311_object);
	var_311_object->GetReturnValue(-1);
	int var_313_int = var_304_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_735(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_167_object, object var_168_object)
{
	var_0_object = var_168_object;
	var_1_object = var_167_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_174_bool = false;
		bool var_175_bool;
		func_4200(var_1_object);
		if(var_175_bool != 0) {
			bool var_181_bool;
			func_4212(var_1_object);
			if(var_181_bool != 0)
				var_174_bool = true;
		}
		if(var_174_bool != 0) {
			object var_187_object; object var_188_object;
			var_187_object = var_1_object;
			var_188_object = var_0_object;
			func_4178();
			func_967(var_168_object, "Neutral");
			var_0_object->SetMessage(8737); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(8777, 9633, 9624); //@t
			var_0_object->AddReply(8781, 9629, 9628); //@t
		} else {
					bool var_211_bool;
					func_4190(var_211_bool, var_1_object);
					if(var_211_bool == 0) goto Label_805;
					func_967(var_168_object, "Neutral");
					var_0_object->SetMessage(9805); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(9806, 10801, 10800); //@t
					var_0_object->AddReply(9822, 10801, 10818); //@t
		}
	}
Label_937:
	for(;;) {
		bool var_203_bool;
		func_3733(var_203_bool);
		if(var_203_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_3615(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_966;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_966:
			return 0;

		}

	}
	
Label_805:
	bool var_223_bool = false;
	bool var_224_bool;
	func_4272(var_224_bool, var_1_object);
	if(var_224_bool != 0) {
		bool var_233_bool;
		func_4260(var_1_object);
		if(!var_233_bool) //@nz
			var_223_bool = true;
	}
	if(var_223_bool != 0) {
		func_967(var_168_object, "Neutral");
		var_0_object->SetMessage(9078); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(9079, 9958, 9957); //@t
		goto Label_937;
	}
	bool var_245_bool;
	func_4190(var_245_bool, var_1_object);
	if(var_245_bool != 0) {
		func_967(var_168_object, "Neutral");
		var_0_object->SetMessage(8769); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(8770, 9621, 9617); //@t
		var_0_object->AddReply(8771, 9619, 9618); //@t
		goto Label_937;
	}
	func_967(var_168_object, "Neutral");
	var_0_object->SetMessage(8778); //@t
	var_0_object->ClearReplies(); //@t
	bool var_257_bool;
	func_4200(var_1_object);
	if(var_257_bool != 0)
		var_0_object->AddReply(11141, 12331, 12330); //@t
	bool var_262_bool;
	func_4224(var_1_object);
	if(var_262_bool != 0)
		var_0_object->AddReply(8779, 9681, 9626); //@t
	bool var_271_bool;
	func_4236(var_1_object);
	if(var_271_bool != 0)
		var_0_object->AddReply(8780, 9669, 9627); //@t
	bool var_280_bool = false;
	bool var_281_bool = false;
	bool var_282_bool;
	func_4248(var_1_object);
	if(var_282_bool != 0) {
		bool var_288_bool;
		func_4200(var_1_object);
		if(!var_288_bool) //@nz
			var_281_bool = true;
	}
	if(var_281_bool != 0) {
		bool var_291_bool;
		func_4260(var_1_object);
		if(!var_291_bool) //@nz
			var_280_bool = true;
	}
	if(var_280_bool != 0)
		var_0_object->AddReply(8802, 9651, 9650); //@t
	var_0_object->AddReply(11140, -1, 12329); //@t
	goto Label_937;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x2e3";


// @pe
void func_4319(bool var_278_bool, object var_279_object)
{
	object var_281_object;
	var_279_object = var_281_object;
	bool var_280_bool;
	func_3681(var_280_bool, var_281_object, "d5q01_heart");
	if(var_280_bool != 0) {
		var_278_bool = true;
		return 0;
	}
	var_278_bool = false;
}


// @pe
void func_3808(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_3550(bool var_21_bool)
{
	bool var_23_bool;
	@IsLoaded(var_23_bool);
	var_23_bool = var_21_bool;
}


// @pe
void func_4065(void)
{
	@SetVariable("ood5Rubin2", 1);
}


void func_3555(bool var_49_bool, object var_50_object)
{
	cvector var_60_cvector;
	var_50_object->GetPosition(var_60_cvector);
	float var_59_float;
	var_50_object->GetEyesHeight(var_59_float);
	var_67_float = GetByIndex(var_60_cvector, 1);
	SetByIndex(var_60_cvector, 1) = (var_67_float + var_59_float);
	cvector var_61_cvector;
	@GetPosition(var_61_cvector);
	@GetEyesHeight(var_59_float);
	var_68_float = GetByIndex(var_61_cvector, 1);
	SetByIndex(var_61_cvector, 1) = (var_68_float + var_59_float);
	cvector var_62_cvector = var_60_cvector - var_61_cvector;
	var_69_float = GetByIndex(var_62_cvector, 1);
	SetByIndex(var_62_cvector, 1) = (float)0;
	var_71_float = sqrt(var_62_cvector | var_62_cvector);
	var_62_cvector /= var_71_float;
	cvector var_63_cvector = -var_62_cvector;
	cvector var_74_cvector;
	func_3640(var_74_cvector, (var_63_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_64_cvector = ((var_62_cvector * 70) + (var_74_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_66_bool;
	@IsOverrideActive(var_66_bool);
	if(var_66_bool != 0)
		var_49_bool = false;
	@StopWorld();
	@CameraTransit((var_61_cvector + var_64_cvector), var_63_cvector);
	var_87_float = GetByIndex(var_64_cvector, 0);
	var_88_float = GetByIndex(var_64_cvector, 2);
	@Rotate(var_87_float, var_88_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_49_bool = true;
}


void func_3814(void)
{
	@SetVariable("d3q01", 1);
	object var_36_object;
	func_4404(var_36_object);
	object var_33_object;
	var_36_object = var_33_object;
	float var_47_float;
	func_3700(var_47_float);
	var_33_object->AddMark("d3q01RubinGotoAlexandr", "pt_map_alexandr", 1, 11151, var_47_float);
	float var_54_float;
	func_3700(var_54_float);
	var_33_object->AddMark("d3q01RubinGotoAlexandrSelf", "pt_map_rubin", 1, 15294, var_54_float);
	func_4487();
	func_4503();
}
EMIT "Stack[-1] = 0";


void func_4583(void)
{
	var_20_bool = GlobalVars[1];
	GlobalVars[1] = false;
}


void func_4071(object var_153_object)
{
	object var_161_object;
	func_4404(var_161_object);
	object var_158_object;
	var_161_object = var_158_object;
	object var_159_object;
	var_158_object->FindMark(var_159_object, "d5q01AlexandrGotoKaterina");
	if(var_159_object != 0)
		var_159_object->Remove();
	var_158_object->FindMark(var_159_object, "d5q01BigVladGotoAlexandr");
	if(var_159_object != 0)
		var_159_object->Remove();
	var_158_object->FindMark(var_159_object, "d5q01BurahMeeting1");
	if(var_159_object != 0)
		var_159_object->Remove();
	var_158_object->FindMark(var_159_object, "d5q01BurahMeeting2");
	if(var_159_object != 0)
		var_159_object->Remove();
	var_158_object->FindMark(var_159_object, "d5q01GrifWantsMoney");
	if(var_159_object != 0)
		var_159_object->Remove();
	var_158_object->FindMark(var_159_object, "d5q01GrifWillHelp");
	if(var_159_object != 0)
		var_159_object->Remove();
	var_158_object->FindMark(var_159_object, "d5q01KaterinaGotoLara");
	if(var_159_object != 0)
		var_159_object->Remove();
	var_158_object->FindMark(var_159_object, "d5q01PatrolGotoGrif");
	if(var_159_object != 0)
		var_159_object->Remove();
	var_158_object->FindMark(var_159_object, "d5q01RubinGotoBigVlad");
	if(var_159_object != 0)
		var_159_object->Remove();
	var_158_object->FindMark(var_159_object, "d5q01RubinGotoBigVladSelf");
	if(var_159_object != 0)
		var_159_object->Remove();
	func_4567();
	int var_160_int;
	var_153_object->RemoveItemByType(var_160_int, "d5q01_heart", 1);
	bool var_193_bool;
	func_3688(var_193_bool, "quest_d5_01", "completed");
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_4330(bool var_55_bool)
{
	int var_57_int;
	func_3650(var_57_int, "d6RubinGoesToGeorg");
	if(var_57_int != 0) {
		var_55_bool = true;
		return 0;
	}
	var_55_bool = false;
}


// @pe
void func_4587(object var_21_object)
{
	var_22_bool = GlobalVars[1];
	if(!var_22_bool) { //@nz
	}
	bool var_24_bool;
	func_3714(var_24_bool, 1);
	if(var_24_bool != 0) {
		int var_32_int;
		func_3650(var_32_int, "d1q01");
		if(var_32_int != 1000) {
			int var_38_int; object var_39_object;
			var_21_object = var_39_object;
			TaskCall(2);
			func_49(var_40_object, var_38_int, var_39_object);
			TaskReturn();
			return 0;
		}
	}
	bool var_147_bool;
	func_3714(var_147_bool, 3);
	if(var_147_bool != 0) {
		int var_149_int; object var_150_object;
		var_21_object = var_150_object;
		TaskCall(4);
		func_672(var_151_object, var_149_int, var_150_object);
		TaskReturn();
		return 0;
	}
	bool var_302_bool;
	func_3714(var_302_bool, 5);
	if(var_302_bool != 0) {
		int var_304_int; object var_305_object;
		var_21_object = var_305_object;
		TaskCall(6);
		func_2270(var_306_object, var_304_int, var_305_object);
		TaskReturn();
		return 0;
	}
	bool var_410_bool;
	func_3714(var_410_bool, 6);
	if(var_410_bool != 0) {
		int var_412_int; object var_413_object;
		var_21_object = var_413_object;
		TaskCall(8);
		func_3273(var_414_object, var_412_int, var_413_object);
		TaskReturn();
		return 0;
	}
	bool var_468_bool;
	func_3720(var_468_bool);
}


// @pe
void func_4342(bool var_246_bool)
{
	var_246_bool = false;
}


void func_4345(object var_70_object)
{
	object var_72_object;
	@GetDiaryRoot(var_72_object);
	if(!var_72_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_70_object = false;
	}
	var_72_object = var_70_object;
}
EMIT "Stack[-1] = 0";



GlobalVarCount = 0

Strings:
	night_bk.tex
	night_ft.tex
	night_lt.tex
	night_rt.tex
	night_up.tex
	night_rain_bk.tex
	night_rain_ft.tex
	night_rain_lt.tex
	night_rain_rt.tex
	night_rain_up.tex
	Wrong time
	dawn_bk.tex
	dawn_ft.tex
	dawn_lt.tex
	dawn_rt.tex
	dawn_up.tex
	dawn_rain_bk.tex
	dawn_rain_ft.tex
	dawn_rain_lt.tex
	dawn_rain_rt.tex
	dawn_rain_up.tex
	day_bk.tex
	day_ft.tex
	day_lt.tex
	day_rt.tex
	day_up.tex
	day_rain_bk.tex
	day_rain_ft.tex
	day_rain_lt.tex
	day_rain_rt.tex
	day_rain_up.tex
	Forecast: rain begins in 
	 hours
	Forecast: rain ends in 
	CanPlayThunder
	CanPlayThunder
	thunder
	rain
	wmod_level
	Level: 
	wdisease
	wnormal
	Region: 
	 (state: 
	)
	Region
	State

Import:
	ForceWeather (17 args)
	GetGameTime (1 args)
	Trace (1 args)
	ChangeWeather (18 args)
	Sleep (1 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	Rain (0 args)
	ModLinear (2 args)
	Bright (0 args)
	ModNothing (0 args)
	GetActiveScene (1 args)
	GetModifierLevel (1 args)
	irand (2 args)
	PlaySound (1 args)
	GetColorMod (2 args)
	LinearColorMod (4 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_7 Op = 0xdc Vars = (int)
		EVENT_1000 Op = 0x131 Vars = (string, string)
		EVENT_8 Op = 0x152 Vars = (int)


0x0: PushEmpty(float, float)
0x1: PushEmpty()
0x2: Call2 0xb5

0x3: Pop(0)
0x4: Push("night_bk.tex")
0x5: Push("night_ft.tex")
0x6: Push("night_lt.tex")
0x7: Push("night_rt.tex")
0x8: Push("night_up.tex")
0x9: Push("night_rain_bk.tex")
0xa: Push("night_rain_ft.tex")
0xb: Push("night_rain_lt.tex")
0xc: Push("night_rain_rt.tex")
0xd: Push("night_rain_up.tex")
0xe: Push((bool) 0)
0xf: Push(CVector(0.0, 0.0, 0.0))
0x10: Push(CVector(0.07843, 0.07843, 0.07843))
0x11: Push((float)3000.0)
0x12: Push((float)5000.0)
0x13: Push(CVector(0.08235, 0.07843, 0.09804))
0x14: Push(CVector(0.08235, 0.07843, 0.09804))
0x15: @ ForceWeather(Stack[-17], Stack[-16], Stack[-15], Stack[-14], Stack[-13], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16: Pop(17)
0x17: @ GetGameTime(Stack[-1])
0x18: Pop(0)
0x19: PushEmpty(bool)
0x1a: Stack[-1] = (bool) 1
0x1b: Push((float)5.99)
0x1c: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1e: Push((float)6.01)
0x1f: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x21: Stack[-1] = (bool) 0
0x22: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x23: Push("Wrong time")
0x24: @ Trace(Stack[-1])
0x25: Pop(1)
0x26: Return(); Pop(2)

0x27: @ GetGameTime(Stack[-1])
0x28: Pop(0)
0x29: Push("dawn_bk.tex")
0x2a: Push("dawn_ft.tex")
0x2b: Push("dawn_lt.tex")
0x2c: Push("dawn_rt.tex")
0x2d: Push("dawn_up.tex")
0x2e: Push("dawn_rain_bk.tex")
0x2f: Push("dawn_rain_ft.tex")
0x30: Push("dawn_rain_lt.tex")
0x31: Push("dawn_rain_rt.tex")
0x32: Push("dawn_rain_up.tex")
0x33: Push((bool) 0)
0x34: Push(CVector(0.33333, 0.15686, 0.03137))
0x35: Push(CVector(0.33333, 0.15686, 0.03137))
0x36: Push((float)3000.0)
0x37: Push((float)5000.0)
0x38: Push(CVector(0.38431, 0.27843, 0.16471))
0x39: Push(CVector(0.78431, 0.52157, 0.44314))
0x3a: PushEmpty(float, float, float)
0x3b: Stack[-2] = (float) 8.0
0x3c: Stack[-1] = Stack[-21]
0x3d: Call2 0x1b7

0x3e: Pop(2)
0x3f: @ ChangeWeather(Stack[-18], Stack[-17], Stack[-16], Stack[-15], Stack[-14], Stack[-13], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x40: Pop(18)
0x41: @ GetGameTime(Stack[-1])
0x42: Pop(0)
0x43: PushEmpty(float, float, float)
0x44: Stack[-2] = (float) 10.0
0x45: Stack[-1] = Stack[-4]
0x46: Call2 0x1b7

0x47: Pop(2)
0x48: @ Sleep(Stack[-1])
0x49: Pop(1)
0x4a: @ GetGameTime(Stack[-1])
0x4b: Pop(0)
0x4c: Push("day_bk.tex")
0x4d: Push("day_ft.tex")
0x4e: Push("day_lt.tex")
0x4f: Push("day_rt.tex")
0x50: Push("day_up.tex")
0x51: Push("day_rain_bk.tex")
0x52: Push("day_rain_ft.tex")
0x53: Push("day_rain_lt.tex")
0x54: Push("day_rain_rt.tex")
0x55: Push("day_rain_up.tex")
0x56: Push((bool) 0)
0x57: Push(CVector(0.39216, 0.35294, 0.29412))
0x58: Push(CVector(0.27451, 0.27451, 0.30588))
0x59: Push((float)3000.0)
0x5a: Push((float)5000.0)
0x5b: Push(CVector(0.31373, 0.25098, 0.2549))
0x5c: Push(CVector(0.26667, 0.3098, 0.25882))
0x5d: PushEmpty(float, float, float)
0x5e: Stack[-2] = (float) 11.0
0x5f: Stack[-1] = Stack[-21]
0x60: Call2 0x1b7

0x61: Pop(2)
0x62: @ ChangeWeather(Stack[-18], Stack[-17], Stack[-16], Stack[-15], Stack[-14], Stack[-13], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x63: Pop(18)
0x64: @ GetGameTime(Stack[-1])
0x65: Pop(0)
0x66: PushEmpty(float, float, float)
0x67: Stack[-2] = (float) 18.0
0x68: Stack[-1] = Stack[-4]
0x69: Call2 0x1b7

0x6a: Pop(2)
0x6b: @ Sleep(Stack[-1])
0x6c: Pop(1)
0x6d: @ GetGameTime(Stack[-1])
0x6e: Pop(0)
0x6f: Push("dawn_bk.tex")
0x70: Push("dawn_ft.tex")
0x71: Push("dawn_lt.tex")
0x72: Push("dawn_rt.tex")
0x73: Push("dawn_up.tex")
0x74: Push("dawn_rain_bk.tex")
0x75: Push("dawn_rain_ft.tex")
0x76: Push("dawn_rain_lt.tex")
0x77: Push("dawn_rain_rt.tex")
0x78: Push("dawn_rain_up.tex")
0x79: Push((bool) 0)
0x7a: Push(CVector(0.35294, 0.31373, 0.26667))
0x7b: Push(CVector(0.35294, 0.31373, 0.26667))
0x7c: Push((float)3000.0)
0x7d: Push((float)5000.0)
0x7e: Push(CVector(0.78431, 0.52157, 0.44314))
0x7f: Push(CVector(0.78431, 0.52157, 0.44314))
0x80: PushEmpty(float, float, float)
0x81: Stack[-2] = (float) 19.0
0x82: Stack[-1] = Stack[-21]
0x83: Call2 0x1b7

0x84: Pop(2)
0x85: @ ChangeWeather(Stack[-18], Stack[-17], Stack[-16], Stack[-15], Stack[-14], Stack[-13], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x86: Pop(18)
0x87: @ GetGameTime(Stack[-1])
0x88: Pop(0)
0x89: PushEmpty(float, float, float)
0x8a: Stack[-2] = (float) 20.0
0x8b: Stack[-1] = Stack[-4]
0x8c: Call2 0x1b7

0x8d: Pop(2)
0x8e: @ Sleep(Stack[-1])
0x8f: Pop(1)
0x90: @ GetGameTime(Stack[-1])
0x91: Pop(0)
0x92: Push("night_bk.tex")
0x93: Push("night_ft.tex")
0x94: Push("night_lt.tex")
0x95: Push("night_rt.tex")
0x96: Push("night_up.tex")
0x97: Push("night_rain_bk.tex")
0x98: Push("night_rain_ft.tex")
0x99: Push("night_rain_lt.tex")
0x9a: Push("night_rain_rt.tex")
0x9b: Push("night_rain_up.tex")
0x9c: Push((bool) 0)
0x9d: Push(CVector(0.07843, 0.07843, 0.07843))
0x9e: Push(CVector(0.07843, 0.07843, 0.07843))
0x9f: Push((float)3000.0)
0xa0: Push((float)5000.0)
0xa1: Push(CVector(0.08235, 0.07843, 0.09804))
0xa2: Push(CVector(0.08235, 0.07843, 0.09804))
0xa3: PushEmpty(float, float, float)
0xa4: Stack[-2] = (float) 21.0
0xa5: Stack[-1] = Stack[-21]
0xa6: Call2 0x1b7

0xa7: Pop(2)
0xa8: @ ChangeWeather(Stack[-18], Stack[-17], Stack[-16], Stack[-15], Stack[-14], Stack[-13], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa9: Pop(18)
0xaa: @ GetGameTime(Stack[-1])
0xab: Pop(0)
0xac: PushEmpty(float, float, float)
0xad: Stack[-2] = (float) 6.0
0xae: Stack[-1] = Stack[-4]
0xaf: Call2 0x1b7

0xb0: Pop(2)
0xb1: @ Sleep(Stack[-1])
0xb2: Pop(1)
0xb3: GOTO 0x27

0xb4: Return(); Pop(2)

0xb5: PushEmpty(float, float)
0xb6: Push((int) 2)
0xb7: Push((int) 20)
0xb8: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xb9: Pop(2)
0xba: Push((int) 40)
0xbb: @ SetTimer(Stack[-1], Stack[-2])
0xbc: Pop(1)
0xbd: Push("Forecast: rain begins in ")
0xbe: Pop(1); Push(Stack[-1] + Stack[-2]);
0xbf: Push(" hours")
0xc0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc1: @ Trace(Stack[-1])
0xc2: Pop(1)
0xc3: Return(); Pop(2)

0xc4: PushEmpty(float, float)
0xc5: Push((int) 1)
0xc6: Push((int) 8)
0xc7: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xc8: Pop(2)
0xc9: Push((int) 41)
0xca: @ SetTimer(Stack[-1], Stack[-2])
0xcb: Pop(1)
0xcc: Push("Forecast: rain ends in ")
0xcd: Pop(1); Push(Stack[-1] + Stack[-2]);
0xce: Push(" hours")
0xcf: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd0: @ Trace(Stack[-1])
0xd1: Pop(1)
0xd2: Return(); Pop(2)

0xd3: PushEmpty(float, float)
0xd4: Push((float)0.5)
0xd5: Push((float)1.0)
0xd6: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xd7: Pop(2)
0xd8: Push((int) 43)
0xd9: @ SetTimer(Stack[-1], Stack[-2])
0xda: Pop(1)
0xdb: Return(); Pop(2)

0xdc: PushEmpty(float, object, bool, float, int, float, object, bool, float, int)
0xdd: Push((int) 40)
0xde: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xe0: Push((int) 40)
0xe1: @ KillTimer(Stack[-1])
0xe2: Pop(1)
0xe3: @ Rain()
0xe4: Pop(0)
0xe5: Push((float)0.1)
0xe6: Push((int) 1)
0xe7: @ rand(Stack[-7], Stack[-2], Stack[-1])
0xe8: Pop(2)
0xe9: Push((int) 2)
0xea: Pop(1); Push(Stack[-6] * Stack[-1]);
0xeb: @ ModLinear(Stack[-6], Stack[-1])
0xec: Pop(1)
0xed: PushEmpty()
0xee: Call2 0xc4

0xef: Pop(0)
0xf0: PushEmpty()
0xf1: Call2 0xd3

0xf2: Pop(0)
0xf3: GOTO 0x130

0xf4: Push((int) 41)
0xf5: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xf7: Push((int) 41)
0xf8: @ KillTimer(Stack[-1])
0xf9: Pop(1)
0xfa: Push((int) 0)
0xfb: Push((int) 2)
0xfc: @ ModLinear(Stack[-2], Stack[-1])
0xfd: Pop(2)
0xfe: Push((int) 42)
0xff: Push((int) 2)
0x100: @ SetTimer(Stack[-2], Stack[-1])
0x101: Pop(2)
0x102: GOTO 0x130

0x103: Push((int) 42)
0x104: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x106: Push((int) 42)
0x107: @ KillTimer(Stack[-1])
0x108: Pop(1)
0x109: @ Bright()
0x10a: Pop(0)
0x10b: @ ModNothing()
0x10c: Pop(0)
0x10d: PushEmpty()
0x10e: Call2 0xb5

0x10f: Pop(0)
0x110: GOTO 0x130

0x111: Push((int) 43)
0x112: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x114: @ GetActiveScene(Stack[-4])
0x115: Pop(0)
0x116: Push("CanPlayThunder")
0x117: Push((int) 1)
0x118: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x119: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x11a: @@ CanPlayThunder(Stack[-3])
0x11b: Pop(0)
0x11c: Push(Stack[-3])
0x11d: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x11e: @ GetModifierLevel(Stack[-2])
0x11f: Pop(0)
0x120: Push((float)0.3)
0x121: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x123: Push((int) 3)
0x124: @ irand(Stack[-2], Stack[-1])
0x125: Pop(1)
0x126: Push("thunder")
0x127: Push((int) 1)
0x128: Pop(1); Push(Stack[-3] + Stack[-1]);
0x129: Pop(2); Push(Stack[-2] + Stack[-1]);
0x12a: @ PlaySound(Stack[-1])
0x12b: Pop(1)
0x12c: PushEmpty()
0x12d: Call2 0xd3

0x12e: Pop(0)
0x12f: Stack[-4] = 0
0x130: Return(); Pop(10)

0x131: PushEmpty(float, float)
0x132: Push("rain")
0x133: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x135: PushEmpty(int)
0x136: Stack[-1] = (int) 40
0x137: Call2 0xdc

0x138: Pop(1)
0x139: GOTO 0x151

0x13a: Push("wmod_level")
0x13b: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x13c: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x13d: @ GetModifierLevel(Stack[-1])
0x13e: Pop(0)
0x13f: Push("Level: ")
0x140: Pop(1); Push(Stack[-1] + Stack[-2]);
0x141: @ Trace(Stack[-1])
0x142: Pop(1)
0x143: GOTO 0x151

0x144: Push("wdisease")
0x145: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x147: PushEmpty()
0x148: Call2 0x187

0x149: Pop(0)
0x14a: GOTO 0x151

0x14b: Push("wnormal")
0x14c: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x14d: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14e: PushEmpty()
0x14f: Call2 0x174

0x150: Pop(0)
0x151: Return(); Pop(2)

0x152: PushEmpty()
0x153: Push((int) -1)
0x154: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x156: PushEmpty()
0x157: Call2 0x174

0x158: Pop(0)
0x159: GOTO 0x173

0x15a: Push("Region: ")
0x15b: Pop(1); Push(Stack[-1] + Stack[-2]);
0x15c: Push(" (state: ")
0x15d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x15e: PushEmpty(bool, int)
0x15f: Stack[-1] = Stack[-4]
0x160: Call2 0x1ab

0x161: Pop(1)
0x162: Pop(2); Push(Stack[-2] + Stack[-1]);
0x163: Push(")")
0x164: Pop(2); Push(Stack[-2] + Stack[-1]);
0x165: @ Trace(Stack[-1])
0x166: Pop(1)
0x167: PushEmpty(bool, int)
0x168: Stack[-1] = Stack[-3]
0x169: Call2 0x1ab

0x16a: Pop(1)
0x16b: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16c: PushEmpty()
0x16d: Call2 0x187

0x16e: Pop(0)
0x16f: GOTO 0x173

0x170: PushEmpty()
0x171: Call2 0x174

0x172: Pop(0)
0x173: Return(); Pop(0)

0x174: PushEmpty(int, cvector, int, cvector)
0x175: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x176: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x177: Return(); Pop(4)

0x178: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x179: Stack[-2] = (int) 0
0x17a: Push((int) 3)
0x17b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x17d: @ GetColorMod(Stack[-1], Stack[-2])
0x17e: Pop(0)
0x17f: Push(CVector(1.0, 1.0, 1.0))
0x180: Push((float)0.2)
0x181: @ LinearColorMod(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x182: Pop(2)
0x183: Push((int) 1)
0x184: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x185: GOTO 0x17a

0x186: Return(); Pop(4)

0x187: PushEmpty(cvector, cvector)
0x188: Push( Stack[0 + Tasks[-1].StackPointer] )
0x189: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x18a: Return(); Pop(2)

0x18b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x18c: Push((int) 0)
0x18d: @ GetColorMod(Stack[-2], Stack[-1])
0x18e: Pop(1)
0x18f: Push((int) 0)
0x190: Push(CVector(0.37647, 1.0, 0.83137))
0x191: Push((float)0.2)
0x192: @ LinearColorMod(Stack[-3], Stack[-4], Stack[-2], Stack[-1])
0x193: Pop(3)
0x194: Push((int) 1)
0x195: @ GetColorMod(Stack[-2], Stack[-1])
0x196: Pop(1)
0x197: Push((int) 1)
0x198: Push(CVector(0.28959, 0.76923, 0.63952))
0x199: Push((float)0.2)
0x19a: @ LinearColorMod(Stack[-3], Stack[-4], Stack[-2], Stack[-1])
0x19b: Pop(3)
0x19c: Push((int) 2)
0x19d: @ GetColorMod(Stack[-2], Stack[-1])
0x19e: Pop(1)
0x19f: Push((int) 2)
0x1a0: Push(CVector(0.37647, 1.0, 0.83137))
0x1a1: Push((float)0.2)
0x1a2: @ LinearColorMod(Stack[-3], Stack[-4], Stack[-2], Stack[-1])
0x1a3: Pop(3)
0x1a4: Return(); Pop(2)

0x1a5: PushEmpty()
0x1a6: Push("Region")
0x1a7: Pop(1); Push(Stack[-1] + Stack[-2]);
0x1a8: Push("State")
0x1a9: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x1aa: Return(); Pop(0)

0x1ab: PushEmpty(int, int)
0x1ac: PushEmpty(string, int)
0x1ad: Stack[-1] = Stack[-5]
0x1ae: Call2 0x1a5

0x1af: Pop(1)
0x1b0: @ GetVariable(Stack[-1], Stack[-2])
0x1b1: Pop(1)
0x1b2: Push((int) 3)
0x1b3: Pop(1); Push(Stack[-2] & Stack[-1]);
0x1b4: Push((int) 1)
0x1b5: Stack[-6] = Stack[-2] == Stack[-1]; Pop(2);
0x1b6: Return(); Pop(2)

0x1b7: PushEmpty()
0x1b8: Push((int) 24)
0x1b9: Stack[-2] = Stack[-2] % Stack[-1]; Pop(1);
0x1ba: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bc: Push((int) 24)
0x1bd: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1be: Stack[-4] = Stack[-1] - Stack[-2]; Pop(1);
0x1bf: Return(); Pop(0)

0x1c0: Stack[-3] = Stack[-2] - Stack[-1]; Pop(0);
0x1c1: Return(); Pop(0)


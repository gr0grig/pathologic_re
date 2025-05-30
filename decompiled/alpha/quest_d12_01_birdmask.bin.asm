GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	Door 
	 not found
	locked
	SetProperty
	sobor@door1
	quest_d12_01
	init_sobor
	player
	ui/NPC_Black.png

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	GetVariable (2 args)

RunOp = 0x22c
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbb Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x230 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x238

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x2fc

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x2fe

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x2eb

0x18: Pop(0)
0x19: @@ SetPlayerName(Stack[-1])
0x1a: Pop(1)
0x1b: Stack[-2] = (int) -1
0x1c: @ IsOverrideActive(Stack[-3])
0x1d: Pop(0)
0x1e: Push(Stack[-3])
0x1f: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x20: Stack[-10] = (int) -2
0x21: Return(); Pop(8)

0x22: @ DoDialog(Stack[-4])
0x23: Pop(0)
0x24: PushEmpty(object, object)
0x25: Stack[-2] = Stack[-11]
0x26: Stack[-1] = Stack[-6]
0x27: Push(-2, 4); TaskCall(1)
0x28: Call 0x3f

0x29: Pop(-2, 4); TaskReturn
0x2a: Pop(2)
0x2b: @@ IsDialogEnd(Stack[-1])
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-1] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: @ sync()
0x30: Pop(0)
0x31: @@ IsDialogEnd(Stack[-1])
0x32: Pop(0)
0x33: GOTO 0x2d

0x34: PushEmpty(object)
0x35: Stack[-1] = Stack[-10]
0x36: Call 0x270

0x37: Pop(1)
0x38: @ StopDialog(Stack[-4])
0x39: Pop(0)
0x3a: @@ GetReturnValue(Stack[-2])
0x3b: Pop(0)
0x3c: Stack[-10] = Stack[-2]
0x3d: Return(); Pop(8)

0x3e: Stack[-4] = 0
0x3f: PushEmpty()
0x40: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x41: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x42: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x43: Push((int) 1)
0x44: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x45: PushEmpty(bool, object)
0x46: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47: Call 0x2d3

0x48: Pop(1)
0x49: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x4a: PushEmpty(string)
0x4b: Stack[-1] = "Neutral"
0x4c: Call 0xab

0x4d: Pop(1)
0x4e: Push((int) 14847)
0x4f: @@ SetMessage(Stack[-1])
0x50: Pop(1)
0x51: @@ ClearReplies()
0x52: Pop(0)
0x53: Push((int) 14848)
0x54: Push((int) -1)
0x55: Push((int) 16094)
0x56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57: Pop(3)
0x58: GOTO 0x8d

0x59: PushEmpty(string)
0x5a: Stack[-1] = "Neutral"
0x5b: Call 0xab

0x5c: Pop(1)
0x5d: Push((int) 14849)
0x5e: @@ SetMessage(Stack[-1])
0x5f: Pop(1)
0x60: @@ ClearReplies()
0x61: Pop(0)
0x62: PushEmpty(bool, object)
0x63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64: Call 0x2c9

0x65: Pop(1)
0x66: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x67: Push((int) 14850)
0x68: Push((int) 16097)
0x69: Push((int) 16096)
0x6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b: Pop(3)
0x6c: PushEmpty(bool, object)
0x6d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e: Call 0x2c9

0x6f: Pop(1)
0x70: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x71: Push((int) 14852)
0x72: Push((int) 16099)
0x73: Push((int) 16098)
0x74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75: Pop(3)
0x76: Push((int) 15494)
0x77: Push((int) 16591)
0x78: Push((int) 16590)
0x79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a: Pop(3)
0x7b: GOTO 0x8d

0x7c: PushEmpty(string)
0x7d: Stack[-1] = "Neutral"
0x7e: Call 0xab

0x7f: Pop(1)
0x80: Push((int) 14855)
0x81: @@ SetMessage(Stack[-1])
0x82: Pop(1)
0x83: @@ ClearReplies()
0x84: Pop(0)
0x85: Push((int) 14856)
0x86: Push((int) 16103)
0x87: Push((int) 16102)
0x88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89: Pop(3)
0x8a: GOTO 0x8d

0x8b: Return(); Pop(0)

0x8c: GOTO 0x43

0x8d: PushEmpty(bool)
0x8e: Call 0x300

0x8f: Pop(0)
0x90: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x91: @ lshWaitForAnimEnd()
0x92: Pop(0)
0x93: Push( Stack[3 + Tasks[-1].StackPointer] )
0x94: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x95: GOTO 0x9b

0x96: PushEmpty(string)
0x97: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x98: Call 0x274

0x99: Pop(1)
0x9a: GOTO 0x91

0x9b: GOTO 0xaa

0x9c: Push("all")
0x9d: Push("idle")
0x9e: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: @ WaitForAnimEnd()
0xa1: Pop(0)
0xa2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: GOTO 0xaa

0xa5: Push("all")
0xa6: Push("idle")
0xa7: @ PlayAnimation(Stack[-2], Stack[-1])
0xa8: Pop(2)
0xa9: GOTO 0xa0

0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: PushEmpty(bool)
0xad: Call 0x300

0xae: Pop(0)
0xaf: Pop(1); Push((bool) Stack[-1] == 0)
0xb0: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xb1: Return(); Pop(0)

0xb2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: Return(); Pop(0)

0xb5: PushEmpty(string)
0xb6: Stack[-1] = Stack[-2]
0xb7: Call 0x274

0xb8: Pop(1)
0xb9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xba: Return(); Pop(0)

0xbb: PushEmpty()
0xbc: Push((int) 1)
0xbd: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0xbe: PushEmpty()
0xbf: Call 0x286

0xc0: Pop(0)
0xc1: Push((int) 16592)
0xc2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call 0x2bb

0xc8: Pop(2)
0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call 0x2c2

0xcd: Pop(2)
0xce: Push((int) 16093)
0xcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0xd1: PushEmpty(bool, object)
0xd2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Call 0x2d3

0xd4: Pop(1)
0xd5: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xd6: PushEmpty(string)
0xd7: Stack[-1] = "Neutral"
0xd8: Call 0xab

0xd9: Pop(1)
0xda: Push((int) 14847)
0xdb: @@ SetMessage(Stack[-1])
0xdc: Pop(1)
0xdd: @@ ClearReplies()
0xde: Pop(0)
0xdf: Push((int) 14848)
0xe0: Push((int) -1)
0xe1: Push((int) 16094)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Return(); Pop(0)

0xe5: PushEmpty(string)
0xe6: Stack[-1] = "Neutral"
0xe7: Call 0xab

0xe8: Pop(1)
0xe9: Push((int) 14849)
0xea: @@ SetMessage(Stack[-1])
0xeb: Pop(1)
0xec: @@ ClearReplies()
0xed: Pop(0)
0xee: PushEmpty(bool, object)
0xef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Call 0x2c9

0xf1: Pop(1)
0xf2: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf3: Push((int) 14850)
0xf4: Push((int) 16097)
0xf5: Push((int) 16096)
0xf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7: Pop(3)
0xf8: PushEmpty(bool, object)
0xf9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfa: Call 0x2c9

0xfb: Pop(1)
0xfc: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xfd: Push((int) 14852)
0xfe: Push((int) 16099)
0xff: Push((int) 16098)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Push((int) 15494)
0x103: Push((int) 16591)
0x104: Push((int) 16590)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: Return(); Pop(0)

0x108: PushEmpty(string)
0x109: Stack[-1] = "Neutral"
0x10a: Call 0xab

0x10b: Pop(1)
0x10c: Push((int) 14855)
0x10d: @@ SetMessage(Stack[-1])
0x10e: Pop(1)
0x10f: @@ ClearReplies()
0x110: Pop(0)
0x111: Push((int) 14856)
0x112: Push((int) 16103)
0x113: Push((int) 16102)
0x114: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115: Pop(3)
0x116: Return(); Pop(0)

0x117: Push((int) 16103)
0x118: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x11a: PushEmpty(string)
0x11b: Stack[-1] = "Neutral"
0x11c: Call 0xab

0x11d: Pop(1)
0x11e: Push((int) 14857)
0x11f: @@ SetMessage(Stack[-1])
0x120: Pop(1)
0x121: @@ ClearReplies()
0x122: Pop(0)
0x123: Push((int) 14858)
0x124: Push((int) 16105)
0x125: Push((int) 16104)
0x126: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x127: Pop(3)
0x128: Push((int) 14880)
0x129: Push((int) 16127)
0x12a: Push((int) 16126)
0x12b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c: Pop(3)
0x12d: Return(); Pop(0)

0x12e: Push((int) 16127)
0x12f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x131: PushEmpty(string)
0x132: Stack[-1] = "Neutral"
0x133: Call 0xab

0x134: Pop(1)
0x135: Push((int) 14881)
0x136: @@ SetMessage(Stack[-1])
0x137: Pop(1)
0x138: @@ ClearReplies()
0x139: Pop(0)
0x13a: Push((int) 14882)
0x13b: Push((int) -1)
0x13c: Push((int) 16128)
0x13d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13e: Pop(3)
0x13f: Return(); Pop(0)

0x140: Push((int) 16105)
0x141: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x143: PushEmpty(string)
0x144: Stack[-1] = "Neutral"
0x145: Call 0xab

0x146: Pop(1)
0x147: Push((int) 14859)
0x148: @@ SetMessage(Stack[-1])
0x149: Pop(1)
0x14a: @@ ClearReplies()
0x14b: Pop(0)
0x14c: Push((int) 14860)
0x14d: Push((int) 16107)
0x14e: Push((int) 16106)
0x14f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150: Pop(3)
0x151: Push((int) 14879)
0x152: Push((int) -1)
0x153: Push((int) 16125)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: Return(); Pop(0)

0x157: Push((int) 16107)
0x158: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x159: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x15a: PushEmpty(string)
0x15b: Stack[-1] = "Neutral"
0x15c: Call 0xab

0x15d: Pop(1)
0x15e: Push((int) 14861)
0x15f: @@ SetMessage(Stack[-1])
0x160: Pop(1)
0x161: @@ ClearReplies()
0x162: Pop(0)
0x163: Push((int) 14862)
0x164: Push((int) 16109)
0x165: Push((int) 16108)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Return(); Pop(0)

0x169: Push((int) 16109)
0x16a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Neutral"
0x16e: Call 0xab

0x16f: Pop(1)
0x170: Push((int) 14863)
0x171: @@ SetMessage(Stack[-1])
0x172: Pop(1)
0x173: @@ ClearReplies()
0x174: Pop(0)
0x175: Push((int) 14864)
0x176: Push((int) 16111)
0x177: Push((int) 16110)
0x178: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(3)
0x17a: Push((int) 14870)
0x17b: Push((int) 16117)
0x17c: Push((int) 16116)
0x17d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17e: Pop(3)
0x17f: Return(); Pop(0)

0x180: Push((int) 16117)
0x181: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x183: PushEmpty(string)
0x184: Stack[-1] = "Neutral"
0x185: Call 0xab

0x186: Pop(1)
0x187: Push((int) 14871)
0x188: @@ SetMessage(Stack[-1])
0x189: Pop(1)
0x18a: @@ ClearReplies()
0x18b: Pop(0)
0x18c: Push((int) 14872)
0x18d: Push((int) -1)
0x18e: Push((int) 16118)
0x18f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x190: Pop(3)
0x191: Push((int) 14873)
0x192: Push((int) 16120)
0x193: Push((int) 16119)
0x194: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x195: Pop(3)
0x196: Return(); Pop(0)

0x197: Push((int) 16120)
0x198: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x199: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x19a: PushEmpty(string)
0x19b: Stack[-1] = "Neutral"
0x19c: Call 0xab

0x19d: Pop(1)
0x19e: Push((int) 14874)
0x19f: @@ SetMessage(Stack[-1])
0x1a0: Pop(1)
0x1a1: @@ ClearReplies()
0x1a2: Pop(0)
0x1a3: Push((int) 14875)
0x1a4: Push((int) -1)
0x1a5: Push((int) 16121)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: Push((int) 14876)
0x1a9: Push((int) 16123)
0x1aa: Push((int) 16122)
0x1ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ac: Pop(3)
0x1ad: Return(); Pop(0)

0x1ae: Push((int) 16123)
0x1af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1b1: PushEmpty(string)
0x1b2: Stack[-1] = "Neutral"
0x1b3: Call 0xab

0x1b4: Pop(1)
0x1b5: Push((int) 14877)
0x1b6: @@ SetMessage(Stack[-1])
0x1b7: Pop(1)
0x1b8: @@ ClearReplies()
0x1b9: Pop(0)
0x1ba: Push((int) 14878)
0x1bb: Push((int) -1)
0x1bc: Push((int) 16124)
0x1bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1be: Pop(3)
0x1bf: Return(); Pop(0)

0x1c0: Push((int) 16111)
0x1c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1c3: PushEmpty(string)
0x1c4: Stack[-1] = "Neutral"
0x1c5: Call 0xab

0x1c6: Pop(1)
0x1c7: Push((int) 14865)
0x1c8: @@ SetMessage(Stack[-1])
0x1c9: Pop(1)
0x1ca: @@ ClearReplies()
0x1cb: Pop(0)
0x1cc: Push((int) 14866)
0x1cd: Push((int) 16113)
0x1ce: Push((int) 16112)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: Push((int) 14869)
0x1d2: Push((int) -1)
0x1d3: Push((int) 16115)
0x1d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d5: Pop(3)
0x1d6: Return(); Pop(0)

0x1d7: Push((int) 16113)
0x1d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1da: PushEmpty(string)
0x1db: Stack[-1] = "Neutral"
0x1dc: Call 0xab

0x1dd: Pop(1)
0x1de: Push((int) 14867)
0x1df: @@ SetMessage(Stack[-1])
0x1e0: Pop(1)
0x1e1: @@ ClearReplies()
0x1e2: Pop(0)
0x1e3: Push((int) 14868)
0x1e4: Push((int) -1)
0x1e5: Push((int) 16114)
0x1e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e7: Pop(3)
0x1e8: Return(); Pop(0)

0x1e9: Push((int) 16591)
0x1ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1ec: PushEmpty(string)
0x1ed: Stack[-1] = "Neutral"
0x1ee: Call 0xab

0x1ef: Pop(1)
0x1f0: Push((int) 15495)
0x1f1: @@ SetMessage(Stack[-1])
0x1f2: Pop(1)
0x1f3: @@ ClearReplies()
0x1f4: Pop(0)
0x1f5: Push((int) 15496)
0x1f6: Push((int) -1)
0x1f7: Push((int) 16592)
0x1f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f9: Pop(3)
0x1fa: Return(); Pop(0)

0x1fb: Push((int) 16099)
0x1fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x1fe: PushEmpty(string)
0x1ff: Stack[-1] = "Neutral"
0x200: Call 0xab

0x201: Pop(1)
0x202: Push((int) 14853)
0x203: @@ SetMessage(Stack[-1])
0x204: Pop(1)
0x205: @@ ClearReplies()
0x206: Pop(0)
0x207: Push((int) 14854)
0x208: Push((int) -1)
0x209: Push((int) 16100)
0x20a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20b: Pop(3)
0x20c: Return(); Pop(0)

0x20d: Push((int) 16097)
0x20e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x210: PushEmpty(string)
0x211: Stack[-1] = "Neutral"
0x212: Call 0xab

0x213: Pop(1)
0x214: Push((int) 14851)
0x215: @@ SetMessage(Stack[-1])
0x216: Pop(1)
0x217: @@ ClearReplies()
0x218: Pop(0)
0x219: Push((int) 15337)
0x21a: Push((int) -1)
0x21b: Push((int) 16560)
0x21c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21d: Pop(3)
0x21e: Return(); Pop(0)

0x21f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x220: PushEmpty(bool)
0x221: Call 0x300

0x222: Pop(0)
0x223: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x224: @ lshStopAnimation()
0x225: Pop(0)
0x226: GOTO 0x229

0x227: @ StopAnimation()
0x228: Pop(0)
0x229: Return(); Pop(0)

0x22a: GOTO 0xbc

0x22b: Return(); Pop(0)

0x22c: @ Hold()
0x22d: Pop(0)
0x22e: GOTO 0x22c

0x22f: Return(); Pop(0)

0x230: PushEmpty()
0x231: PushEmpty(int, object)
0x232: Stack[-1] = Stack[-3]
0x233: Push(-2, 1); TaskCall(0)
0x234: Call 0x0

0x235: Pop(-2, 1); TaskReturn
0x236: Pop(2)
0x237: Return(); Pop(0)

0x238: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x239: @@ GetPosition(Stack[-7])
0x23a: Pop(0)
0x23b: @@ GetEyesHeight(Stack[-8])
0x23c: Pop(0)
0x23d: Push(CvectorIndex(Stack[-7], 1))
0x23e: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x23f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x240: @ GetPosition(Stack[-6])
0x241: Pop(0)
0x242: @ GetEyesHeight(Stack[-8])
0x243: Pop(0)
0x244: Push(CvectorIndex(Stack[-6], 1))
0x245: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x246: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x247: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x248: Push(CvectorIndex(Stack[-5], 1))
0x249: Stack[-1] = (int) 0
0x24a: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x24b: Pop(0); Push(Stack[-5] | Stack[-5]);
0x24c: Pop(1); Push(Sqrt(Stack[-1]))
0x24d: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x24e: Stack[-4] = -Stack[-5]; Pop(0);
0x24f: Push((int) 70)
0x250: Pop(1); Push(Stack[-6] * Stack[-1]);
0x251: PushEmpty(cvector, cvector)
0x252: Push(CVector(0.0, 1.0, 0.0))
0x253: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x254: Call 0x28d

0x255: Pop(1)
0x256: Push((int) 25)
0x257: Pop(2); Push(Stack[-2] * Stack[-1]);
0x258: Pop(2); Push(Stack[-2] + Stack[-1]);
0x259: Push(CVector(0.0, 10.0, 0.0))
0x25a: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x25b: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x25c: @ IsOverrideActive(Stack[-1])
0x25d: Pop(0)
0x25e: Push(Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x260: Stack[-18] = (bool) 0
0x261: Return(); Pop(16)

0x262: @ StopWorld()
0x263: Pop(0)
0x264: @ CameraTransit(Stack[-2], Stack[-4])
0x265: Pop(0)
0x266: Push(CvectorIndex(Stack[-3], 0))
0x267: Push(CvectorIndex(Stack[-4], 2))
0x268: @ Rotate(Stack[-2], Stack[-1])
0x269: Pop(2)
0x26a: @ CameraWaitForPlayFinish()
0x26b: Pop(0)
0x26c: @ ResumeWorld()
0x26d: Pop(0)
0x26e: Stack[-18] = (bool) 1
0x26f: Return(); Pop(16)

0x270: PushEmpty()
0x271: @ CameraSwitchToNormal()
0x272: Pop(0)
0x273: Return(); Pop(0)

0x274: PushEmpty(float, float, float, float)
0x275: Push("playing ")
0x276: Pop(1); Push(Stack[-1] + Stack[-6]);
0x277: @ Trace(Stack[-1])
0x278: Pop(1)
0x279: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x27a: Pop(0)
0x27b: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x27c: Pop(0)
0x27d: Push("start: ")
0x27e: Pop(1); Push(Stack[-1] + Stack[-3]);
0x27f: @ Trace(Stack[-1])
0x280: Pop(1)
0x281: Push("end: ")
0x282: Pop(1); Push(Stack[-1] + Stack[-2]);
0x283: @ Trace(Stack[-1])
0x284: Pop(1)
0x285: Return(); Pop(4)

0x286: PushEmpty(bool)
0x287: Call 0x300

0x288: Pop(0)
0x289: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28a: @ lshStopSpeech()
0x28b: Pop(0)
0x28c: Return(); Pop(0)

0x28d: PushEmpty(float, float)
0x28e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x28f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x290: Push((float)0.0)
0x291: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x293: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x294: Return(); Pop(2)

0x295: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x296: Return(); Pop(2)

0x297: PushEmpty(object, object)
0x298: @ FindActor(Stack[-1], Stack[-4])
0x299: Pop(0)
0x29a: Pop(0); Push((bool) Stack[-1] == 0)
0x29b: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x29c: Push("Door ")
0x29d: Pop(1); Push(Stack[-1] + Stack[-5]);
0x29e: Push(" not found")
0x29f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2a0: @ Trace(Stack[-1])
0x2a1: Pop(1)
0x2a2: Push("locked")
0x2a3: @@ SetProperty(Stack[-1], Stack[-4])
0x2a4: Pop(1)
0x2a5: Return(); Pop(2)

0x2a6: Stack[-1] = 0
0x2a7: PushEmpty(object, object)
0x2a8: @ FindActor(Stack[-1], Stack[-4])
0x2a9: Pop(0)
0x2aa: Pop(0); Push((bool) Stack[-1] == 0)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ac: Stack[-5] = (bool) 0
0x2ad: Return(); Pop(2)

0x2ae: @ Trigger(Stack[-1], Stack[-3])
0x2af: Pop(0)
0x2b0: Stack[-5] = (bool) 1
0x2b1: Return(); Pop(2)

0x2b2: Stack[-1] = 0
0x2b3: PushEmpty(float, float)
0x2b4: @ GetGameTime(Stack[-1])
0x2b5: Pop(0)
0x2b6: PushEmpty(int)
0x2b7: Stack[-1] = Stack[-2]
0x2b8: Push((int) 24)
0x2b9: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x2ba: Return(); Pop(2)

0x2bb: PushEmpty()
0x2bc: PushEmpty(string, bool)
0x2bd: Stack[-2] = "sobor@door1"
0x2be: Stack[-1] = (bool) 0
0x2bf: Call 0x297

0x2c0: Pop(2)
0x2c1: Return(); Pop(0)

0x2c2: PushEmpty()
0x2c3: PushEmpty(bool, string, string)
0x2c4: Stack[-2] = "quest_d12_01"
0x2c5: Stack[-1] = "init_sobor"
0x2c6: Call 0x2a7

0x2c7: Pop(3)
0x2c8: Return(); Pop(0)

0x2c9: PushEmpty()
0x2ca: PushEmpty(bool, object)
0x2cb: Stack[-1] = Stack[-3]
0x2cc: Call 0x2dd

0x2cd: Pop(1)
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2cf: Stack[-2] = (bool) 1
0x2d0: Return(); Pop(0)

0x2d1: Stack[-2] = (bool) 0
0x2d2: Return(); Pop(0)

0x2d3: PushEmpty()
0x2d4: PushEmpty(bool, object)
0x2d5: Stack[-1] = Stack[-3]
0x2d6: Call 0x2e0

0x2d7: Pop(1)
0x2d8: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d9: Stack[-2] = (bool) 1
0x2da: Return(); Pop(0)

0x2db: Stack[-2] = (bool) 0
0x2dc: Return(); Pop(0)

0x2dd: PushEmpty()
0x2de: Stack[-2] = (bool) 0
0x2df: Return(); Pop(0)

0x2e0: PushEmpty()
0x2e1: PushEmpty(int)
0x2e2: Call 0x2b3

0x2e3: Pop(0)
0x2e4: Push((int) 19)
0x2e5: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e7: Stack[-2] = (bool) 1
0x2e8: Return(); Pop(0)

0x2e9: Stack[-2] = (bool) 0
0x2ea: Return(); Pop(0)

0x2eb: PushEmpty(int, int)
0x2ec: Push("player")
0x2ed: @ GetVariable(Stack[-1], Stack[-2])
0x2ee: Pop(1)
0x2ef: Push((int) 0)
0x2f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f2: Stack[-3] = (int) 200001
0x2f3: Return(); Pop(2)

0x2f4: GOTO 0x2fa

0x2f5: Push((int) 1)
0x2f6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f8: Stack[-3] = (int) 200002
0x2f9: Return(); Pop(2)

0x2fa: Stack[-3] = (int) 200003
0x2fb: Return(); Pop(2)

0x2fc: Stack[-1] = (int) 4029
0x2fd: Return(); Pop(0)

0x2fe: Stack[-1] = "ui/NPC_Black.png"
0x2ff: Return(); Pop(0)

0x300: Stack[-1] = (bool) 0
0x301: Return(); Pop(0)


GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
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
	head
	Door 
	 not found
	locked
	SetProperty
	sobor@door1
	quest_d12_01
	init_sobor
	branch
	ui/NPC_Black.png
	ui/NPC_Black_b.png

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
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshStopSpeech (0 args)
	FindActor (2 args)
	Trace (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	GetVariable (2 args)

RunOp = 0x23d
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcc Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x241 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x249

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x324

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x322

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x326

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x328

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x311

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x28d

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x2f9

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0xb6

0x58: Pop(1)
0x59: Push((int) 514847)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 514848)
0x5f: Push((int) -1)
0x60: Push((int) 16094)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x98

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral"
0x66: Call2 0xb6

0x67: Pop(1)
0x68: Push((int) 514849)
0x69: @@ SetMessage(Stack[-1])
0x6a: Pop(1)
0x6b: @@ ClearReplies()
0x6c: Pop(0)
0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0x2ef

0x70: Pop(1)
0x71: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x72: Push((int) 514850)
0x73: Push((int) 16097)
0x74: Push((int) 16096)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: PushEmpty(bool, object)
0x78: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79: Call2 0x2ef

0x7a: Pop(1)
0x7b: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7c: Push((int) 514852)
0x7d: Push((int) 16099)
0x7e: Push((int) 16098)
0x7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: Push((int) 515494)
0x82: Push((int) 16591)
0x83: Push((int) 16590)
0x84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85: Pop(3)
0x86: GOTO 0x98

0x87: PushEmpty(string)
0x88: Stack[-1] = "Neutral"
0x89: Call2 0xb6

0x8a: Pop(1)
0x8b: Push((int) 514855)
0x8c: @@ SetMessage(Stack[-1])
0x8d: Pop(1)
0x8e: @@ ClearReplies()
0x8f: Pop(0)
0x90: Push((int) 514856)
0x91: Push((int) 16103)
0x92: Push((int) 16102)
0x93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94: Pop(3)
0x95: GOTO 0x98

0x96: Return(); Pop(0)

0x97: GOTO 0x4e

0x98: PushEmpty(bool)
0x99: Call2 0x32a

0x9a: Pop(0)
0x9b: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0x9c: @ lshWaitForAnimEnd()
0x9d: Pop(0)
0x9e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: GOTO 0xa6

0xa1: PushEmpty(string)
0xa2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa3: Call2 0x29e

0xa4: Pop(1)
0xa5: GOTO 0x9c

0xa6: GOTO 0xb5

0xa7: Push("all")
0xa8: Push("idle")
0xa9: @ PlayAnimation(Stack[-2], Stack[-1])
0xaa: Pop(2)
0xab: @ WaitForAnimEnd()
0xac: Pop(0)
0xad: Push( Stack[3 + Tasks[-1].StackPointer] )
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: GOTO 0xb5

0xb0: Push("all")
0xb1: Push("idle")
0xb2: @ PlayAnimation(Stack[-2], Stack[-1])
0xb3: Pop(2)
0xb4: GOTO 0xab

0xb5: Return(); Pop(0)

0xb6: PushEmpty()
0xb7: PushEmpty(bool)
0xb8: Call2 0x32a

0xb9: Pop(0)
0xba: Pop(1); Push((bool) Stack[-1] == 0)
0xbb: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbc: Return(); Pop(0)

0xbd: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbe: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbf: Return(); Pop(0)

0xc0: PushEmpty(string, bool)
0xc1: Stack[-2] = Stack[-3]
0xc2: Push("")
0xc3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc5: Stack[-1] = (bool) 0
0xc6: GOTO 0xc8

0xc7: Stack[-1] = (bool) 1
0xc8: Call2 0x2a5

0xc9: Pop(2)
0xca: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xcb: Return(); Pop(0)

0xcc: PushEmpty()
0xcd: Push((int) 1)
0xce: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0xcf: PushEmpty()
0xd0: Call2 0x2ab

0xd1: Pop(0)
0xd2: Push((int) 16592)
0xd3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x2e1

0xd9: Pop(2)
0xda: PushEmpty(object, object)
0xdb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdd: Call2 0x2e8

0xde: Pop(2)
0xdf: Push((int) 16093)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0xe2: PushEmpty(bool, object)
0xe3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Call2 0x2f9

0xe5: Pop(1)
0xe6: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe7: PushEmpty(string)
0xe8: Stack[-1] = "Neutral"
0xe9: Call2 0xb6

0xea: Pop(1)
0xeb: Push((int) 514847)
0xec: @@ SetMessage(Stack[-1])
0xed: Pop(1)
0xee: @@ ClearReplies()
0xef: Pop(0)
0xf0: Push((int) 514848)
0xf1: Push((int) -1)
0xf2: Push((int) 16094)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: PushEmpty(string)
0xf7: Stack[-1] = "Neutral"
0xf8: Call2 0xb6

0xf9: Pop(1)
0xfa: Push((int) 514849)
0xfb: @@ SetMessage(Stack[-1])
0xfc: Pop(1)
0xfd: @@ ClearReplies()
0xfe: Pop(0)
0xff: PushEmpty(bool, object)
0x100: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x101: Call2 0x2ef

0x102: Pop(1)
0x103: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x104: Push((int) 514850)
0x105: Push((int) 16097)
0x106: Push((int) 16096)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: PushEmpty(bool, object)
0x10a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10b: Call2 0x2ef

0x10c: Pop(1)
0x10d: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x10e: Push((int) 514852)
0x10f: Push((int) 16099)
0x110: Push((int) 16098)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: Push((int) 515494)
0x114: Push((int) 16591)
0x115: Push((int) 16590)
0x116: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117: Pop(3)
0x118: Return(); Pop(0)

0x119: PushEmpty(string)
0x11a: Stack[-1] = "Neutral"
0x11b: Call2 0xb6

0x11c: Pop(1)
0x11d: Push((int) 514855)
0x11e: @@ SetMessage(Stack[-1])
0x11f: Pop(1)
0x120: @@ ClearReplies()
0x121: Pop(0)
0x122: Push((int) 514856)
0x123: Push((int) 16103)
0x124: Push((int) 16102)
0x125: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126: Pop(3)
0x127: Return(); Pop(0)

0x128: Push((int) 16103)
0x129: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x12b: PushEmpty(string)
0x12c: Stack[-1] = "Neutral"
0x12d: Call2 0xb6

0x12e: Pop(1)
0x12f: Push((int) 514857)
0x130: @@ SetMessage(Stack[-1])
0x131: Pop(1)
0x132: @@ ClearReplies()
0x133: Pop(0)
0x134: Push((int) 514858)
0x135: Push((int) 16105)
0x136: Push((int) 16104)
0x137: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138: Pop(3)
0x139: Push((int) 514880)
0x13a: Push((int) 16127)
0x13b: Push((int) 16126)
0x13c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13d: Pop(3)
0x13e: Return(); Pop(0)

0x13f: Push((int) 16127)
0x140: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x142: PushEmpty(string)
0x143: Stack[-1] = "Neutral"
0x144: Call2 0xb6

0x145: Pop(1)
0x146: Push((int) 514881)
0x147: @@ SetMessage(Stack[-1])
0x148: Pop(1)
0x149: @@ ClearReplies()
0x14a: Pop(0)
0x14b: Push((int) 514882)
0x14c: Push((int) -1)
0x14d: Push((int) 16128)
0x14e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14f: Pop(3)
0x150: Return(); Pop(0)

0x151: Push((int) 16105)
0x152: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x154: PushEmpty(string)
0x155: Stack[-1] = "Neutral"
0x156: Call2 0xb6

0x157: Pop(1)
0x158: Push((int) 514859)
0x159: @@ SetMessage(Stack[-1])
0x15a: Pop(1)
0x15b: @@ ClearReplies()
0x15c: Pop(0)
0x15d: Push((int) 514860)
0x15e: Push((int) 16107)
0x15f: Push((int) 16106)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: Push((int) 514879)
0x163: Push((int) -1)
0x164: Push((int) 16125)
0x165: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x166: Pop(3)
0x167: Return(); Pop(0)

0x168: Push((int) 16107)
0x169: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x16b: PushEmpty(string)
0x16c: Stack[-1] = "Neutral"
0x16d: Call2 0xb6

0x16e: Pop(1)
0x16f: Push((int) 514861)
0x170: @@ SetMessage(Stack[-1])
0x171: Pop(1)
0x172: @@ ClearReplies()
0x173: Pop(0)
0x174: Push((int) 514862)
0x175: Push((int) 16109)
0x176: Push((int) 16108)
0x177: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x178: Pop(3)
0x179: Return(); Pop(0)

0x17a: Push((int) 16109)
0x17b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x17d: PushEmpty(string)
0x17e: Stack[-1] = "Neutral"
0x17f: Call2 0xb6

0x180: Pop(1)
0x181: Push((int) 514863)
0x182: @@ SetMessage(Stack[-1])
0x183: Pop(1)
0x184: @@ ClearReplies()
0x185: Pop(0)
0x186: Push((int) 514864)
0x187: Push((int) 16111)
0x188: Push((int) 16110)
0x189: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(3)
0x18b: Push((int) 514870)
0x18c: Push((int) 16117)
0x18d: Push((int) 16116)
0x18e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f: Pop(3)
0x190: Return(); Pop(0)

0x191: Push((int) 16117)
0x192: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x194: PushEmpty(string)
0x195: Stack[-1] = "Neutral"
0x196: Call2 0xb6

0x197: Pop(1)
0x198: Push((int) 514871)
0x199: @@ SetMessage(Stack[-1])
0x19a: Pop(1)
0x19b: @@ ClearReplies()
0x19c: Pop(0)
0x19d: Push((int) 514872)
0x19e: Push((int) -1)
0x19f: Push((int) 16118)
0x1a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1: Pop(3)
0x1a2: Push((int) 514873)
0x1a3: Push((int) 16120)
0x1a4: Push((int) 16119)
0x1a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a6: Pop(3)
0x1a7: Return(); Pop(0)

0x1a8: Push((int) 16120)
0x1a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1ab: PushEmpty(string)
0x1ac: Stack[-1] = "Neutral"
0x1ad: Call2 0xb6

0x1ae: Pop(1)
0x1af: Push((int) 514874)
0x1b0: @@ SetMessage(Stack[-1])
0x1b1: Pop(1)
0x1b2: @@ ClearReplies()
0x1b3: Pop(0)
0x1b4: Push((int) 514875)
0x1b5: Push((int) -1)
0x1b6: Push((int) 16121)
0x1b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b8: Pop(3)
0x1b9: Push((int) 514876)
0x1ba: Push((int) 16123)
0x1bb: Push((int) 16122)
0x1bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bd: Pop(3)
0x1be: Return(); Pop(0)

0x1bf: Push((int) 16123)
0x1c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1c2: PushEmpty(string)
0x1c3: Stack[-1] = "Neutral"
0x1c4: Call2 0xb6

0x1c5: Pop(1)
0x1c6: Push((int) 514877)
0x1c7: @@ SetMessage(Stack[-1])
0x1c8: Pop(1)
0x1c9: @@ ClearReplies()
0x1ca: Pop(0)
0x1cb: Push((int) 514878)
0x1cc: Push((int) -1)
0x1cd: Push((int) 16124)
0x1ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cf: Pop(3)
0x1d0: Return(); Pop(0)

0x1d1: Push((int) 16111)
0x1d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1d4: PushEmpty(string)
0x1d5: Stack[-1] = "Neutral"
0x1d6: Call2 0xb6

0x1d7: Pop(1)
0x1d8: Push((int) 514865)
0x1d9: @@ SetMessage(Stack[-1])
0x1da: Pop(1)
0x1db: @@ ClearReplies()
0x1dc: Pop(0)
0x1dd: Push((int) 514866)
0x1de: Push((int) 16113)
0x1df: Push((int) 16112)
0x1e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e1: Pop(3)
0x1e2: Push((int) 514869)
0x1e3: Push((int) -1)
0x1e4: Push((int) 16115)
0x1e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e6: Pop(3)
0x1e7: Return(); Pop(0)

0x1e8: Push((int) 16113)
0x1e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1eb: PushEmpty(string)
0x1ec: Stack[-1] = "Neutral"
0x1ed: Call2 0xb6

0x1ee: Pop(1)
0x1ef: Push((int) 514867)
0x1f0: @@ SetMessage(Stack[-1])
0x1f1: Pop(1)
0x1f2: @@ ClearReplies()
0x1f3: Pop(0)
0x1f4: Push((int) 514868)
0x1f5: Push((int) -1)
0x1f6: Push((int) 16114)
0x1f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f8: Pop(3)
0x1f9: Return(); Pop(0)

0x1fa: Push((int) 16591)
0x1fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1fd: PushEmpty(string)
0x1fe: Stack[-1] = "Neutral"
0x1ff: Call2 0xb6

0x200: Pop(1)
0x201: Push((int) 515495)
0x202: @@ SetMessage(Stack[-1])
0x203: Pop(1)
0x204: @@ ClearReplies()
0x205: Pop(0)
0x206: Push((int) 515496)
0x207: Push((int) -1)
0x208: Push((int) 16592)
0x209: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20a: Pop(3)
0x20b: Return(); Pop(0)

0x20c: Push((int) 16099)
0x20d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x20f: PushEmpty(string)
0x210: Stack[-1] = "Neutral"
0x211: Call2 0xb6

0x212: Pop(1)
0x213: Push((int) 514853)
0x214: @@ SetMessage(Stack[-1])
0x215: Pop(1)
0x216: @@ ClearReplies()
0x217: Pop(0)
0x218: Push((int) 514854)
0x219: Push((int) -1)
0x21a: Push((int) 16100)
0x21b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21c: Pop(3)
0x21d: Return(); Pop(0)

0x21e: Push((int) 16097)
0x21f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x220: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x221: PushEmpty(string)
0x222: Stack[-1] = "Neutral"
0x223: Call2 0xb6

0x224: Pop(1)
0x225: Push((int) 514851)
0x226: @@ SetMessage(Stack[-1])
0x227: Pop(1)
0x228: @@ ClearReplies()
0x229: Pop(0)
0x22a: Push((int) 515337)
0x22b: Push((int) -1)
0x22c: Push((int) 16560)
0x22d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22e: Pop(3)
0x22f: Return(); Pop(0)

0x230: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x231: PushEmpty(bool)
0x232: Call2 0x32a

0x233: Pop(0)
0x234: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x235: @ lshStopAnimation()
0x236: Pop(0)
0x237: GOTO 0x23a

0x238: @ StopAnimation()
0x239: Pop(0)
0x23a: Return(); Pop(0)

0x23b: GOTO 0xcd

0x23c: Return(); Pop(0)

0x23d: @ Hold()
0x23e: Pop(0)
0x23f: GOTO 0x23d

0x240: Return(); Pop(0)

0x241: PushEmpty()
0x242: PushEmpty(int, object)
0x243: Stack[-1] = Stack[-3]
0x244: Push(-2, 1); TaskCall(0)
0x245: Call2 0x0

0x246: Pop(-2, 1); TaskReturn
0x247: Pop(2)
0x248: Return(); Pop(0)

0x249: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x24a: @@ GetPosition(Stack[-8])
0x24b: Pop(0)
0x24c: @@ GetEyesHeight(Stack[-9])
0x24d: Pop(0)
0x24e: Push(CvectorIndex(Stack[-8], 1))
0x24f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x250: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x251: @ GetPosition(Stack[-7])
0x252: Pop(0)
0x253: @ GetEyesHeight(Stack[-9])
0x254: Pop(0)
0x255: Push(CvectorIndex(Stack[-7], 1))
0x256: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x257: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x258: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x259: Push(CvectorIndex(Stack[-6], 1))
0x25a: Stack[-1] = (int) 0
0x25b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x25c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x25d: Pop(1); Push(Sqrt(Stack[-1]))
0x25e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x25f: Stack[-5] = -Stack[-6]; Pop(0);
0x260: Pop(0); Push(Stack[-6] * Stack[-19]);
0x261: PushEmpty(cvector, cvector)
0x262: Push(CVector(0.0, 1.0, 0.0))
0x263: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x264: Call2 0x2b2

0x265: Pop(1)
0x266: Push((int) 25)
0x267: Pop(2); Push(Stack[-2] * Stack[-1]);
0x268: Pop(2); Push(Stack[-2] + Stack[-1]);
0x269: Push(CVector(0.0, 10.0, 0.0))
0x26a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x26b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x26c: @ IsOverrideActive(Stack[-2])
0x26d: Pop(0)
0x26e: Push(Stack[-2])
0x26f: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x270: Stack[-21] = (bool) 0
0x271: Return(); Pop(18)

0x272: @ StopWorld()
0x273: Pop(0)
0x274: @ CameraTransit(Stack[-3], Stack[-5])
0x275: Pop(0)
0x276: Push(CvectorIndex(Stack[-4], 0))
0x277: Push(CvectorIndex(Stack[-5], 2))
0x278: @ Rotate(Stack[-2], Stack[-1])
0x279: Pop(2)
0x27a: PushEmpty(bool)
0x27b: Call2 0x32a

0x27c: Pop(0)
0x27d: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27e: GOTO 0x287

0x27f: Push("head")
0x280: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x281: Pop(1)
0x282: Push(Stack[-1])
0x283: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x284: Push("head")
0x285: @ LookAsyncCamera(Stack[-1])
0x286: Pop(1)
0x287: @ CameraWaitForPlayFinish()
0x288: Pop(0)
0x289: @ ResumeWorld()
0x28a: Pop(0)
0x28b: Stack[-21] = (bool) 1
0x28c: Return(); Pop(18)

0x28d: PushEmpty(bool, bool)
0x28e: @ CameraSwitchToNormal()
0x28f: Pop(0)
0x290: PushEmpty(bool)
0x291: Call2 0x32a

0x292: Pop(0)
0x293: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x294: GOTO 0x29d

0x295: Push("head")
0x296: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x297: Pop(1)
0x298: Push(Stack[-1])
0x299: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29a: Push("head")
0x29b: @ UnlookAsync(Stack[-1])
0x29c: Pop(1)
0x29d: Return(); Pop(2)

0x29e: PushEmpty(float, float, float, float)
0x29f: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2a0: Pop(0)
0x2a1: Push((bool) 0)
0x2a2: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2a3: Pop(1)
0x2a4: Return(); Pop(4)

0x2a5: PushEmpty(float, float, float, float)
0x2a6: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2a7: Pop(0)
0x2a8: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2a9: Pop(0)
0x2aa: Return(); Pop(4)

0x2ab: PushEmpty(bool)
0x2ac: Call2 0x32a

0x2ad: Pop(0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2af: @ lshStopSpeech()
0x2b0: Pop(0)
0x2b1: Return(); Pop(0)

0x2b2: PushEmpty(float, float)
0x2b3: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2b4: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2b5: Push((float)0.0)
0x2b6: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b8: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2b9: Return(); Pop(2)

0x2ba: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2bb: Return(); Pop(2)

0x2bc: PushEmpty(object, object)
0x2bd: @ FindActor(Stack[-1], Stack[-4])
0x2be: Pop(0)
0x2bf: Pop(0); Push((bool) Stack[-1] == 0)
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c1: Push("Door ")
0x2c2: Pop(1); Push(Stack[-1] + Stack[-5]);
0x2c3: Push(" not found")
0x2c4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2c5: @ Trace(Stack[-1])
0x2c6: Pop(1)
0x2c7: GOTO 0x2cb

0x2c8: Push("locked")
0x2c9: @@ SetProperty(Stack[-1], Stack[-4])
0x2ca: Pop(1)
0x2cb: Return(); Pop(2)

0x2cc: Stack[-1] = 0
0x2cd: PushEmpty(object, object)
0x2ce: @ FindActor(Stack[-1], Stack[-4])
0x2cf: Pop(0)
0x2d0: Pop(0); Push((bool) Stack[-1] == 0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d2: Stack[-5] = (bool) 0
0x2d3: Return(); Pop(2)

0x2d4: @ Trigger(Stack[-1], Stack[-3])
0x2d5: Pop(0)
0x2d6: Stack[-5] = (bool) 1
0x2d7: Return(); Pop(2)

0x2d8: Stack[-1] = 0
0x2d9: PushEmpty(float, float)
0x2da: @ GetGameTime(Stack[-1])
0x2db: Pop(0)
0x2dc: PushEmpty(int)
0x2dd: Stack[-1] = Stack[-2]
0x2de: Push((int) 24)
0x2df: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x2e0: Return(); Pop(2)

0x2e1: PushEmpty()
0x2e2: PushEmpty(string, bool)
0x2e3: Stack[-2] = "sobor@door1"
0x2e4: Stack[-1] = (bool) 0
0x2e5: Call2 0x2bc

0x2e6: Pop(2)
0x2e7: Return(); Pop(0)

0x2e8: PushEmpty()
0x2e9: PushEmpty(bool, string, string)
0x2ea: Stack[-2] = "quest_d12_01"
0x2eb: Stack[-1] = "init_sobor"
0x2ec: Call2 0x2cd

0x2ed: Pop(3)
0x2ee: Return(); Pop(0)

0x2ef: PushEmpty()
0x2f0: PushEmpty(bool, object)
0x2f1: Stack[-1] = Stack[-3]
0x2f2: Call2 0x303

0x2f3: Pop(1)
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f5: Stack[-2] = (bool) 1
0x2f6: Return(); Pop(0)

0x2f7: Stack[-2] = (bool) 0
0x2f8: Return(); Pop(0)

0x2f9: PushEmpty()
0x2fa: PushEmpty(bool, object)
0x2fb: Stack[-1] = Stack[-3]
0x2fc: Call2 0x306

0x2fd: Pop(1)
0x2fe: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2ff: Stack[-2] = (bool) 1
0x300: Return(); Pop(0)

0x301: Stack[-2] = (bool) 0
0x302: Return(); Pop(0)

0x303: PushEmpty()
0x304: Stack[-2] = (bool) 0
0x305: Return(); Pop(0)

0x306: PushEmpty()
0x307: PushEmpty(int)
0x308: Call2 0x2d9

0x309: Pop(0)
0x30a: Push((int) 19)
0x30b: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30d: Stack[-2] = (bool) 1
0x30e: Return(); Pop(0)

0x30f: Stack[-2] = (bool) 0
0x310: Return(); Pop(0)

0x311: PushEmpty(int, int)
0x312: Push("branch")
0x313: @ GetVariable(Stack[-1], Stack[-2])
0x314: Pop(1)
0x315: Push((int) 0)
0x316: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x318: Stack[-3] = (int) 1
0x319: Return(); Pop(2)

0x31a: GOTO 0x320

0x31b: Push((int) 1)
0x31c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31d: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31e: Stack[-3] = (int) 2
0x31f: Return(); Pop(2)

0x320: Stack[-3] = (int) 3
0x321: Return(); Pop(2)

0x322: Stack[-1] = (int) 515571
0x323: Return(); Pop(0)

0x324: Stack[-1] = (int) 504029
0x325: Return(); Pop(0)

0x326: Stack[-1] = "ui/NPC_Black.png"
0x327: Return(); Pop(0)

0x328: Stack[-1] = "ui/NPC_Black_b.png"
0x329: Return(); Pop(0)

0x32a: Stack[-1] = (bool) 0
0x32b: Return(); Pop(0)


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
	cleanup
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	ood12Littleboy1
	ood12Littleboy2
	d12q01DankoKnowHeIsToy
	player
	ui/NPC_None.png

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
	Sleep (1 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
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
	self (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	HasAnimation (3 args)

RunOp = 0x26c
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc0 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x261 Vars = (object)
		EVENT_26 Op = 0x27c Vars = (string)
		EVENT_5 Op = 0x293 Vars = ()
		EVENT_6 Op = 0x298 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x2f9

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x39e

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x3a0

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x38d

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
0x36: Call 0x331

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
0x44: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x45: PushEmpty(bool, object)
0x46: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47: Call 0x375

0x48: Pop(1)
0x49: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x4a: PushEmpty(object, object)
0x4b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d: Call 0x363

0x4e: Pop(2)
0x4f: PushEmpty(object, object)
0x50: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x51: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x52: Call 0x36f

0x53: Pop(2)
0x54: PushEmpty(string)
0x55: Stack[-1] = "Neutral"
0x56: Call 0xb0

0x57: Pop(1)
0x58: Push((int) 14956)
0x59: @@ SetMessage(Stack[-1])
0x5a: Pop(1)
0x5b: @@ ClearReplies()
0x5c: Pop(0)
0x5d: Push((int) 14957)
0x5e: Push((int) 16211)
0x5f: Push((int) 16210)
0x60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61: Pop(3)
0x62: Push((int) 14975)
0x63: Push((int) 16231)
0x64: Push((int) 16230)
0x65: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66: Pop(3)
0x67: Push((int) 14977)
0x68: Push((int) 16233)
0x69: Push((int) 16232)
0x6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b: Pop(3)
0x6c: GOTO 0x92

0x6d: PushEmpty(string)
0x6e: Stack[-1] = "Neutral"
0x6f: Call 0xb0

0x70: Pop(1)
0x71: Push((int) 14988)
0x72: @@ SetMessage(Stack[-1])
0x73: Pop(1)
0x74: @@ ClearReplies()
0x75: Pop(0)
0x76: PushEmpty(bool, object)
0x77: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x78: Call 0x381

0x79: Pop(1)
0x7a: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7b: Push((int) 14990)
0x7c: Push((int) 16246)
0x7d: Push((int) 16245)
0x7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f: Pop(3)
0x80: PushEmpty(bool, object)
0x81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82: Call 0x381

0x83: Pop(1)
0x84: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x85: Push((int) 15000)
0x86: Push((int) 16257)
0x87: Push((int) 16256)
0x88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89: Pop(3)
0x8a: Push((int) 14989)
0x8b: Push((int) -1)
0x8c: Push((int) 16244)
0x8d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e: Pop(3)
0x8f: GOTO 0x92

0x90: Return(); Pop(0)

0x91: GOTO 0x43

0x92: PushEmpty(bool)
0x93: Call 0x3a2

0x94: Pop(0)
0x95: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x96: @ lshWaitForAnimEnd()
0x97: Pop(0)
0x98: Push( Stack[3 + Tasks[-1].StackPointer] )
0x99: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x9a: GOTO 0xa0

0x9b: PushEmpty(string)
0x9c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9d: Call 0x335

0x9e: Pop(1)
0x9f: GOTO 0x96

0xa0: GOTO 0xaf

0xa1: Push("all")
0xa2: Push("idle")
0xa3: @ PlayAnimation(Stack[-2], Stack[-1])
0xa4: Pop(2)
0xa5: @ WaitForAnimEnd()
0xa6: Pop(0)
0xa7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: GOTO 0xaf

0xaa: Push("all")
0xab: Push("idle")
0xac: @ PlayAnimation(Stack[-2], Stack[-1])
0xad: Pop(2)
0xae: GOTO 0xa5

0xaf: Return(); Pop(0)

0xb0: PushEmpty()
0xb1: PushEmpty(bool)
0xb2: Call 0x3a2

0xb3: Pop(0)
0xb4: Pop(1); Push((bool) Stack[-1] == 0)
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: Return(); Pop(0)

0xb7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb9: Return(); Pop(0)

0xba: PushEmpty(string)
0xbb: Stack[-1] = Stack[-2]
0xbc: Call 0x335

0xbd: Pop(1)
0xbe: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbf: Return(); Pop(0)

0xc0: PushEmpty()
0xc1: Push((int) 1)
0xc2: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0xc3: PushEmpty()
0xc4: Call 0x347

0xc5: Pop(0)
0xc6: Push((int) 16245)
0xc7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call 0x369

0xcd: Pop(2)
0xce: Push((int) 16256)
0xcf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call 0x369

0xd5: Pop(2)
0xd6: Push((int) 16209)
0xd7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0xd9: PushEmpty(bool, object)
0xda: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdb: Call 0x375

0xdc: Pop(1)
0xdd: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xde: PushEmpty(object, object)
0xdf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe1: Call 0x363

0xe2: Pop(2)
0xe3: PushEmpty(object, object)
0xe4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe6: Call 0x36f

0xe7: Pop(2)
0xe8: PushEmpty(string)
0xe9: Stack[-1] = "Neutral"
0xea: Call 0xb0

0xeb: Pop(1)
0xec: Push((int) 14956)
0xed: @@ SetMessage(Stack[-1])
0xee: Pop(1)
0xef: @@ ClearReplies()
0xf0: Pop(0)
0xf1: Push((int) 14957)
0xf2: Push((int) 16211)
0xf3: Push((int) 16210)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Push((int) 14975)
0xf7: Push((int) 16231)
0xf8: Push((int) 16230)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Push((int) 14977)
0xfc: Push((int) 16233)
0xfd: Push((int) 16232)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Return(); Pop(0)

0x101: PushEmpty(string)
0x102: Stack[-1] = "Neutral"
0x103: Call 0xb0

0x104: Pop(1)
0x105: Push((int) 14988)
0x106: @@ SetMessage(Stack[-1])
0x107: Pop(1)
0x108: @@ ClearReplies()
0x109: Pop(0)
0x10a: PushEmpty(bool, object)
0x10b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10c: Call 0x381

0x10d: Pop(1)
0x10e: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x10f: Push((int) 14990)
0x110: Push((int) 16246)
0x111: Push((int) 16245)
0x112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113: Pop(3)
0x114: PushEmpty(bool, object)
0x115: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x116: Call 0x381

0x117: Pop(1)
0x118: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x119: Push((int) 15000)
0x11a: Push((int) 16257)
0x11b: Push((int) 16256)
0x11c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d: Pop(3)
0x11e: Push((int) 14989)
0x11f: Push((int) -1)
0x120: Push((int) 16244)
0x121: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122: Pop(3)
0x123: Return(); Pop(0)

0x124: Push((int) 16257)
0x125: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x127: PushEmpty(string)
0x128: Stack[-1] = "Neutral"
0x129: Call 0xb0

0x12a: Pop(1)
0x12b: Push((int) 15001)
0x12c: @@ SetMessage(Stack[-1])
0x12d: Pop(1)
0x12e: @@ ClearReplies()
0x12f: Pop(0)
0x130: Push((int) 15002)
0x131: Push((int) 16251)
0x132: Push((int) 16258)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: Push((int) 15003)
0x136: Push((int) 16248)
0x137: Push((int) 16260)
0x138: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x139: Pop(3)
0x13a: Return(); Pop(0)

0x13b: Push((int) 16246)
0x13c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13d: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x13e: PushEmpty(string)
0x13f: Stack[-1] = "Neutral"
0x140: Call 0xb0

0x141: Pop(1)
0x142: Push((int) 14991)
0x143: @@ SetMessage(Stack[-1])
0x144: Pop(1)
0x145: @@ ClearReplies()
0x146: Pop(0)
0x147: Push((int) 14992)
0x148: Push((int) 16248)
0x149: Push((int) 16247)
0x14a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b: Pop(3)
0x14c: Push((int) 14999)
0x14d: Push((int) 16248)
0x14e: Push((int) 16254)
0x14f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150: Pop(3)
0x151: Return(); Pop(0)

0x152: Push((int) 16248)
0x153: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x154: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x155: PushEmpty(string)
0x156: Stack[-1] = "Neutral"
0x157: Call 0xb0

0x158: Pop(1)
0x159: Push((int) 14993)
0x15a: @@ SetMessage(Stack[-1])
0x15b: Pop(1)
0x15c: @@ ClearReplies()
0x15d: Pop(0)
0x15e: Push((int) 14994)
0x15f: Push((int) -1)
0x160: Push((int) 16249)
0x161: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x162: Pop(3)
0x163: Push((int) 14995)
0x164: Push((int) 16251)
0x165: Push((int) 16250)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Return(); Pop(0)

0x169: Push((int) 16251)
0x16a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Neutral"
0x16e: Call 0xb0

0x16f: Pop(1)
0x170: Push((int) 14996)
0x171: @@ SetMessage(Stack[-1])
0x172: Pop(1)
0x173: @@ ClearReplies()
0x174: Pop(0)
0x175: Push((int) 14997)
0x176: Push((int) -1)
0x177: Push((int) 16252)
0x178: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(3)
0x17a: Push((int) 14998)
0x17b: Push((int) -1)
0x17c: Push((int) 16253)
0x17d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17e: Pop(3)
0x17f: Return(); Pop(0)

0x180: Push((int) 16233)
0x181: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x183: PushEmpty(string)
0x184: Stack[-1] = "Neutral"
0x185: Call 0xb0

0x186: Pop(1)
0x187: Push((int) 14978)
0x188: @@ SetMessage(Stack[-1])
0x189: Pop(1)
0x18a: @@ ClearReplies()
0x18b: Pop(0)
0x18c: Push((int) 14979)
0x18d: Push((int) 16235)
0x18e: Push((int) 16234)
0x18f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x190: Pop(3)
0x191: Push((int) 14987)
0x192: Push((int) -1)
0x193: Push((int) 16242)
0x194: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x195: Pop(3)
0x196: Return(); Pop(0)

0x197: Push((int) 16235)
0x198: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x199: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x19a: PushEmpty(string)
0x19b: Stack[-1] = "Neutral"
0x19c: Call 0xb0

0x19d: Pop(1)
0x19e: Push((int) 14980)
0x19f: @@ SetMessage(Stack[-1])
0x1a0: Pop(1)
0x1a1: @@ ClearReplies()
0x1a2: Pop(0)
0x1a3: Push((int) 14981)
0x1a4: Push((int) 16237)
0x1a5: Push((int) 16236)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: Push((int) 14986)
0x1a9: Push((int) -1)
0x1aa: Push((int) 16241)
0x1ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ac: Pop(3)
0x1ad: Return(); Pop(0)

0x1ae: Push((int) 16237)
0x1af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1b1: PushEmpty(string)
0x1b2: Stack[-1] = "Neutral"
0x1b3: Call 0xb0

0x1b4: Pop(1)
0x1b5: Push((int) 14982)
0x1b6: @@ SetMessage(Stack[-1])
0x1b7: Pop(1)
0x1b8: @@ ClearReplies()
0x1b9: Pop(0)
0x1ba: Push((int) 14983)
0x1bb: Push((int) -1)
0x1bc: Push((int) 16238)
0x1bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1be: Pop(3)
0x1bf: Push((int) 14984)
0x1c0: Push((int) -1)
0x1c1: Push((int) 16239)
0x1c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c3: Pop(3)
0x1c4: Push((int) 14985)
0x1c5: Push((int) -1)
0x1c6: Push((int) 16240)
0x1c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c8: Pop(3)
0x1c9: Return(); Pop(0)

0x1ca: Push((int) 16231)
0x1cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1cd: PushEmpty(string)
0x1ce: Stack[-1] = "Neutral"
0x1cf: Call 0xb0

0x1d0: Pop(1)
0x1d1: Push((int) 14976)
0x1d2: @@ SetMessage(Stack[-1])
0x1d3: Pop(1)
0x1d4: @@ ClearReplies()
0x1d5: Pop(0)
0x1d6: Return(); Pop(0)

0x1d7: Push((int) 16211)
0x1d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1da: PushEmpty(string)
0x1db: Stack[-1] = "Neutral"
0x1dc: Call 0xb0

0x1dd: Pop(1)
0x1de: Push((int) 14958)
0x1df: @@ SetMessage(Stack[-1])
0x1e0: Pop(1)
0x1e1: @@ ClearReplies()
0x1e2: Pop(0)
0x1e3: Push((int) 14959)
0x1e4: Push((int) 16213)
0x1e5: Push((int) 16212)
0x1e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e7: Pop(3)
0x1e8: Push((int) 14974)
0x1e9: Push((int) 16213)
0x1ea: Push((int) 16228)
0x1eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ec: Pop(3)
0x1ed: Return(); Pop(0)

0x1ee: Push((int) 16213)
0x1ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1f1: PushEmpty(string)
0x1f2: Stack[-1] = "Neutral"
0x1f3: Call 0xb0

0x1f4: Pop(1)
0x1f5: Push((int) 14960)
0x1f6: @@ SetMessage(Stack[-1])
0x1f7: Pop(1)
0x1f8: @@ ClearReplies()
0x1f9: Pop(0)
0x1fa: Push((int) 14961)
0x1fb: Push((int) 16215)
0x1fc: Push((int) 16214)
0x1fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fe: Pop(3)
0x1ff: Push((int) 14973)
0x200: Push((int) 16215)
0x201: Push((int) 16226)
0x202: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x203: Pop(3)
0x204: Return(); Pop(0)

0x205: Push((int) 16215)
0x206: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x208: PushEmpty(string)
0x209: Stack[-1] = "Neutral"
0x20a: Call 0xb0

0x20b: Pop(1)
0x20c: Push((int) 14962)
0x20d: @@ SetMessage(Stack[-1])
0x20e: Pop(1)
0x20f: @@ ClearReplies()
0x210: Pop(0)
0x211: Push((int) 14963)
0x212: Push((int) 16217)
0x213: Push((int) 16216)
0x214: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x215: Pop(3)
0x216: Push((int) 14968)
0x217: Push((int) 16222)
0x218: Push((int) 16221)
0x219: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21a: Pop(3)
0x21b: Return(); Pop(0)

0x21c: Push((int) 16222)
0x21d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x21f: PushEmpty(string)
0x220: Stack[-1] = "Neutral"
0x221: Call 0xb0

0x222: Pop(1)
0x223: Push((int) 14969)
0x224: @@ SetMessage(Stack[-1])
0x225: Pop(1)
0x226: @@ ClearReplies()
0x227: Pop(0)
0x228: Push((int) 14970)
0x229: Push((int) -1)
0x22a: Push((int) 16223)
0x22b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22c: Pop(3)
0x22d: Push((int) 14971)
0x22e: Push((int) -1)
0x22f: Push((int) 16224)
0x230: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x231: Pop(3)
0x232: Push((int) 14972)
0x233: Push((int) -1)
0x234: Push((int) 16225)
0x235: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x236: Pop(3)
0x237: Return(); Pop(0)

0x238: Push((int) 16217)
0x239: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x23b: PushEmpty(string)
0x23c: Stack[-1] = "Neutral"
0x23d: Call 0xb0

0x23e: Pop(1)
0x23f: Push((int) 14964)
0x240: @@ SetMessage(Stack[-1])
0x241: Pop(1)
0x242: @@ ClearReplies()
0x243: Pop(0)
0x244: Push((int) 14965)
0x245: Push((int) -1)
0x246: Push((int) 16218)
0x247: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x248: Pop(3)
0x249: Push((int) 14966)
0x24a: Push((int) -1)
0x24b: Push((int) 16219)
0x24c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24d: Pop(3)
0x24e: Push((int) 14967)
0x24f: Push((int) -1)
0x250: Push((int) 16220)
0x251: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x252: Pop(3)
0x253: Return(); Pop(0)

0x254: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x255: PushEmpty(bool)
0x256: Call 0x3a2

0x257: Pop(0)
0x258: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x259: @ lshStopAnimation()
0x25a: Pop(0)
0x25b: GOTO 0x25e

0x25c: @ StopAnimation()
0x25d: Pop(0)
0x25e: Return(); Pop(0)

0x25f: GOTO 0xc1

0x260: Return(); Pop(0)

0x261: PushEmpty()
0x262: PushEmpty()
0x263: Call 0x2ef

0x264: Pop(0)
0x265: PushEmpty(int, object)
0x266: Stack[-1] = Stack[-3]
0x267: Push(-2, 1); TaskCall(0)
0x268: Call 0x0

0x269: Pop(-2, 1); TaskReturn
0x26a: Pop(2)
0x26b: Return(); Pop(0)

0x26c: PushEmpty(bool)
0x26d: Call 0x2f4

0x26e: Pop(0)
0x26f: Pop(1); Push((bool) Stack[-1] == 0)
0x270: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x271: @ Hold()
0x272: Pop(0)
0x273: GOTO 0x26c

0x274: Push((int) 3)
0x275: @ Sleep(Stack[-1])
0x276: Pop(1)
0x277: PushEmpty()
0x278: Call 0x2aa

0x279: Pop(0)
0x27a: GOTO 0x26c

0x27b: Return(); Pop(0)

0x27c: PushEmpty(bool, bool)
0x27d: Push("cleanup")
0x27e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x27f: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x280: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x281: @ IsLoaded(Stack[-1])
0x282: Pop(0)
0x283: PushEmpty(bool)
0x284: Stack[-1] = (bool) 0
0x285: Pop(0); Push((bool) Stack[-2] == 0)
0x286: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x287: PushEmpty(bool)
0x288: Call 0x2a8

0x289: Pop(0)
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: Stack[-1] = (bool) 1
0x28c: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x28d: PushEmpty(object)
0x28e: Call 0x34e

0x28f: Pop(0)
0x290: @ RemoveActor(Stack[-1])
0x291: Pop(1)
0x292: Return(); Pop(2)

0x293: @ StopGroup0()
0x294: Pop(0)
0x295: @ sync()
0x296: Pop(0)
0x297: Return(); Pop(0)

0x298: PushEmpty(bool)
0x299: Stack[-1] = (bool) 0
0x29a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x29b: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x29c: PushEmpty(bool)
0x29d: Call 0x2a8

0x29e: Pop(0)
0x29f: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x2a0: Stack[-1] = (bool) 1
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a2: PushEmpty(object)
0x2a3: Call 0x34e

0x2a4: Pop(0)
0x2a5: @ RemoveActor(Stack[-1])
0x2a6: Pop(1)
0x2a7: Return(); Pop(0)

0x2a8: Stack[-1] = (bool) 1
0x2a9: Return(); Pop(0)

0x2aa: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2ab: @ WaitForAnimEnd()
0x2ac: Pop(0)
0x2ad: PushEmpty(bool)
0x2ae: Call 0x2f4

0x2af: Pop(0)
0x2b0: Pop(1); Push((bool) Stack[-1] == 0)
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b2: Return(); Pop(14)

0x2b3: PushEmpty(int)
0x2b4: Call 0x3ab

0x2b5: Stack[-8] = Stack[-1]
0x2b6: Pop(1)
0x2b7: Stack[-6] = (int) 0
0x2b8: PushEmpty(bool)
0x2b9: Stack[-1] = (bool) 0
0x2ba: Push((int) 5)
0x2bb: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2bd: PushEmpty(bool)
0x2be: Call 0x2f4

0x2bf: Pop(0)
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2c1: Stack[-1] = (bool) 1
0x2c2: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2c3: Push((int) 3)
0x2c4: @ irand(Stack[-6], Stack[-1])
0x2c5: Pop(1)
0x2c6: Push((int) 0)
0x2c7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2c9: Push(Stack[-7])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2cb: @ irand(Stack[-4], Stack[-7])
0x2cc: Pop(0)
0x2cd: Push("all")
0x2ce: PushEmpty(string, int)
0x2cf: Stack[-1] = Stack[-7]
0x2d0: Call 0x3a4

0x2d1: Pop(1)
0x2d2: @ PlayAnimation(Stack[-2], Stack[-1])
0x2d3: Pop(2)
0x2d4: @ WaitForAnimEnd(Stack[-3])
0x2d5: Pop(0)
0x2d6: Pop(0); Push((bool) Stack[-3] == 0)
0x2d7: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d8: GOTO 0x2ee

0x2d9: GOTO 0x2eb

0x2da: Push((int) 1)
0x2db: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2dd: Push((int) 4)
0x2de: @ rand(Stack[-3], Stack[-1])
0x2df: Pop(1)
0x2e0: Push((int) 1)
0x2e1: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2e2: @ Sleep(Stack[-1], Stack[-2])
0x2e3: Pop(1)
0x2e4: Pop(0); Push((bool) Stack[-1] == 0)
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e6: GOTO 0x2ee

0x2e7: GOTO 0x2eb

0x2e8: Push(Stack[-6])
0x2e9: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2ea: GOTO 0x2ee

0x2eb: Push((int) 1)
0x2ec: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2ed: GOTO 0x2b8

0x2ee: Return(); Pop(14)

0x2ef: @ StopAnimation()
0x2f0: Pop(0)
0x2f1: @ StopGroup0()
0x2f2: Pop(0)
0x2f3: Return(); Pop(0)

0x2f4: PushEmpty(bool, bool)
0x2f5: @ IsLoaded(Stack[-1])
0x2f6: Pop(0)
0x2f7: Stack[-3] = Stack[-1]
0x2f8: Return(); Pop(2)

0x2f9: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x2fa: @@ GetPosition(Stack[-7])
0x2fb: Pop(0)
0x2fc: @@ GetEyesHeight(Stack[-8])
0x2fd: Pop(0)
0x2fe: Push(CvectorIndex(Stack[-7], 1))
0x2ff: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x300: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x301: @ GetPosition(Stack[-6])
0x302: Pop(0)
0x303: @ GetEyesHeight(Stack[-8])
0x304: Pop(0)
0x305: Push(CvectorIndex(Stack[-6], 1))
0x306: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x307: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x308: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x309: Push(CvectorIndex(Stack[-5], 1))
0x30a: Stack[-1] = (int) 0
0x30b: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x30c: Pop(0); Push(Stack[-5] | Stack[-5]);
0x30d: Pop(1); Push(Sqrt(Stack[-1]))
0x30e: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x30f: Stack[-4] = -Stack[-5]; Pop(0);
0x310: Push((int) 70)
0x311: Pop(1); Push(Stack[-6] * Stack[-1]);
0x312: PushEmpty(cvector, cvector)
0x313: Push(CVector(0.0, 1.0, 0.0))
0x314: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x315: Call 0x354

0x316: Pop(1)
0x317: Push((int) 25)
0x318: Pop(2); Push(Stack[-2] * Stack[-1]);
0x319: Pop(2); Push(Stack[-2] + Stack[-1]);
0x31a: Push(CVector(0.0, 10.0, 0.0))
0x31b: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x31c: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x31d: @ IsOverrideActive(Stack[-1])
0x31e: Pop(0)
0x31f: Push(Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x321: Stack[-18] = (bool) 0
0x322: Return(); Pop(16)

0x323: @ StopWorld()
0x324: Pop(0)
0x325: @ CameraTransit(Stack[-2], Stack[-4])
0x326: Pop(0)
0x327: Push(CvectorIndex(Stack[-3], 0))
0x328: Push(CvectorIndex(Stack[-4], 2))
0x329: @ Rotate(Stack[-2], Stack[-1])
0x32a: Pop(2)
0x32b: @ CameraWaitForPlayFinish()
0x32c: Pop(0)
0x32d: @ ResumeWorld()
0x32e: Pop(0)
0x32f: Stack[-18] = (bool) 1
0x330: Return(); Pop(16)

0x331: PushEmpty()
0x332: @ CameraSwitchToNormal()
0x333: Pop(0)
0x334: Return(); Pop(0)

0x335: PushEmpty(float, float, float, float)
0x336: Push("playing ")
0x337: Pop(1); Push(Stack[-1] + Stack[-6]);
0x338: @ Trace(Stack[-1])
0x339: Pop(1)
0x33a: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x33b: Pop(0)
0x33c: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x33d: Pop(0)
0x33e: Push("start: ")
0x33f: Pop(1); Push(Stack[-1] + Stack[-3]);
0x340: @ Trace(Stack[-1])
0x341: Pop(1)
0x342: Push("end: ")
0x343: Pop(1); Push(Stack[-1] + Stack[-2]);
0x344: @ Trace(Stack[-1])
0x345: Pop(1)
0x346: Return(); Pop(4)

0x347: PushEmpty(bool)
0x348: Call 0x3a2

0x349: Pop(0)
0x34a: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x34b: @ lshStopSpeech()
0x34c: Pop(0)
0x34d: Return(); Pop(0)

0x34e: PushEmpty(object, object)
0x34f: @ self(Stack[-1])
0x350: Pop(0)
0x351: Stack[-3] = Stack[-1]
0x352: Return(); Pop(2)

0x353: Stack[-1] = 0
0x354: PushEmpty(float, float)
0x355: Pop(0); Push(Stack[-3] | Stack[-3]);
0x356: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x357: Push((float)0.0)
0x358: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x359: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x35a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x35b: Return(); Pop(2)

0x35c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x35d: Return(); Pop(2)

0x35e: PushEmpty(int, int)
0x35f: @ GetVariable(Stack[-3], Stack[-1])
0x360: Pop(0)
0x361: Stack[-4] = Stack[-1]
0x362: Return(); Pop(2)

0x363: PushEmpty()
0x364: Push("ood12Littleboy1")
0x365: Push((int) 1)
0x366: @ SetVariable(Stack[-2], Stack[-1])
0x367: Pop(2)
0x368: Return(); Pop(0)

0x369: PushEmpty()
0x36a: Push("ood12Littleboy2")
0x36b: Push((int) 1)
0x36c: @ SetVariable(Stack[-2], Stack[-1])
0x36d: Pop(2)
0x36e: Return(); Pop(0)

0x36f: PushEmpty()
0x370: Push("d12q01DankoKnowHeIsToy")
0x371: Push((int) 1)
0x372: @ SetVariable(Stack[-2], Stack[-1])
0x373: Pop(2)
0x374: Return(); Pop(0)

0x375: PushEmpty()
0x376: PushEmpty(int, string)
0x377: Stack[-1] = "ood12Littleboy1"
0x378: Call 0x35e

0x379: Pop(1)
0x37a: Push((int) 0)
0x37b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x37c: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37d: Stack[-2] = (bool) 1
0x37e: Return(); Pop(0)

0x37f: Stack[-2] = (bool) 0
0x380: Return(); Pop(0)

0x381: PushEmpty()
0x382: PushEmpty(int, string)
0x383: Stack[-1] = "ood12Littleboy2"
0x384: Call 0x35e

0x385: Pop(1)
0x386: Push((int) 0)
0x387: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x388: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x389: Stack[-2] = (bool) 1
0x38a: Return(); Pop(0)

0x38b: Stack[-2] = (bool) 0
0x38c: Return(); Pop(0)

0x38d: PushEmpty(int, int)
0x38e: Push("player")
0x38f: @ GetVariable(Stack[-1], Stack[-2])
0x390: Pop(1)
0x391: Push((int) 0)
0x392: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x394: Stack[-3] = (int) 200001
0x395: Return(); Pop(2)

0x396: GOTO 0x39c

0x397: Push((int) 1)
0x398: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x399: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x39a: Stack[-3] = (int) 200002
0x39b: Return(); Pop(2)

0x39c: Stack[-3] = (int) 200003
0x39d: Return(); Pop(2)

0x39e: Stack[-1] = (int) 3345
0x39f: Return(); Pop(0)

0x3a0: Stack[-1] = "ui/NPC_None.png"
0x3a1: Return(); Pop(0)

0x3a2: Stack[-1] = (bool) 0
0x3a3: Return(); Pop(0)

0x3a4: PushEmpty(string, string)
0x3a5: Stack[-1] = "idle"
0x3a6: Push(Stack[-3])
0x3a7: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a8: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3a9: Stack[-4] = Stack[-1]
0x3aa: Return(); Pop(2)

0x3ab: PushEmpty(int, bool, int, bool)
0x3ac: Stack[-2] = (int) 0
0x3ad: Push("all")
0x3ae: PushEmpty(string, int)
0x3af: Stack[-1] = Stack[-5]
0x3b0: Call 0x3a4

0x3b1: Pop(1)
0x3b2: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3b3: Pop(2)
0x3b4: Pop(0); Push((bool) Stack[-1] == 0)
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b6: GOTO 0x3ba

0x3b7: Push((int) 1)
0x3b8: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3b9: GOTO 0x3ad

0x3ba: Stack[-5] = Stack[-2]
0x3bb: Return(); Pop(4)


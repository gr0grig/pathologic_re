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
	cleanup
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	Door 
	 not found
	locked
	SetProperty
	itheater@door1
	ood12TBirdmask1
	branch
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png

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
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)

RunOp = 0x1ad
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa4 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x1b3 Vars = (object)
		EVENT_26 Op = 0x1e4 Vars = (string)
		EVENT_6 Op = 0x1ec Vars = ()
		EVENT_7 Op = 0x22d Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x2b5

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3a7

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3a5

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3a9

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3ab

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x394

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
0x41: Call2 0x2fa

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
0x4f: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x50: PushEmpty(object, object)
0x51: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53: Call2 0x37b

0x54: Pop(2)
0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x8e

0x58: Pop(1)
0x59: Push((int) 515498)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x388

0x61: Pop(1)
0x62: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x63: Push((int) 515499)
0x64: Push((int) 16596)
0x65: Push((int) 16595)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 535660)
0x69: Push((int) -1)
0x6a: Push((int) 37346)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x70

0x6e: Return(); Pop(0)

0x6f: GOTO 0x4e

0x70: PushEmpty(bool)
0x71: Call2 0x3ad

0x72: Pop(0)
0x73: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x74: @ lshWaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: PushEmpty(string)
0x7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7b: Call2 0x30c

0x7c: Pop(1)
0x7d: GOTO 0x74

0x7e: GOTO 0x8d

0x7f: Push("all")
0x80: Push("idle")
0x81: @ PlayAnimation(Stack[-2], Stack[-1])
0x82: Pop(2)
0x83: @ WaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: Push("all")
0x89: Push("idle")
0x8a: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: GOTO 0x83

0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: PushEmpty(bool)
0x90: Call2 0x3ad

0x91: Pop(0)
0x92: Pop(1); Push((bool) Stack[-1] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Return(); Pop(0)

0x98: PushEmpty(string, bool)
0x99: Stack[-2] = Stack[-3]
0x9a: Push("")
0x9b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9d: Stack[-1] = (bool) 0
0x9e: GOTO 0xa0

0x9f: Stack[-1] = (bool) 1
0xa0: Call2 0x31c

0xa1: Pop(2)
0xa2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Push((int) 1)
0xa6: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0x336

0xa9: Pop(0)
0xaa: Push((int) 16595)
0xab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x382

0xb1: Pop(2)
0xb2: Push((int) 16594)
0xb3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xb5: PushEmpty(object, object)
0xb6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8: Call2 0x37b

0xb9: Pop(2)
0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral"
0xbc: Call2 0x8e

0xbd: Pop(1)
0xbe: Push((int) 515498)
0xbf: @@ SetMessage(Stack[-1])
0xc0: Pop(1)
0xc1: @@ ClearReplies()
0xc2: Pop(0)
0xc3: PushEmpty(bool, object)
0xc4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Call2 0x388

0xc6: Pop(1)
0xc7: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc8: Push((int) 515499)
0xc9: Push((int) 16596)
0xca: Push((int) 16595)
0xcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(3)
0xcd: Push((int) 535660)
0xce: Push((int) -1)
0xcf: Push((int) 37346)
0xd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1: Pop(3)
0xd2: Return(); Pop(0)

0xd3: Push((int) 16596)
0xd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xd6: PushEmpty(string)
0xd7: Stack[-1] = "Neutral"
0xd8: Call2 0x8e

0xd9: Pop(1)
0xda: Push((int) 515500)
0xdb: @@ SetMessage(Stack[-1])
0xdc: Pop(1)
0xdd: @@ ClearReplies()
0xde: Pop(0)
0xdf: Push((int) 515501)
0xe0: Push((int) 16598)
0xe1: Push((int) 16597)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Push((int) 515523)
0xe5: Push((int) 16620)
0xe6: Push((int) 16619)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Return(); Pop(0)

0xea: Push((int) 16620)
0xeb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xed: PushEmpty(string)
0xee: Stack[-1] = "Neutral"
0xef: Call2 0x8e

0xf0: Pop(1)
0xf1: Push((int) 515524)
0xf2: @@ SetMessage(Stack[-1])
0xf3: Pop(1)
0xf4: @@ ClearReplies()
0xf5: Pop(0)
0xf6: Push((int) 515525)
0xf7: Push((int) -1)
0xf8: Push((int) 16621)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: Push((int) 16598)
0xfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xff: PushEmpty(string)
0x100: Stack[-1] = "Neutral"
0x101: Call2 0x8e

0x102: Pop(1)
0x103: Push((int) 515502)
0x104: @@ SetMessage(Stack[-1])
0x105: Pop(1)
0x106: @@ ClearReplies()
0x107: Pop(0)
0x108: Push((int) 515503)
0x109: Push((int) 16600)
0x10a: Push((int) 16599)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Push((int) 515522)
0x10e: Push((int) 16600)
0x10f: Push((int) 16618)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Return(); Pop(0)

0x113: Push((int) 16600)
0x114: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x116: PushEmpty(string)
0x117: Stack[-1] = "Neutral"
0x118: Call2 0x8e

0x119: Pop(1)
0x11a: Push((int) 515504)
0x11b: @@ SetMessage(Stack[-1])
0x11c: Pop(1)
0x11d: @@ ClearReplies()
0x11e: Pop(0)
0x11f: Push((int) 515505)
0x120: Push((int) 16602)
0x121: Push((int) 16601)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Return(); Pop(0)

0x125: Push((int) 16602)
0x126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x128: PushEmpty(string)
0x129: Stack[-1] = "Neutral"
0x12a: Call2 0x8e

0x12b: Pop(1)
0x12c: Push((int) 515506)
0x12d: @@ SetMessage(Stack[-1])
0x12e: Pop(1)
0x12f: @@ ClearReplies()
0x130: Pop(0)
0x131: Push((int) 515507)
0x132: Push((int) 16604)
0x133: Push((int) 16603)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Push((int) 515513)
0x137: Push((int) 16610)
0x138: Push((int) 16609)
0x139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: Return(); Pop(0)

0x13c: Push((int) 16610)
0x13d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x13f: PushEmpty(string)
0x140: Stack[-1] = "Neutral"
0x141: Call2 0x8e

0x142: Pop(1)
0x143: Push((int) 515514)
0x144: @@ SetMessage(Stack[-1])
0x145: Pop(1)
0x146: @@ ClearReplies()
0x147: Pop(0)
0x148: Push((int) 515516)
0x149: Push((int) 16613)
0x14a: Push((int) 16612)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Return(); Pop(0)

0x14e: Push((int) 16613)
0x14f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x151: PushEmpty(string)
0x152: Stack[-1] = "Neutral"
0x153: Call2 0x8e

0x154: Pop(1)
0x155: Push((int) 515517)
0x156: @@ SetMessage(Stack[-1])
0x157: Pop(1)
0x158: @@ ClearReplies()
0x159: Pop(0)
0x15a: Push((int) 515518)
0x15b: Push((int) -1)
0x15c: Push((int) 16614)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: Push((int) 515519)
0x160: Push((int) 16616)
0x161: Push((int) 16615)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Return(); Pop(0)

0x165: Push((int) 16616)
0x166: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x168: PushEmpty(string)
0x169: Stack[-1] = "Neutral"
0x16a: Call2 0x8e

0x16b: Pop(1)
0x16c: Push((int) 515520)
0x16d: @@ SetMessage(Stack[-1])
0x16e: Pop(1)
0x16f: @@ ClearReplies()
0x170: Pop(0)
0x171: Push((int) 515521)
0x172: Push((int) -1)
0x173: Push((int) 16617)
0x174: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x175: Pop(3)
0x176: Return(); Pop(0)

0x177: Push((int) 16604)
0x178: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x17a: PushEmpty(string)
0x17b: Stack[-1] = "Neutral"
0x17c: Call2 0x8e

0x17d: Pop(1)
0x17e: Push((int) 515508)
0x17f: @@ SetMessage(Stack[-1])
0x180: Pop(1)
0x181: @@ ClearReplies()
0x182: Pop(0)
0x183: Push((int) 515509)
0x184: Push((int) 16606)
0x185: Push((int) 16605)
0x186: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x187: Pop(3)
0x188: Push((int) 515512)
0x189: Push((int) -1)
0x18a: Push((int) 16608)
0x18b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18c: Pop(3)
0x18d: Return(); Pop(0)

0x18e: Push((int) 16606)
0x18f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x191: PushEmpty(string)
0x192: Stack[-1] = "Neutral"
0x193: Call2 0x8e

0x194: Pop(1)
0x195: Push((int) 515510)
0x196: @@ SetMessage(Stack[-1])
0x197: Pop(1)
0x198: @@ ClearReplies()
0x199: Pop(0)
0x19a: Push((int) 515511)
0x19b: Push((int) -1)
0x19c: Push((int) 16607)
0x19d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19e: Pop(3)
0x19f: Return(); Pop(0)

0x1a0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1a1: PushEmpty(bool)
0x1a2: Call2 0x3ad

0x1a3: Pop(0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a5: @ lshStopAnimation()
0x1a6: Pop(0)
0x1a7: GOTO 0x1aa

0x1a8: @ StopAnimation()
0x1a9: Pop(0)
0x1aa: Return(); Pop(0)

0x1ab: GOTO 0xa5

0x1ac: Return(); Pop(0)

0x1ad: PushEmpty(float, float)
0x1ae: Stack[-2] = (int) 300
0x1af: Stack[-1] = (int) 100
0x1b0: Call2 0x1be

0x1b1: Pop(2)
0x1b2: Return(); Pop(0)

0x1b3: PushEmpty()
0x1b4: PushEmpty()
0x1b5: Call2 0x244

0x1b6: Pop(0)
0x1b7: PushEmpty(int, object)
0x1b8: Stack[-1] = Stack[-3]
0x1b9: Push(-2, 1); TaskCall(0)
0x1ba: Call2 0x0

0x1bb: Pop(-2, 1); TaskReturn
0x1bc: Pop(2)
0x1bd: Return(); Pop(0)

0x1be: PushEmpty(float, bool, float, bool)
0x1bf: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1c0: Push((int) 3)
0x1c1: @ rand(Stack[-3], Stack[-1])
0x1c2: Pop(1)
0x1c3: Push((int) 3)
0x1c4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1c5: @ Sleep(Stack[-1], Stack[-2])
0x1c6: Pop(1)
0x1c7: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x1c8: PushEmpty(float, float)
0x1c9: Stack[-2] = Stack[-8]
0x1ca: Stack[-1] = Stack[-7]
0x1cb: Call2 0x203

0x1cc: Pop(2)
0x1cd: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1ce: GOTO 0x1c0

0x1cf: Return(); Pop(4)

0x1d0: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1d1: PushEmpty(bool)
0x1d2: Stack[-1] = (bool) 0
0x1d3: PushEmpty(bool)
0x1d4: Call2 0x2b0

0x1d5: Pop(0)
0x1d6: Pop(1); Push((bool) Stack[-1] == 0)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d8: PushEmpty(bool)
0x1d9: Call2 0x201

0x1da: Pop(0)
0x1db: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1dc: Stack[-1] = (bool) 1
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1de: PushEmpty(object)
0x1df: Call2 0x33d

0x1e0: Pop(0)
0x1e1: @ RemoveActor(Stack[-1])
0x1e2: Pop(1)
0x1e3: Return(); Pop(0)

0x1e4: PushEmpty()
0x1e5: Push("cleanup")
0x1e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e8: PushEmpty()
0x1e9: Call2 0x1d0

0x1ea: Pop(0)
0x1eb: Return(); Pop(0)

0x1ec: Push( Stack[6 + Tasks[-1].StackPointer] )
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ee: PushEmpty()
0x1ef: Call2 0x244

0x1f0: Pop(0)
0x1f1: PushEmpty(bool)
0x1f2: Stack[-1] = (bool) 0
0x1f3: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1f4: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f5: PushEmpty(bool)
0x1f6: Call2 0x201

0x1f7: Pop(0)
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f9: Stack[-1] = (bool) 1
0x1fa: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fb: PushEmpty(object)
0x1fc: Call2 0x33d

0x1fd: Pop(0)
0x1fe: @ RemoveActor(Stack[-1])
0x1ff: Pop(1)
0x200: Return(); Pop(0)

0x201: Stack[-1] = (bool) 1
0x202: Return(); Pop(0)

0x203: PushEmpty()
0x204: PushEmpty(bool)
0x205: Call2 0x2b0

0x206: Pop(0)
0x207: Pop(1); Push((bool) Stack[-1] == 0)
0x208: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x209: Return(); Pop(0)

0x20a: Push("player")
0x20b: @ FindActor(Stack[-4], Stack[-1])
0x20c: Pop(1)
0x20d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x20e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x20f: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x210: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x211: Push((int) 10)
0x212: Push((float)1.0)
0x213: @ SetTimer(Stack[-2], Stack[-1])
0x214: Pop(2)
0x215: PushEmpty()
0x216: Call2 0x252

0x217: Pop(0)
0x218: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x219: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x21a: Push((int) 10)
0x21b: @ KillTimer(Stack[-1])
0x21c: Pop(1)
0x21d: Return(); Pop(0)

0x21e: PushEmpty(float, float)
0x21f: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x220: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x221: Stack[-3] = (bool) 0
0x222: Return(); Pop(2)

0x223: PushEmpty(float, object)
0x224: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x225: Call2 0x2a8

0x226: Pop(1)
0x227: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x228: Push( Stack[2 + Tasks[-1].StackPointer] )
0x229: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x22a: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x22b: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x22c: Return(); Pop(2)

0x22d: PushEmpty()
0x22e: Push((int) 10)
0x22f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x231: PushEmpty(bool)
0x232: Call2 0x21e

0x233: Pop(0)
0x234: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x235: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x236: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x237: PushEmpty(object)
0x238: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x239: Call2 0x32b

0x23a: Pop(1)
0x23b: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x23c: GOTO 0x243

0x23d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x23e: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x23f: Push("head")
0x240: @ UnlookAsync(Stack[-1])
0x241: Pop(1)
0x242: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x243: Return(); Pop(0)

0x244: PushEmpty()
0x245: Call2 0x2a3

0x246: Pop(0)
0x247: Push((int) 10)
0x248: @ KillTimer(Stack[-1])
0x249: Pop(1)
0x24a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x24b: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24c: Push("head")
0x24d: @ UnlookAsync(Stack[-1])
0x24e: Pop(1)
0x24f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x250: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x251: Return(); Pop(0)

0x252: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x253: @ WaitForAnimEnd()
0x254: Pop(0)
0x255: PushEmpty(bool)
0x256: Call2 0x2b0

0x257: Pop(0)
0x258: Pop(1); Push((bool) Stack[-1] == 0)
0x259: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x25a: Return(); Pop(14)

0x25b: PushEmpty(int)
0x25c: Call2 0x36a

0x25d: Stack[-8] = Stack[-1]
0x25e: Pop(1)
0x25f: Stack[-6] = (int) 0
0x260: PushEmpty(bool)
0x261: Stack[-1] = (bool) 0
0x262: Push((int) 5)
0x263: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x264: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x265: PushEmpty(bool)
0x266: Call2 0x2b0

0x267: Pop(0)
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: Stack[-1] = (bool) 1
0x26a: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x26b: Push((int) 3)
0x26c: @ irand(Stack[-6], Stack[-1])
0x26d: Pop(1)
0x26e: Push((int) 0)
0x26f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x270: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x271: Push(Stack[-7])
0x272: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x273: @ irand(Stack[-4], Stack[-7])
0x274: Pop(0)
0x275: Push("all")
0x276: PushEmpty(string, int)
0x277: Stack[-1] = Stack[-7]
0x278: Call2 0x363

0x279: Pop(1)
0x27a: @ PlayAnimation(Stack[-2], Stack[-1])
0x27b: Pop(2)
0x27c: @ WaitForAnimEnd(Stack[-3])
0x27d: Pop(0)
0x27e: Pop(0); Push((bool) Stack[-3] == 0)
0x27f: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x280: GOTO 0x29e

0x281: GOTO 0x293

0x282: Push((int) 1)
0x283: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x285: Push((int) 4)
0x286: @ rand(Stack[-3], Stack[-1])
0x287: Pop(1)
0x288: Push((int) 1)
0x289: Pop(1); Push(Stack[-3] + Stack[-1]);
0x28a: @ Sleep(Stack[-1], Stack[-2])
0x28b: Pop(1)
0x28c: Pop(0); Push((bool) Stack[-1] == 0)
0x28d: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28e: GOTO 0x29e

0x28f: GOTO 0x293

0x290: Push(Stack[-6])
0x291: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x292: GOTO 0x29e

0x293: PushEmpty(bool)
0x294: Call2 0x2a1

0x295: Pop(0)
0x296: Pop(1); Push((bool) Stack[-1] == 0)
0x297: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x298: GOTO 0x29e

0x299: @ ResetAAS()
0x29a: Pop(0)
0x29b: Push((int) 1)
0x29c: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x29d: GOTO 0x260

0x29e: @ ResetAAS()
0x29f: Pop(0)
0x2a0: Return(); Pop(14)

0x2a1: Stack[-1] = (bool) 1
0x2a2: Return(); Pop(0)

0x2a3: @ StopAnimation()
0x2a4: Pop(0)
0x2a5: @ StopGroup0()
0x2a6: Pop(0)
0x2a7: Return(); Pop(0)

0x2a8: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2a9: @ GetPosition(Stack[-3])
0x2aa: Pop(0)
0x2ab: @@ GetPosition(Stack[-2])
0x2ac: Pop(0)
0x2ad: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2ae: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2af: Return(); Pop(6)

0x2b0: PushEmpty(bool, bool)
0x2b1: @ IsLoaded(Stack[-1])
0x2b2: Pop(0)
0x2b3: Stack[-3] = Stack[-1]
0x2b4: Return(); Pop(2)

0x2b5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2b6: @@ GetPosition(Stack[-8])
0x2b7: Pop(0)
0x2b8: @@ GetEyesHeight(Stack[-9])
0x2b9: Pop(0)
0x2ba: Push(CvectorIndex(Stack[-8], 1))
0x2bb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2bc: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2bd: @ GetPosition(Stack[-7])
0x2be: Pop(0)
0x2bf: @ GetEyesHeight(Stack[-9])
0x2c0: Pop(0)
0x2c1: Push(CvectorIndex(Stack[-7], 1))
0x2c2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2c3: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2c4: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2c5: Push(CvectorIndex(Stack[-6], 1))
0x2c6: Stack[-1] = (int) 0
0x2c7: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2c8: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2c9: Pop(1); Push(Sqrt(Stack[-1]))
0x2ca: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2cb: Stack[-5] = -Stack[-6]; Pop(0);
0x2cc: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2cd: PushEmpty(cvector, cvector)
0x2ce: Push(CVector(0.0, 1.0, 0.0))
0x2cf: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2d0: Call2 0x343

0x2d1: Pop(1)
0x2d2: Push((int) 25)
0x2d3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2d4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d5: Push(CVector(0.0, 10.0, 0.0))
0x2d6: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2d7: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2d8: @ IsOverrideActive(Stack[-2])
0x2d9: Pop(0)
0x2da: Push(Stack[-2])
0x2db: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dc: Stack[-21] = (bool) 0
0x2dd: Return(); Pop(18)

0x2de: @ StopWorld()
0x2df: Pop(0)
0x2e0: Push((bool) 1)
0x2e1: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2e2: Pop(1)
0x2e3: Push(CvectorIndex(Stack[-4], 0))
0x2e4: Push(CvectorIndex(Stack[-5], 2))
0x2e5: @ Rotate(Stack[-2], Stack[-1])
0x2e6: Pop(2)
0x2e7: PushEmpty(bool)
0x2e8: Call2 0x3ad

0x2e9: Pop(0)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2eb: GOTO 0x2f4

0x2ec: Push("head")
0x2ed: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2ee: Pop(1)
0x2ef: Push(Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f1: Push("head")
0x2f2: @ LookAsyncCamera(Stack[-1])
0x2f3: Pop(1)
0x2f4: @ CameraWaitForPlayFinish()
0x2f5: Pop(0)
0x2f6: @ ResumeWorld()
0x2f7: Pop(0)
0x2f8: Stack[-21] = (bool) 1
0x2f9: Return(); Pop(18)

0x2fa: PushEmpty(bool, bool)
0x2fb: Push((bool) 1)
0x2fc: @ CameraSwitchToNormal(Stack[-1])
0x2fd: Pop(1)
0x2fe: PushEmpty(bool)
0x2ff: Call2 0x3ad

0x300: Pop(0)
0x301: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x302: GOTO 0x30b

0x303: Push("head")
0x304: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x305: Pop(1)
0x306: Push(Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x308: Push("head")
0x309: @ UnlookAsync(Stack[-1])
0x30a: Pop(1)
0x30b: Return(); Pop(2)

0x30c: PushEmpty(bool, float, float, bool, float, float)
0x30d: @ lshHasAnimation(Stack[-3], Stack[-7])
0x30e: Pop(0)
0x30f: Push(Stack[-3])
0x310: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x311: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x312: Pop(0)
0x313: Push((bool) 0)
0x314: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x315: Pop(1)
0x316: GOTO 0x31b

0x317: Push("Can't find lsh animation : ")
0x318: Pop(1); Push(Stack[-1] + Stack[-8]);
0x319: @ Trace(Stack[-1])
0x31a: Pop(1)
0x31b: Return(); Pop(6)

0x31c: PushEmpty(bool, float, float, bool, float, float)
0x31d: @ lshHasAnimation(Stack[-3], Stack[-8])
0x31e: Pop(0)
0x31f: Push(Stack[-3])
0x320: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x321: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x322: Pop(0)
0x323: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x324: Pop(0)
0x325: GOTO 0x32a

0x326: Push("Can't find lsh animation : ")
0x327: Pop(1); Push(Stack[-1] + Stack[-9]);
0x328: @ Trace(Stack[-1])
0x329: Pop(1)
0x32a: Return(); Pop(6)

0x32b: PushEmpty(float, cvector, float, cvector)
0x32c: @@ GetEyesHeight(Stack[-2])
0x32d: Pop(0)
0x32e: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x32f: Push(CvectorIndex(Stack[-1], 1))
0x330: Stack[-1] = Stack[-3]
0x331: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x332: Push("head")
0x333: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x334: Pop(1)
0x335: Return(); Pop(4)

0x336: PushEmpty(bool)
0x337: Call2 0x3ad

0x338: Pop(0)
0x339: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x33a: @ lshStopSpeech()
0x33b: Pop(0)
0x33c: Return(); Pop(0)

0x33d: PushEmpty(object, object)
0x33e: @ self(Stack[-1])
0x33f: Pop(0)
0x340: Stack[-3] = Stack[-1]
0x341: Return(); Pop(2)

0x342: Stack[-1] = 0
0x343: PushEmpty(float, float)
0x344: Pop(0); Push(Stack[-3] | Stack[-3]);
0x345: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x346: Push((float)0.0)
0x347: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x348: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x349: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x34a: Return(); Pop(2)

0x34b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x34c: Return(); Pop(2)

0x34d: PushEmpty(int, int)
0x34e: @ GetVariable(Stack[-3], Stack[-1])
0x34f: Pop(0)
0x350: Stack[-4] = Stack[-1]
0x351: Return(); Pop(2)

0x352: PushEmpty(object, object)
0x353: @ FindActor(Stack[-1], Stack[-4])
0x354: Pop(0)
0x355: Pop(0); Push((bool) Stack[-1] == 0)
0x356: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x357: Push("Door ")
0x358: Pop(1); Push(Stack[-1] + Stack[-5]);
0x359: Push(" not found")
0x35a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x35b: @ Trace(Stack[-1])
0x35c: Pop(1)
0x35d: GOTO 0x361

0x35e: Push("locked")
0x35f: @@ SetProperty(Stack[-1], Stack[-4])
0x360: Pop(1)
0x361: Return(); Pop(2)

0x362: Stack[-1] = 0
0x363: PushEmpty(string, string)
0x364: Stack[-1] = "idle"
0x365: Push(Stack[-3])
0x366: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x367: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x368: Stack[-4] = Stack[-1]
0x369: Return(); Pop(2)

0x36a: PushEmpty(int, bool, int, bool)
0x36b: Stack[-2] = (int) 0
0x36c: Push("all")
0x36d: PushEmpty(string, int)
0x36e: Stack[-1] = Stack[-5]
0x36f: Call2 0x363

0x370: Pop(1)
0x371: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x372: Pop(2)
0x373: Pop(0); Push((bool) Stack[-1] == 0)
0x374: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x375: GOTO 0x379

0x376: Push((int) 1)
0x377: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x378: GOTO 0x36c

0x379: Stack[-5] = Stack[-2]
0x37a: Return(); Pop(4)

0x37b: PushEmpty()
0x37c: PushEmpty(string, bool)
0x37d: Stack[-2] = "itheater@door1"
0x37e: Stack[-1] = (bool) 0
0x37f: Call2 0x352

0x380: Pop(2)
0x381: Return(); Pop(0)

0x382: PushEmpty()
0x383: Push("ood12TBirdmask1")
0x384: Push((int) 1)
0x385: @ SetVariable(Stack[-2], Stack[-1])
0x386: Pop(2)
0x387: Return(); Pop(0)

0x388: PushEmpty()
0x389: PushEmpty(int, string)
0x38a: Stack[-1] = "ood12TBirdmask1"
0x38b: Call2 0x34d

0x38c: Pop(1)
0x38d: Push((int) 0)
0x38e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x38f: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x390: Stack[-2] = (bool) 1
0x391: Return(); Pop(0)

0x392: Stack[-2] = (bool) 0
0x393: Return(); Pop(0)

0x394: PushEmpty(int, int)
0x395: Push("branch")
0x396: @ GetVariable(Stack[-1], Stack[-2])
0x397: Pop(1)
0x398: Push((int) 0)
0x399: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x39a: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x39b: Stack[-3] = (int) 1
0x39c: Return(); Pop(2)

0x39d: GOTO 0x3a3

0x39e: Push((int) 1)
0x39f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a1: Stack[-3] = (int) 2
0x3a2: Return(); Pop(2)

0x3a3: Stack[-3] = (int) 3
0x3a4: Return(); Pop(2)

0x3a5: Stack[-1] = (int) 515571
0x3a6: Return(); Pop(0)

0x3a7: Stack[-1] = (int) 504029
0x3a8: Return(); Pop(0)

0x3a9: Stack[-1] = "ui/NPC_bmask.png"
0x3aa: Return(); Pop(0)

0x3ab: Stack[-1] = "ui/NPC_bmask_b.png"
0x3ac: Return(); Pop(0)

0x3ad: Stack[-1] = (bool) 0
0x3ae: Return(); Pop(0)


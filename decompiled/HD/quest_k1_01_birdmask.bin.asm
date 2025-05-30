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
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png
	quest_k1_01
	remove_birdmask
	branch

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
	Sleep (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
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
	Trigger (2 args)
	HasAnimation (3 args)
	GetVariable (2 args)

RunOp = 0x1ea
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa4 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x1f4 Vars = (object)
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
0xe: Call2 0x355

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x353

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x357

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x359

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x37c

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
0x53: Call2 0x375

0x54: Pop(2)
0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x8e

0x58: Pop(1)
0x59: Push((int) 525968)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 525969)
0x5f: Push((int) 27254)
0x60: Push((int) 27253)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 525988)
0x64: Push((int) 27273)
0x65: Push((int) 27272)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 525996)
0x69: Push((int) 27284)
0x6a: Push((int) 27283)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x70

0x6e: Return(); Pop(0)

0x6f: GOTO 0x4e

0x70: PushEmpty(bool)
0x71: Call2 0x35b

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
0x90: Call2 0x35b

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
0xa6: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0x336

0xa9: Pop(0)
0xaa: Push((int) 27252)
0xab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x375

0xb1: Pop(2)
0xb2: PushEmpty(string)
0xb3: Stack[-1] = "Neutral"
0xb4: Call2 0x8e

0xb5: Pop(1)
0xb6: Push((int) 525968)
0xb7: @@ SetMessage(Stack[-1])
0xb8: Pop(1)
0xb9: @@ ClearReplies()
0xba: Pop(0)
0xbb: Push((int) 525969)
0xbc: Push((int) 27254)
0xbd: Push((int) 27253)
0xbe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf: Pop(3)
0xc0: Push((int) 525988)
0xc1: Push((int) 27273)
0xc2: Push((int) 27272)
0xc3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc4: Pop(3)
0xc5: Push((int) 525996)
0xc6: Push((int) 27284)
0xc7: Push((int) 27283)
0xc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9: Pop(3)
0xca: Return(); Pop(0)

0xcb: Push((int) 27284)
0xcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral"
0xd0: Call2 0x8e

0xd1: Pop(1)
0xd2: Push((int) 525997)
0xd3: @@ SetMessage(Stack[-1])
0xd4: Pop(1)
0xd5: @@ ClearReplies()
0xd6: Pop(0)
0xd7: Push((int) 526229)
0xd8: Push((int) 27273)
0xd9: Push((int) 27495)
0xda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb: Pop(3)
0xdc: Push((int) 526230)
0xdd: Push((int) 27254)
0xde: Push((int) 27496)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: Push((int) 27273)
0xe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xe5: PushEmpty(string)
0xe6: Stack[-1] = "Neutral"
0xe7: Call2 0x8e

0xe8: Pop(1)
0xe9: Push((int) 525989)
0xea: @@ SetMessage(Stack[-1])
0xeb: Pop(1)
0xec: @@ ClearReplies()
0xed: Pop(0)
0xee: Push((int) 525990)
0xef: Push((int) 27254)
0xf0: Push((int) 27274)
0xf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2: Pop(3)
0xf3: Return(); Pop(0)

0xf4: Push((int) 27254)
0xf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xf7: PushEmpty(string)
0xf8: Stack[-1] = "Neutral"
0xf9: Call2 0x8e

0xfa: Pop(1)
0xfb: Push((int) 525970)
0xfc: @@ SetMessage(Stack[-1])
0xfd: Pop(1)
0xfe: @@ ClearReplies()
0xff: Pop(0)
0x100: Push((int) 525971)
0x101: Push((int) 27256)
0x102: Push((int) 27255)
0x103: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104: Pop(3)
0x105: Push((int) 526231)
0x106: Push((int) -1)
0x107: Push((int) 27499)
0x108: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109: Pop(3)
0x10a: Return(); Pop(0)

0x10b: Push((int) 27256)
0x10c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x10e: PushEmpty(string)
0x10f: Stack[-1] = "Neutral"
0x110: Call2 0x8e

0x111: Pop(1)
0x112: Push((int) 525972)
0x113: @@ SetMessage(Stack[-1])
0x114: Pop(1)
0x115: @@ ClearReplies()
0x116: Pop(0)
0x117: Push((int) 525973)
0x118: Push((int) 27258)
0x119: Push((int) 27257)
0x11a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b: Pop(3)
0x11c: Push((int) 526232)
0x11d: Push((int) 27258)
0x11e: Push((int) 27501)
0x11f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x120: Pop(3)
0x121: Return(); Pop(0)

0x122: Push((int) 27258)
0x123: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x125: PushEmpty(string)
0x126: Stack[-1] = "Neutral"
0x127: Call2 0x8e

0x128: Pop(1)
0x129: Push((int) 525974)
0x12a: @@ SetMessage(Stack[-1])
0x12b: Pop(1)
0x12c: @@ ClearReplies()
0x12d: Pop(0)
0x12e: Push((int) 525975)
0x12f: Push((int) 27260)
0x130: Push((int) 27259)
0x131: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x132: Pop(3)
0x133: Return(); Pop(0)

0x134: Push((int) 27260)
0x135: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x136: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x137: PushEmpty(string)
0x138: Stack[-1] = "Neutral"
0x139: Call2 0x8e

0x13a: Pop(1)
0x13b: Push((int) 525976)
0x13c: @@ SetMessage(Stack[-1])
0x13d: Pop(1)
0x13e: @@ ClearReplies()
0x13f: Pop(0)
0x140: Push((int) 525977)
0x141: Push((int) 27262)
0x142: Push((int) 27261)
0x143: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x144: Pop(3)
0x145: Return(); Pop(0)

0x146: Push((int) 27262)
0x147: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x149: PushEmpty(string)
0x14a: Stack[-1] = "Neutral"
0x14b: Call2 0x8e

0x14c: Pop(1)
0x14d: Push((int) 525978)
0x14e: @@ SetMessage(Stack[-1])
0x14f: Pop(1)
0x150: @@ ClearReplies()
0x151: Pop(0)
0x152: Push((int) 525979)
0x153: Push((int) 27264)
0x154: Push((int) 27263)
0x155: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x156: Pop(3)
0x157: Push((int) 541736)
0x158: Push((int) 43931)
0x159: Push((int) 43930)
0x15a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15b: Pop(3)
0x15c: Return(); Pop(0)

0x15d: Push((int) 43931)
0x15e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x160: PushEmpty(string)
0x161: Stack[-1] = "Neutral"
0x162: Call2 0x8e

0x163: Pop(1)
0x164: Push((int) 541737)
0x165: @@ SetMessage(Stack[-1])
0x166: Pop(1)
0x167: @@ ClearReplies()
0x168: Pop(0)
0x169: Push((int) 541738)
0x16a: Push((int) 27264)
0x16b: Push((int) 43932)
0x16c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16d: Pop(3)
0x16e: Push((int) 541739)
0x16f: Push((int) 27264)
0x170: Push((int) 43933)
0x171: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x172: Pop(3)
0x173: Return(); Pop(0)

0x174: Push((int) 27264)
0x175: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x177: PushEmpty(string)
0x178: Stack[-1] = "Neutral"
0x179: Call2 0x8e

0x17a: Pop(1)
0x17b: Push((int) 525980)
0x17c: @@ SetMessage(Stack[-1])
0x17d: Pop(1)
0x17e: @@ ClearReplies()
0x17f: Pop(0)
0x180: Push((int) 525981)
0x181: Push((int) 27266)
0x182: Push((int) 27265)
0x183: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x184: Pop(3)
0x185: Push((int) 541740)
0x186: Push((int) 27504)
0x187: Push((int) 43936)
0x188: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x189: Pop(3)
0x18a: Return(); Pop(0)

0x18b: Push((int) 27266)
0x18c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x18e: PushEmpty(string)
0x18f: Stack[-1] = "Neutral"
0x190: Call2 0x8e

0x191: Pop(1)
0x192: Push((int) 525982)
0x193: @@ SetMessage(Stack[-1])
0x194: Pop(1)
0x195: @@ ClearReplies()
0x196: Pop(0)
0x197: Push((int) 525983)
0x198: Push((int) 27504)
0x199: Push((int) 27267)
0x19a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19b: Pop(3)
0x19c: Push((int) 526233)
0x19d: Push((int) 27504)
0x19e: Push((int) 27503)
0x19f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a0: Pop(3)
0x1a1: Return(); Pop(0)

0x1a2: Push((int) 27504)
0x1a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1a5: PushEmpty(string)
0x1a6: Stack[-1] = "Neutral"
0x1a7: Call2 0x8e

0x1a8: Pop(1)
0x1a9: Push((int) 526234)
0x1aa: @@ SetMessage(Stack[-1])
0x1ab: Pop(1)
0x1ac: @@ ClearReplies()
0x1ad: Pop(0)
0x1ae: Push((int) 526235)
0x1af: Push((int) 27507)
0x1b0: Push((int) 27506)
0x1b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b2: Pop(3)
0x1b3: Push((int) 526238)
0x1b4: Push((int) 27510)
0x1b5: Push((int) 27509)
0x1b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b7: Pop(3)
0x1b8: Return(); Pop(0)

0x1b9: Push((int) 27510)
0x1ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1bc: PushEmpty(string)
0x1bd: Stack[-1] = "Neutral"
0x1be: Call2 0x8e

0x1bf: Pop(1)
0x1c0: Push((int) 526239)
0x1c1: @@ SetMessage(Stack[-1])
0x1c2: Pop(1)
0x1c3: @@ ClearReplies()
0x1c4: Pop(0)
0x1c5: Push((int) 526240)
0x1c6: Push((int) -1)
0x1c7: Push((int) 27511)
0x1c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c9: Pop(3)
0x1ca: Return(); Pop(0)

0x1cb: Push((int) 27507)
0x1cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1ce: PushEmpty(string)
0x1cf: Stack[-1] = "Neutral"
0x1d0: Call2 0x8e

0x1d1: Pop(1)
0x1d2: Push((int) 526236)
0x1d3: @@ SetMessage(Stack[-1])
0x1d4: Pop(1)
0x1d5: @@ ClearReplies()
0x1d6: Pop(0)
0x1d7: Push((int) 526237)
0x1d8: Push((int) -1)
0x1d9: Push((int) 27508)
0x1da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1db: Pop(3)
0x1dc: Return(); Pop(0)

0x1dd: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1de: PushEmpty(bool)
0x1df: Call2 0x35b

0x1e0: Pop(0)
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e2: @ lshStopAnimation()
0x1e3: Pop(0)
0x1e4: GOTO 0x1e7

0x1e5: @ StopAnimation()
0x1e6: Pop(0)
0x1e7: Return(); Pop(0)

0x1e8: GOTO 0xa5

0x1e9: Return(); Pop(0)

0x1ea: PushEmpty(float, float)
0x1eb: Stack[-2] = (int) 300
0x1ec: Stack[-1] = (int) 100
0x1ed: Call2 0x203

0x1ee: Pop(2)
0x1ef: Push((int) 3)
0x1f0: @ Sleep(Stack[-1])
0x1f1: Pop(1)
0x1f2: GOTO 0x1ea

0x1f3: Return(); Pop(0)

0x1f4: PushEmpty()
0x1f5: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f7: Return(); Pop(0)

0x1f8: PushEmpty()
0x1f9: Call2 0x244

0x1fa: Pop(0)
0x1fb: PushEmpty(int, object)
0x1fc: Stack[-1] = Stack[-3]
0x1fd: Push(-2, 1); TaskCall(0)
0x1fe: Call2 0x0

0x1ff: Pop(-2, 1); TaskReturn
0x200: Pop(2)
0x201: Stack[5 + Tasks[-1].StackPointer] = (bool)1
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
0x25c: Call2 0x364

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
0x278: Call2 0x35d

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
0x2d0: Call2 0x33d

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
0x2e8: Call2 0x35b

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
0x2ff: Call2 0x35b

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
0x337: Call2 0x35b

0x338: Pop(0)
0x339: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x33a: @ lshStopSpeech()
0x33b: Pop(0)
0x33c: Return(); Pop(0)

0x33d: PushEmpty(float, float)
0x33e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x33f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x340: Push((float)0.0)
0x341: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x342: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x343: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x344: Return(); Pop(2)

0x345: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x346: Return(); Pop(2)

0x347: PushEmpty(object, object)
0x348: @ FindActor(Stack[-1], Stack[-4])
0x349: Pop(0)
0x34a: Pop(0); Push((bool) Stack[-1] == 0)
0x34b: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34c: Stack[-5] = (bool) 0
0x34d: Return(); Pop(2)

0x34e: @ Trigger(Stack[-1], Stack[-3])
0x34f: Pop(0)
0x350: Stack[-5] = (bool) 1
0x351: Return(); Pop(2)

0x352: Stack[-1] = 0
0x353: Stack[-1] = (int) 515571
0x354: Return(); Pop(0)

0x355: Stack[-1] = (int) 504029
0x356: Return(); Pop(0)

0x357: Stack[-1] = "ui/NPC_bmask.png"
0x358: Return(); Pop(0)

0x359: Stack[-1] = "ui/NPC_bmask_b.png"
0x35a: Return(); Pop(0)

0x35b: Stack[-1] = (bool) 0
0x35c: Return(); Pop(0)

0x35d: PushEmpty(string, string)
0x35e: Stack[-1] = "idle"
0x35f: Push(Stack[-3])
0x360: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x361: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x362: Stack[-4] = Stack[-1]
0x363: Return(); Pop(2)

0x364: PushEmpty(int, bool, int, bool)
0x365: Stack[-2] = (int) 0
0x366: Push("all")
0x367: PushEmpty(string, int)
0x368: Stack[-1] = Stack[-5]
0x369: Call2 0x35d

0x36a: Pop(1)
0x36b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x36c: Pop(2)
0x36d: Pop(0); Push((bool) Stack[-1] == 0)
0x36e: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36f: GOTO 0x373

0x370: Push((int) 1)
0x371: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x372: GOTO 0x366

0x373: Stack[-5] = Stack[-2]
0x374: Return(); Pop(4)

0x375: PushEmpty()
0x376: PushEmpty(bool, string, string)
0x377: Stack[-2] = "quest_k1_01"
0x378: Stack[-1] = "remove_birdmask"
0x379: Call2 0x347

0x37a: Pop(3)
0x37b: Return(); Pop(0)

0x37c: PushEmpty(int, int)
0x37d: Push("branch")
0x37e: @ GetVariable(Stack[-1], Stack[-2])
0x37f: Pop(1)
0x380: Push((int) 0)
0x381: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x382: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x383: Stack[-3] = (int) 1
0x384: Return(); Pop(2)

0x385: GOTO 0x38b

0x386: Push((int) 1)
0x387: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x388: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x389: Stack[-3] = (int) 2
0x38a: Return(); Pop(2)

0x38b: Stack[-3] = (int) 3
0x38c: Return(); Pop(2)


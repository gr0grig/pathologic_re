GlobalVarCount = 0

Strings:
	d5q02
	place_girl
	d5q01NudeInKabak
	shouse1_kabak
	pt_d5q02_girl
	pers_nudegirl
	d5q02_girl.xml
	restore
	remove_girl
	cleanup
	place_gorbun
	d5q01Gorbun
	lc_House6_05
	pt_gorbun
	pers_bomber
	d5q02_gorbun.xml
	remove_gorbun
	completed
	GetLocator
	Locator 
	 doesn't exist

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_26 Op = 0x9 Vars = (string)
		EVENT_9 Op = 0xae Vars = (int, float)


0x0: Push("d5q02")
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(int)
0x5: Stack[-1] = (int) 5
0x6: Call 0x9b

0x7: Pop(1)
0x8: Return(); Pop(0)

0x9: PushEmpty(object, object, object, object)
0xa: @ Trace(Stack[-5])
0xb: Pop(0)
0xc: Push("place_girl")
0xd: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0xf: Push("d5q01NudeInKabak")
0x10: Push((int) 1)
0x11: @ SetVariable(Stack[-2], Stack[-1])
0x12: Pop(2)
0x13: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x14: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x15: Push("shouse1_kabak")
0x16: @ GetSceneByName(Stack[-3], Stack[-1])
0x17: Pop(1)
0x18: PushEmpty(object, object, string, string, string)
0x19: Stack[-4] = Stack[-7]
0x1a: Stack[-3] = "pt_d5q02_girl"
0x1b: Stack[-2] = "pers_nudegirl"
0x1c: Stack[-1] = "d5q02_girl.xml"
0x1d: Call 0xb9

0x1e: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x1f: Pop(5)
0x20: Stack[-2] = 0
0x21: GOTO 0x25

0x22: Push("restore")
0x23: @ Trigger(Stack[-0], Stack[-1])
0x24: Pop(1)
0x25: GOTO 0x60

0x26: Push("remove_girl")
0x27: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x28: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x29: Push("d5q01NudeInKabak")
0x2a: Push((int) 0)
0x2b: @ SetVariable(Stack[-2], Stack[-1])
0x2c: Pop(2)
0x2d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2e: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2f: Push("cleanup")
0x30: @ Trigger(Stack[-0], Stack[-1])
0x31: Pop(1)
0x32: GOTO 0x60

0x33: Push("place_gorbun")
0x34: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x35: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x36: Push("d5q01Gorbun")
0x37: Push((int) 1)
0x38: @ SetVariable(Stack[-2], Stack[-1])
0x39: Pop(2)
0x3a: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x3b: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x3c: Push("lc_House6_05")
0x3d: @ GetSceneByName(Stack[-2], Stack[-1])
0x3e: Pop(1)
0x3f: PushEmpty(object, object, string, string, string)
0x40: Stack[-4] = Stack[-6]
0x41: Stack[-3] = "pt_gorbun"
0x42: Stack[-2] = "pers_bomber"
0x43: Stack[-1] = "d5q02_gorbun.xml"
0x44: Call 0xb9

0x45: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x46: Pop(5)
0x47: Stack[-1] = 0
0x48: GOTO 0x4c

0x49: Push("restore")
0x4a: @ Trigger(Stack[-1], Stack[-1])
0x4b: Pop(1)
0x4c: GOTO 0x60

0x4d: Push("remove_gorbun")
0x4e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4f: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x50: Push("d5q01Gorbun")
0x51: Push((int) 0)
0x52: @ SetVariable(Stack[-2], Stack[-1])
0x53: Pop(2)
0x54: Push( Stack[1 + Tasks[-1].StackPointer] )
0x55: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x56: Push("cleanup")
0x57: @ Trigger(Stack[-1], Stack[-1])
0x58: Pop(1)
0x59: GOTO 0x60

0x5a: Push("completed")
0x5b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x5c: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5d: PushEmpty()
0x5e: Call 0x74

0x5f: Pop(0)
0x60: Return(); Pop(4)

0x61: PushEmpty(int, int)
0x62: Push("d5q02")
0x63: @ GetVariable(Stack[-1], Stack[-2])
0x64: Pop(1)
0x65: Push((int) 1000)
0x66: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x67: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x68: PushEmpty()
0x69: Call 0x6c

0x6a: Pop(0)
0x6b: Return(); Pop(2)

0x6c: Push("d5q02")
0x6d: Push((int) -1)
0x6e: @ SetVariable(Stack[-2], Stack[-1])
0x6f: Pop(2)
0x70: PushEmpty()
0x71: Call 0x8a

0x72: Pop(0)
0x73: Return(); Pop(0)

0x74: PushEmpty(int, int)
0x75: Push("d5q02")
0x76: @ GetVariable(Stack[-1], Stack[-2])
0x77: Pop(1)
0x78: PushEmpty(bool)
0x79: Stack[-1] = (bool) 0
0x7a: Push((int) 1000)
0x7b: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x7c: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7d: Push((int) -1)
0x7e: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x7f: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x80: Stack[-1] = (bool) 1
0x81: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x82: Push("d5q02")
0x83: Push((int) 1000)
0x84: @ SetVariable(Stack[-2], Stack[-1])
0x85: Pop(2)
0x86: PushEmpty()
0x87: Call 0x8a

0x88: Pop(0)
0x89: Return(); Pop(2)

0x8a: EventDisable(26)
0x8b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x8c: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8d: Push("cleanup")
0x8e: @ Trigger(Stack[-0], Stack[-1])
0x8f: Pop(1)
0x90: Push( Stack[1 + Tasks[-1].StackPointer] )
0x91: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x92: Push("cleanup")
0x93: @ Trigger(Stack[-1], Stack[-1])
0x94: Pop(1)
0x95: PushEmpty(object)
0x96: Call 0xb3

0x97: Pop(0)
0x98: @ RemoveActor(Stack[-1])
0x99: Pop(1)
0x9a: Return(); Pop(0)

0x9b: PushEmpty(float, float)
0x9c: @ GetGameTime(Stack[-1])
0x9d: Pop(0)
0x9e: Push((int) 24)
0x9f: Pop(1); Push(Stack[-4] * Stack[-1]);
0xa0: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xa1: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa2: PushEmpty()
0xa3: Call 0x8a

0xa4: Pop(0)
0xa5: GOTO 0xad

0xa6: Push((int) 0)
0xa7: Push((int) 24)
0xa8: Pop(1); Push(Stack[-5] * Stack[-1]);
0xa9: @ SetTimeEvent(Stack[-2], Stack[-1])
0xaa: Pop(2)
0xab: @ Hold()
0xac: Pop(0)
0xad: Return(); Pop(2)

0xae: PushEmpty()
0xaf: PushEmpty()
0xb0: Call 0x61

0xb1: Pop(0)
0xb2: Return(); Pop(0)

0xb3: PushEmpty(object, object)
0xb4: @ self(Stack[-1])
0xb5: Pop(0)
0xb6: Stack[-3] = Stack[-1]
0xb7: Return(); Pop(2)

0xb8: Stack[-1] = 0
0xb9: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xba: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xbb: Pop(0)
0xbc: Pop(0); Push((bool) Stack[-4] == 0)
0xbd: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xbe: Push("Locator ")
0xbf: Pop(1); Push(Stack[-1] + Stack[-12]);
0xc0: Push(" doesn't exist")
0xc1: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc2: @ Trace(Stack[-1])
0xc3: Pop(1)
0xc4: Stack[-1] = 0
0xc5: GOTO 0xc8

0xc6: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xc7: Pop(0)
0xc8: Stack[-13] = Stack[-1]
0xc9: Return(); Pop(8)

0xca: Stack[-1] = 0

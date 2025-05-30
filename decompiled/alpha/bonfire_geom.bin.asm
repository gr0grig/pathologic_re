GlobalVarCount = 0

Strings:
	light
	Switch
	fire_loc
	scripted
	bonfire.xml
	cleanup
	restore
	GetLocator
	Locator 
	 doesn't exist

Import:
	GetProperty (2 args)
	FindActor (2 args)
	SetVisibility (1 args)
	GetScene (1 args)
	RemoveActor (1 args)
	Hold (0 args)
	IsLoaded (1 args)
	self (1 args)
	Trace (1 args)
	AddActorByType (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, object, object) Params = 0
		EVENT_32 Op = 0x23 Vars = ()
		EVENT_26 Op = 0x2d Vars = (string)
		EVENT_6 Op = 0x49 Vars = ()


0x0: PushEmpty(string, string)
0x1: Push("light")
0x2: @ GetProperty(Stack[-1], Stack[-2])
0x3: Pop(1)
0x4: @ FindActor(Stack[-1], Stack[-1])
0x5: Pop(0)
0x6: Push((bool) 1)
0x7: @@ Switch(Stack[-1])
0x8: Pop(1)
0x9: Push((bool) 1)
0xa: @ SetVisibility(Stack[-1])
0xb: Pop(1)
0xc: PushEmpty()
0xd: Call 0x13

0xe: Pop(0)
0xf: PushEmpty()
0x10: Call 0x29

0x11: Pop(0)
0x12: Return(); Pop(2)

0x13: PushEmpty(object, string, object, string)
0x14: @ GetScene(Stack[-2])
0x15: Pop(0)
0x16: Push("fire_loc")
0x17: @ GetProperty(Stack[-1], Stack[-2])
0x18: Pop(1)
0x19: PushEmpty(object, object, string, string, string)
0x1a: Stack[-4] = Stack[-7]
0x1b: Stack[-3] = Stack[-6]
0x1c: Stack[-2] = "scripted"
0x1d: Stack[-1] = "bonfire.xml"
0x1e: Call 0x61

0x1f: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x20: Pop(5)
0x21: Return(); Pop(4)

0x22: Stack[-2] = 0
0x23: @ RemoveActor(Stack[-2])
0x24: Pop(0)
0x25: Push((bool) 0)
0x26: @@ Switch(Stack[-1])
0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: @ Hold()
0x2a: Pop(0)
0x2b: GOTO 0x29

0x2c: Return(); Pop(0)

0x2d: PushEmpty(bool, bool)
0x2e: Push("cleanup")
0x2f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x30: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x31: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x32: @ IsLoaded(Stack[-1])
0x33: Pop(0)
0x34: PushEmpty(bool)
0x35: Stack[-1] = (bool) 0
0x36: Pop(0); Push((bool) Stack[-2] == 0)
0x37: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x38: PushEmpty(bool)
0x39: Call 0x59

0x3a: Pop(0)
0x3b: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x3c: Stack[-1] = (bool) 1
0x3d: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x3e: PushEmpty(object)
0x3f: Call 0x5b

0x40: Pop(0)
0x41: @ RemoveActor(Stack[-1])
0x42: Pop(1)
0x43: GOTO 0x48

0x44: Push("restore")
0x45: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x47: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x48: Return(); Pop(2)

0x49: PushEmpty(bool)
0x4a: Stack[-1] = (bool) 0
0x4b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4c: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4d: PushEmpty(bool)
0x4e: Call 0x59

0x4f: Pop(0)
0x50: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x51: Stack[-1] = (bool) 1
0x52: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x53: PushEmpty(object)
0x54: Call 0x5b

0x55: Pop(0)
0x56: @ RemoveActor(Stack[-1])
0x57: Pop(1)
0x58: Return(); Pop(0)

0x59: Stack[-1] = (bool) 1
0x5a: Return(); Pop(0)

0x5b: PushEmpty(object, object)
0x5c: @ self(Stack[-1])
0x5d: Pop(0)
0x5e: Stack[-3] = Stack[-1]
0x5f: Return(); Pop(2)

0x60: Stack[-1] = 0
0x61: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x62: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x63: Pop(0)
0x64: Pop(0); Push((bool) Stack[-4] == 0)
0x65: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x66: Push("Locator ")
0x67: Pop(1); Push(Stack[-1] + Stack[-12]);
0x68: Push(" doesn't exist")
0x69: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6a: @ Trace(Stack[-1])
0x6b: Pop(1)
0x6c: Stack[-1] = 0
0x6d: GOTO 0x70

0x6e: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x6f: Pop(0)
0x70: Stack[-13] = Stack[-1]
0x71: Return(); Pop(8)

0x72: Stack[-1] = 0

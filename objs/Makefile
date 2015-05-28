
CC =	cc
CFLAGS =  -pipe  -std=gnu99 -D_FILE_OFFSET_BITS=64 -Wno-unused-parameter -W -Wall -Wunused-function -pedantic -g 
CPP =	cc -E
LINK =	$(CC)


ALL_INCS = -I src/core \
	-I src/digest \
	-I src/event \
	-I src/communication \
	-I src/util \
	-I src/tcpcopy \
	-I objs



CORE_DEPS = src/core/xcopy.h \
	src/core/tc_config.h \
	src/core/tc_alloc.h \
	src/core/tc_palloc.h \
	src/core/tc_array.h \
	src/core/tc_link_list.h \
	src/core/tc_hash.h \
	src/core/tc_conf_file.h \
	src/core/tc_rbtree.h \
	src/core/tc_log.h \
	src/core/tc_time.h \
	src/core/tc_signal.h \
	src/digest/tc_evp.h \
	src/event/tc_event.h \
	src/event/tc_event_timer.h \
	src/event/tc_epoll_module.h \
	src/communication/tc_socket.h \
	src/util/tc_util.h \
	src/tcpcopy/tcpcopy.h \
	src/tcpcopy/tc_manager.h \
	src/tcpcopy/tc_message_module.h \
	src/tcpcopy/tc_packets_module.h \
	src/tcpcopy/tc_session.h \
	objs/tc_auto_config.h


CORE_INCS = -I src/core \
	-I src/digest \
	-I src/event \
	-I src/communication \
	-I src/util \
	-I src/tcpcopy \
	-I objs


objs/tcpcopy:	objs/src/core/tc_alloc.o \
	objs/src/core/tc_log.o \
	objs/src/core/tc_palloc.o \
	objs/src/core/tc_array.o \
	objs/src/core/tc_link_list.o \
	objs/src/core/tc_hash.o \
	objs/src/core/tc_signal.o \
	objs/src/core/tc_time.o \
	objs/src/core/tc_conf_file.o \
	objs/src/core/tc_rbtree.o \
	objs/src/core/tc_daemon.o \
	objs/src/digest/tc_evp.o \
	objs/src/event/tc_event.o \
	objs/src/event/tc_event_timer.o \
	objs/src/event/tc_epoll_module.o \
	objs/src/communication/tc_socket.o \
	objs/src/util/tc_util.o \
	objs/src/tcpcopy/tc_manager.o \
	objs/src/tcpcopy/tc_packets_module.o \
	objs/src/tcpcopy/tc_message_module.o \
	objs/src/tcpcopy/tc_session.o \
	objs/src/tcpcopy/main.o \
	objs/tc_modules.o

	$(LINK) -o objs/tcpcopy \
	objs/src/core/tc_alloc.o \
	objs/src/core/tc_log.o \
	objs/src/core/tc_palloc.o \
	objs/src/core/tc_array.o \
	objs/src/core/tc_link_list.o \
	objs/src/core/tc_hash.o \
	objs/src/core/tc_signal.o \
	objs/src/core/tc_time.o \
	objs/src/core/tc_conf_file.o \
	objs/src/core/tc_rbtree.o \
	objs/src/core/tc_daemon.o \
	objs/src/digest/tc_evp.o \
	objs/src/event/tc_event.o \
	objs/src/event/tc_event_timer.o \
	objs/src/event/tc_epoll_module.o \
	objs/src/communication/tc_socket.o \
	objs/src/util/tc_util.o \
	objs/src/tcpcopy/tc_manager.o \
	objs/src/tcpcopy/tc_packets_module.o \
	objs/src/tcpcopy/tc_message_module.o \
	objs/src/tcpcopy/tc_session.o \
	objs/src/tcpcopy/main.o \
	objs/tc_modules.o \
	-lpcap
	


objs/tc_modules.o:	$(CORE_DEPS) \
	objs/tc_modules.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/tc_modules.o \
		objs/tc_modules.c


objs/src/core/tc_alloc.o:	$(CORE_DEPS) \
	src/core/tc_alloc.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/tc_alloc.o \
		src/core/tc_alloc.c


objs/src/core/tc_log.o:	$(CORE_DEPS) \
	src/core/tc_log.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/tc_log.o \
		src/core/tc_log.c


objs/src/core/tc_palloc.o:	$(CORE_DEPS) \
	src/core/tc_palloc.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/tc_palloc.o \
		src/core/tc_palloc.c


objs/src/core/tc_array.o:	$(CORE_DEPS) \
	src/core/tc_array.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/tc_array.o \
		src/core/tc_array.c


objs/src/core/tc_link_list.o:	$(CORE_DEPS) \
	src/core/tc_link_list.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/tc_link_list.o \
		src/core/tc_link_list.c


objs/src/core/tc_hash.o:	$(CORE_DEPS) \
	src/core/tc_hash.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/tc_hash.o \
		src/core/tc_hash.c


objs/src/core/tc_signal.o:	$(CORE_DEPS) \
	src/core/tc_signal.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/tc_signal.o \
		src/core/tc_signal.c


objs/src/core/tc_time.o:	$(CORE_DEPS) \
	src/core/tc_time.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/tc_time.o \
		src/core/tc_time.c


objs/src/core/tc_conf_file.o:	$(CORE_DEPS) \
	src/core/tc_conf_file.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/tc_conf_file.o \
		src/core/tc_conf_file.c


objs/src/core/tc_rbtree.o:	$(CORE_DEPS) \
	src/core/tc_rbtree.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/tc_rbtree.o \
		src/core/tc_rbtree.c


objs/src/core/tc_daemon.o:	$(CORE_DEPS) \
	src/core/tc_daemon.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/core/tc_daemon.o \
		src/core/tc_daemon.c


objs/src/digest/tc_evp.o:	$(CORE_DEPS) \
	src/digest/tc_evp.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/digest/tc_evp.o \
		src/digest/tc_evp.c


objs/src/event/tc_event.o:	$(CORE_DEPS) \
	src/event/tc_event.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/tc_event.o \
		src/event/tc_event.c


objs/src/event/tc_event_timer.o:	$(CORE_DEPS) \
	src/event/tc_event_timer.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/tc_event_timer.o \
		src/event/tc_event_timer.c


objs/src/event/tc_epoll_module.o:	$(CORE_DEPS) \
	src/event/tc_epoll_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/event/tc_epoll_module.o \
		src/event/tc_epoll_module.c


objs/src/communication/tc_socket.o:	$(CORE_DEPS) \
	src/communication/tc_socket.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/communication/tc_socket.o \
		src/communication/tc_socket.c


objs/src/util/tc_util.o:	$(CORE_DEPS) \
	src/util/tc_util.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/util/tc_util.o \
		src/util/tc_util.c


objs/src/tcpcopy/tc_manager.o:	$(CORE_DEPS) \
	src/tcpcopy/tc_manager.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/tcpcopy/tc_manager.o \
		src/tcpcopy/tc_manager.c


objs/src/tcpcopy/tc_packets_module.o:	$(CORE_DEPS) \
	src/tcpcopy/tc_packets_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/tcpcopy/tc_packets_module.o \
		src/tcpcopy/tc_packets_module.c


objs/src/tcpcopy/tc_message_module.o:	$(CORE_DEPS) \
	src/tcpcopy/tc_message_module.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/tcpcopy/tc_message_module.o \
		src/tcpcopy/tc_message_module.c


objs/src/tcpcopy/tc_session.o:	$(CORE_DEPS) \
	src/tcpcopy/tc_session.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/tcpcopy/tc_session.o \
		src/tcpcopy/tc_session.c


objs/src/tcpcopy/main.o:	$(CORE_DEPS) \
	src/tcpcopy/main.c
	$(CC) -c $(CFLAGS) $(CORE_INCS) \
		-o objs/src/tcpcopy/main.o \
		src/tcpcopy/main.c


install:	objs/tcpcopy
	test -d '$(DESTDIR)/usr/local/tcpcopy' || mkdir -p '$(DESTDIR)/usr/local/tcpcopy'

	test -d '$(DESTDIR)/usr/local/tcpcopy/sbin' 		|| mkdir -p '$(DESTDIR)/usr/local/tcpcopy/sbin'
	test ! -f '$(DESTDIR)/usr/local/tcpcopy/sbin/tcpcopy' 		|| mv '$(DESTDIR)/usr/local/tcpcopy/sbin/tcpcopy' 			'$(DESTDIR)/usr/local/tcpcopy/sbin/tcpcopy.old'
	cp objs/tcpcopy '$(DESTDIR)/usr/local/tcpcopy/sbin/tcpcopy'

	test -d '$(DESTDIR)/usr/local/tcpcopy/conf' 		|| mkdir -p '$(DESTDIR)/usr/local/tcpcopy/conf'

	test -f '$(DESTDIR)/usr/local/tcpcopy/conf/plugin.conf' 		|| cp conf/plugin.conf '$(DESTDIR)/usr/local/tcpcopy/conf/plugin.conf'
	cp conf/plugin.conf '$(DESTDIR)/usr/local/tcpcopy/conf/plugin.conf.default'

	test -d '$(DESTDIR)/usr/local/tcpcopy/logs' 		|| mkdir -p '$(DESTDIR)/usr/local/tcpcopy/logs'


	test -d '$(DESTDIR)/usr/local/tcpcopy/logs' || 		mkdir -p '$(DESTDIR)/usr/local/tcpcopy/logs'

SUBDIRS := $(wildcard */)

.PHONY: all clean clean-all $(SUBDIRS)

all: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@

clean:
	@for d in $(SUBDIRS); do $(MAKE) -C $$d clean; done

clean-all:
	@for d in $(SUBDIRS); do $(MAKE) -C $$d clean-all; done

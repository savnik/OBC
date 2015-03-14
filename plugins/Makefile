PLUGINLIST := adc10chi2c

all: title $(PLUGINLIST)  


#Execute make in all plugin folders
$(PLUGINLIST):
	@echo -n "   * Compliling $@.."
	@$(MAKE) -s -C $@
	@echo "Done"

#Print complie title
title:
	@echo "=== Compiling OBC Plugins ==="

#Clean all plugins
clean:
	@echo "=== Cleaning OBC Plugins ==="
	@for plugin in $(PLUGINLIST); do\
		echo -n "   * Cleaning $$plugin.. ";\
		$(MAKE) -s -C $$plugin clean;\
		echo "Done";\
	done